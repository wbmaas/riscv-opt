#!/bin/sh
cd ../gem5

# MxM
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/mxm-32 ./configs/riscv/run.py mxm-32 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/mxm-32 ./configs/riscv/run.py mxm-32 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/mxm-32 ./configs/riscv/run.py mxm-32 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/mxm-32 ./configs/riscv/run.py mxm-32 16kB 64kB --l2cache=512kB &

time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/mxm-64 ./configs/riscv/run.py mxm-64 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/mxm-64 ./configs/riscv/run.py mxm-64 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/mxm-64 ./configs/riscv/run.py mxm-64 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/mxm-64 ./configs/riscv/run.py mxm-64 16kB 64kB --l2cache=512kB &

time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/mxm-128 ./configs/riscv/run.py mxm-128 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/mxm-128 ./configs/riscv/run.py mxm-128 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/mxm-128 ./configs/riscv/run.py mxm-128 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/mxm-128 ./configs/riscv/run.py mxm-128 16kB 64kB --l2cache=512kB &

time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/mxm-256 ./configs/riscv/run.py mxm-256 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/mxm-256 ./configs/riscv/run.py mxm-256 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/mxm-256 ./configs/riscv/run.py mxm-256 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/mxm-256 ./configs/riscv/run.py mxm-256 16kB 64kB --l2cache=512kB &

# LL
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/ll-1k ./configs/riscv/run.py ll-1k 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/ll-1k ./configs/riscv/run.py ll-1k 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/ll-1k ./configs/riscv/run.py ll-1k 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/ll-1k ./configs/riscv/run.py ll-1k 16kB 64kB --l2cache=512kB &

time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/ll-10k ./configs/riscv/run.py ll-10k 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/ll-10k ./configs/riscv/run.py ll-10k 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/ll-10k ./configs/riscv/run.py ll-10k 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/ll-10k ./configs/riscv/run.py ll-10k 16kB 64kB --l2cache=512kB &

time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/ll-100k ./configs/riscv/run.py ll-100k 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/ll-100k ./configs/riscv/run.py ll-100k 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/ll-100k ./configs/riscv/run.py ll-100k 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/ll-100k ./configs/riscv/run.py ll-100k 16kB 64kB --l2cache=512kB &

time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/ll-300k ./configs/riscv/run.py ll-300k 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/ll-300k ./configs/riscv/run.py ll-300k 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/ll-300k ./configs/riscv/run.py ll-300k 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/ll-300k ./configs/riscv/run.py ll-300k 16kB 64kB --l2cache=512kB &

# BFS
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/bfs-64 ./configs/riscv/run.py bfs-64 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/bfs-64 ./configs/riscv/run.py bfs-64 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/bfs-64 ./configs/riscv/run.py bfs-64 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/bfs-64 ./configs/riscv/run.py bfs-64 16kB 64kB --l2cache=512kB &

time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/bfs-128 ./configs/riscv/run.py bfs-128 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/bfs-128 ./configs/riscv/run.py bfs-128 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/bfs-128 ./configs/riscv/run.py bfs-128 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/bfs-128 ./configs/riscv/run.py bfs-128 16kB 64kB --l2cache=512kB &

time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/bfs-256 ./configs/riscv/run.py bfs-256 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/bfs-256 ./configs/riscv/run.py bfs-256 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/bfs-256 ./configs/riscv/run.py bfs-256 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/bfs-256 ./configs/riscv/run.py bfs-256 16kB 64kB --l2cache=512kB &

time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-256k/bfs-512 ./configs/riscv/run.py bfs-512 16kB 32kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d32k-512k/bfs-512 ./configs/riscv/run.py bfs-512 16kB 32kB --l2cache=512kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-256k/bfs-512 ./configs/riscv/run.py bfs-512 16kB 64kB --l2cache=256kB &
time ./build/RISCV-BASE/gem5.opt -r -d out/cache-l2/i16k-d64k-512k/bfs-512 ./configs/riscv/run.py bfs-512 16kB 64kB --l2cache=512kB