# Scripts

## Compile programs
```
riscv64-linux-gnu-gcc -O0 mxm.c -o bin/mxm-32 --static
riscv64-linux-gnu-gcc -O0 mxm.c -o bin/mxm-64 --static
riscv64-linux-gnu-gcc -O0 mxm.c -o bin/mxm-128 --static
riscv64-linux-gnu-gcc -O0 mxm.c -o bin/mxm-256 --static

riscv64-linux-gnu-gcc -O0 ll.c -o bin/ll-1k --static
riscv64-linux-gnu-gcc -O0 ll.c -o bin/ll-10k --static
riscv64-linux-gnu-gcc -O0 ll.c -o bin/ll-100k --static
riscv64-linux-gnu-gcc -O0 ll.c -o bin/ll-300k --static

riscv64-linux-gnu-gcc -O0 bfs.c -o bin/bfs-64 --static
riscv64-linux-gnu-gcc -O0 bfs.c -o bin/bfs-128 --static
riscv64-linux-gnu-gcc -O0 bfs.c -o bin/bfs-256 --static
riscv64-linux-gnu-gcc -O0 bfs.c -o bin/bfs-512 --static
```

## running gem5
```
# with tracefile
./build/RISCV/gem5.opt -r --stdout=tracefile --debug-flags=ExecAll ./configs/learning_gem5/part1/simple-riscv.py && grep system.cpu.cpi m5out/stats.txt

# run simulation
./build/RISCV/gem5.opt -d out/mxm-32 --debug-flags=ExecAll ./configs/riscv/mxm-32.py &&
./build/RISCV/gem5.opt -d out/mxm-64 --debug-flags=ExecAll ./configs/riscv/mxm-64.py &&
./build/RISCV/gem5.opt -d out/mxm-128 --debug-flags=ExecAll ./configs/riscv/mxm-128.py &&
./build/RISCV/gem5.opt -d out/mxm-256 --debug-flags=ExecAll ./configs/riscv/mxm-256.py

./build/RISCV/gem5.opt -d out/ll-1k --debug-flags=ExecAll ./configs/riscv/ll-1k.py &&
./build/RISCV/gem5.opt -d out/ll-10k --debug-flags=ExecAll ./configs/riscv/ll-10k.py &&
./build/RISCV/gem5.opt -d out/ll-100k --debug-flags=ExecAll ./configs/riscv/ll-100k.py &&
./build/RISCV/gem5.opt -d out/ll-300k --debug-flags=ExecAll ./configs/riscv/ll-300k.py

./build/RISCV/gem5.opt -d out/bfs-64 --debug-flags=ExecAll ./configs/riscv/bfs-64.py &&
./build/RISCV/gem5.opt -d out/bfs-128 --debug-flags=ExecAll ./configs/riscv/bfs-128.py &&
./build/RISCV/gem5.opt -d out/bfs-256 --debug-flags=ExecAll ./configs/riscv/bfs-256.py &&
./build/RISCV/gem5.opt -d out/bfs-512 --debug-flags=ExecAll ./configs/riscv/bfs-512.py
```

## Extracting statistics
### MxM
```
echo 'MxM - 32x32' > stats/mxm-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/mxm-32/stats.txt | awk '{print $1 "=" $2}' >> stats/mxm-stats.txt
echo '\nMxM - 64x64' >> stats/mxm-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/mxm-64/stats.txt | awk '{print $1 "=" $2}' >> stats/mxm-stats.txt
echo '\nMxM - 128x128' >> stats/mxm-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/mxm-128/stats.txt | awk '{print $1 "=" $2}' >> stats/mxm-stats.txt
echo '\nMxM - 256x256' >> stats/mxm-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/mxm-256/stats.txt | awk '{print $1 "=" $2}' >> stats/mxm-stats.txt
```

### LL
```
echo 'LL - 1k' > stats/ll-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/ll-1k/stats.txt | awk '{print $1 "=" $2}' >> stats/ll-stats.txt
echo '\nLL - 10k' >> stats/ll-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/ll-10k/stats.txt | awk '{print $1 "=" $2}' >> stats/ll-stats.txt
echo '\nLL - 100k' >> stats/ll-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/ll-100k/stats.txt | awk '{print $1 "=" $2}' >> stats/ll-stats.txt
echo '\nLL - 300k' >> stats/ll-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/ll-300k/stats.txt | awk '{print $1 "=" $2}' >> stats/ll-stats.txt
```

### BFS
```
echo 'BFS- 32x32' > stats/bfs-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/bfs-64/stats.txt | awk '{print $1 "=" $2}' >> stats/bfs-stats.txt
echo '\nBFS- 64x64' >> stats/bfs-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/bfs-128/stats.txt | awk '{print $1 "=" $2}' >> stats/bfs-stats.txt
echo '\nBFS- 128x128' >> stats/bfs-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/bfs-256/stats.txt | awk '{print $1 "=" $2}' >> stats/bfs-stats.txt
echo '\nBFS- 256x256' >> stats/bfs-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/bfs-512/stats.txt | awk '{print $1 "=" $2}' >> stats/bfs-stats.txt
```