#!/bin/sh

cd ../gem5
time ./build/RISCV/gem5.opt -r -d out/exec-opt/mxm-32  ./configs/riscv/run.py mxm-32 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/mxm-64  ./configs/riscv/run.py mxm-64 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/mxm-128 ./configs/riscv/run.py mxm-128 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/mxm-256 ./configs/riscv/run.py mxm-256 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/ll-1k   ./configs/riscv/run.py ll-1k 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/ll-10k  ./configs/riscv/run.py ll-10k 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/ll-100k ./configs/riscv/run.py ll-100k 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/ll-300k ./configs/riscv/run.py ll-300k 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/bfs-64  ./configs/riscv/run.py bfs-64 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/bfs-128 ./configs/riscv/run.py bfs-128 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/bfs-256 ./configs/riscv/run.py bfs-256 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/exec-opt/bfs-512 ./configs/riscv/run.py bfs-512 16kB 32kB
