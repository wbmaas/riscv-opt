import m5
from m5.objects import *
from caches import *
import argparse
parser = argparse.ArgumentParser("simple_example")
parser.add_argument("program")
parser.add_argument("icache")
parser.add_argument("dcache")
parser.add_argument("--l2cache")
args = parser.parse_args()

system = System()
system.clk_domain = SrcClockDomain()
system.clk_domain.clock = "2GHz"
system.clk_domain.voltage_domain = VoltageDomain()

system.mem_mode = "timing"
system.mem_ranges = [AddrRange("512MB")]
system.cpu = RiscvMinorCPU()
system.membus = SystemXBar()

if args.l2cache:
    system.cpu.icache = L1ICache()
    system.cpu.icache.size = args.icache
    system.cpu.dcache = L1DCache()
    system.cpu.dcache.size = args.dcache
    system.cpu.icache.connectCPU(system.cpu)
    system.cpu.dcache.connectCPU(system.cpu)
    system.l2bus = L2XBar()
    system.cpu.icache.connectBus(system.l2bus)
    system.cpu.dcache.connectBus(system.l2bus)
    system.l2cache = L2Cache()
    system.l2cache.size = args.l2cache
    system.l2cache.connectCPUSideBus(system.l2bus)
    system.l2cache.connectMemSideBus(system.membus)
else:
    system.cpu.icache = L1ICache()
    system.cpu.icache.size = args.icache
    system.cpu.dcache = L1DCache()
    system.cpu.dcache.size = args.dcache
    system.cpu.icache.cpu_side = system.cpu.icache_port
    system.cpu.dcache.cpu_side = system.cpu.dcache_port
    system.cpu.icache.mem_side = system.membus.cpu_side_ports
    system.cpu.dcache.mem_side = system.membus.cpu_side_ports

system.cpu.createInterruptController()

system.mem_ctrl = MemCtrl()
system.mem_ctrl.dram = DDR3_1600_8x8()
system.mem_ctrl.dram.range = system.mem_ranges[0]
system.mem_ctrl.port = system.membus.mem_side_ports

system.system_port = system.membus.cpu_side_ports

thispath = os.path.dirname(os.path.realpath(__file__))
binary = os.path.join(
    thispath,
    "/home/wbmaas/dev/cmp-199/bin/" + args.program,
)

system.workload = SEWorkload.init_compatible(binary)

process = Process()
process.cmd = [binary]
system.cpu.workload = process
system.cpu.createThreads()

root = Root(full_system=False, system=system)
m5.instantiate()

print("Beginning simulation!")
exit_event = m5.simulate()
print("Exiting @ tick %i because %s" % (m5.curTick(), exit_event.getCause()))
