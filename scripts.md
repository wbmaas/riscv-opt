# Scripts

## Build gem5
```
git clone git@github.com:gem5/gem5.git
cd gem5
scons build/RISCV/gem5.opt -j9

```

## Compile programs
```
riscv64-linux-gnu-gcc -O0 programs/mxm.c -o bin/mxm-32 --static
riscv64-linux-gnu-gcc -O0 programs/mxm.c -o bin/mxm-64 --static
riscv64-linux-gnu-gcc -O0 programs/mxm.c -o bin/mxm-128 --static
riscv64-linux-gnu-gcc -O0 programs/mxm.c -o bin/mxm-256 --static

riscv64-linux-gnu-gcc -O0 programs/ll.c -o bin/ll-1k --static
riscv64-linux-gnu-gcc -O0 programs/ll.c -o bin/ll-10k --static
riscv64-linux-gnu-gcc -O0 programs/ll.c -o bin/ll-100k --static
riscv64-linux-gnu-gcc -O0 programs/ll.c -o bin/ll-300k --static

riscv64-linux-gnu-gcc -O0 programs/bfs.c -o bin/bfs-64 --static
riscv64-linux-gnu-gcc -O0 programs/bfs.c -o bin/bfs-128 --static
riscv64-linux-gnu-gcc -O0 programs/bfs.c -o bin/bfs-256 --static
riscv64-linux-gnu-gcc -O0 programs/bfs.c -o bin/bfs-512 --static
```

## Run simulations on gem5
```
time ./build/RISCV/gem5.opt -r -d out/mxm-32  --debug-flags=ExecAll ./configs/riscv/mxm-32.py  &
time ./build/RISCV/gem5.opt -r -d out/mxm-64  --debug-flags=ExecAll ./configs/riscv/mxm-64.py  &
time ./build/RISCV/gem5.opt -r -d out/mxm-128 --debug-flags=ExecAll ./configs/riscv/mxm-128.py &
time ./build/RISCV/gem5.opt -r -d out/mxm-256 --debug-flags=ExecAll ./configs/riscv/mxm-256.py &
time ./build/RISCV/gem5.opt -r -d out/ll-1k   --debug-flags=ExecAll ./configs/riscv/ll-1k.py   &
time ./build/RISCV/gem5.opt -r -d out/ll-10k  --debug-flags=ExecAll ./configs/riscv/ll-10k.py  &
time ./build/RISCV/gem5.opt -r -d out/ll-100k --debug-flags=ExecAll ./configs/riscv/ll-100k.py &
time ./build/RISCV/gem5.opt -r -d out/ll-300k --debug-flags=ExecAll ./configs/riscv/ll-300k.py &
time ./build/RISCV/gem5.opt -r -d out/bfs-64  --debug-flags=ExecAll ./configs/riscv/bfs-64.py  &
time ./build/RISCV/gem5.opt -r -d out/bfs-128 --debug-flags=ExecAll ./configs/riscv/bfs-128.py &
time ./build/RISCV/gem5.opt -r -d out/bfs-256 --debug-flags=ExecAll ./configs/riscv/bfs-256.py &
time ./build/RISCV/gem5.opt -r -d out/bfs-512 --debug-flags=ExecAll ./configs/riscv/bfs-512.py
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
echo 'BFS - 64' > stats/bfs-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/bfs-64/stats.txt | awk '{print $1 "=" $2}' >> stats/bfs-stats.txt
echo '\nBFS - 128' >> stats/bfs-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/bfs-128/stats.txt | awk '{print $1 "=" $2}' >> stats/bfs-stats.txt
echo '\nBFS - 256' >> stats/bfs-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/bfs-256/stats.txt | awk '{print $1 "=" $2}' >> stats/bfs-stats.txt
echo '\nBFS - 512' >> stats/bfs-stats.txt
grep -E "simSeconds|system.cpu.cpi" ../gem5/out/bfs-512/stats.txt | awk '{print $1 "=" $2}' >> stats/bfs-stats.txt
```

# Extra experiments
[Tutorial](https://gms.tf/riscv-vector.html)
[gcc v](https://gcc.gnu.org/onlinedocs/gcc/Developer-Options.html#index-fopt-info-1337)
[riscv-llvm](https://github.com/sifive/riscv-llvm)
[MxM riscv v article](https://www.luffca.com/2022/06/riscv-vector-vicuna-simulator/)
[article vector code](http://riscv.epcc.ed.ac.uk/issues/compiling-vector/)

## RISCV vector extension tests
```
riscv64-linux-gnu-gcc -O0 mxm.c -march=rv64gcv -o bin/mxm-64-v --static
~/bin/bin/riscv64-unknown-elf-gcc mxm.c -march=rv64gcv -ftree-vectorize -o bin/mxm-64-v --static


/home/wbmaas/riscv/_install/bin/riscv64-unknown-elf-gcc mxm.c --with-arch=rv64gcv -ftree-vectorize -S -o bin/mxm-64-v mxm.c

clang --target=riscv64 -march=rv32imzve32x -mabi=ilp32 \
  -O2 -mllvm --riscv-v-vector-bits-min=128 \
  -S -o bin/mxm-64-v mxm.c


time ./build/RISCV/gem5.opt -r -d out/mxm-64-v  --debug-flags=ExecAll ./configs/riscv/mxm-64-v.py
```

## Optimize MxM
```
riscv64-linux-gnu-gcc -O3 mxm.c -o bin/mxm-64-opt --static

time ./build/RISCV/gem5.opt -r -d out/mxm-64-opt  --debug-flags=ExecAll ./configs/riscv/mxm-64-opt.py
```
