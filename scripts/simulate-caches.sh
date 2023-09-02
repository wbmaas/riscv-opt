#!/bin/sh
cd ../gem5

# MxM
time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/mxm-32   ./configs/riscv/run.py mxm-32 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/mxm-32  ./configs/riscv/run.py mxm-32 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/mxm-32  ./configs/riscv/run.py mxm-32 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/mxm-32 ./configs/riscv/run.py mxm-32 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/mxm-32  ./configs/riscv/run.py mxm-32 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/mxm-32  ./configs/riscv/run.py mxm-32 32kB 64kB &

time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/mxm-64   ./configs/riscv/run.py mxm-64 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/mxm-64  ./configs/riscv/run.py mxm-64 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/mxm-64  ./configs/riscv/run.py mxm-64 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/mxm-64 ./configs/riscv/run.py mxm-64 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/mxm-64  ./configs/riscv/run.py mxm-64 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/mxm-64  ./configs/riscv/run.py mxm-64 32kB 64kB &

time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/mxm-128   ./configs/riscv/run.py mxm-128 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/mxm-128  ./configs/riscv/run.py mxm-128 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/mxm-128  ./configs/riscv/run.py mxm-128 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/mxm-128 ./configs/riscv/run.py mxm-128 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/mxm-128  ./configs/riscv/run.py mxm-128 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/mxm-128  ./configs/riscv/run.py mxm-128 32kB 64kB &

time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/mxm-256   ./configs/riscv/run.py mxm-256 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/mxm-256  ./configs/riscv/run.py mxm-256 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/mxm-256  ./configs/riscv/run.py mxm-256 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/mxm-256 ./configs/riscv/run.py mxm-256 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/mxm-256  ./configs/riscv/run.py mxm-256 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/mxm-256  ./configs/riscv/run.py mxm-256 32kB 64kB &

# LL
time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/ll-1k   ./configs/riscv/run.py ll-1k 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/ll-1k  ./configs/riscv/run.py ll-1k 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/ll-1k  ./configs/riscv/run.py ll-1k 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/ll-1k ./configs/riscv/run.py ll-1k 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/ll-1k  ./configs/riscv/run.py ll-1k 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/ll-1k  ./configs/riscv/run.py ll-1k 32kB 64kB &

time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/ll-10k   ./configs/riscv/run.py ll-10k 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/ll-10k  ./configs/riscv/run.py ll-10k 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/ll-10k  ./configs/riscv/run.py ll-10k 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/ll-10k ./configs/riscv/run.py ll-10k 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/ll-10k  ./configs/riscv/run.py ll-10k 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/ll-10k  ./configs/riscv/run.py ll-10k 32kB 64kB &

time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/ll-100k   ./configs/riscv/run.py ll-100k 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/ll-100k  ./configs/riscv/run.py ll-100k 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/ll-100k  ./configs/riscv/run.py ll-100k 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/ll-100k ./configs/riscv/run.py ll-100k 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/ll-100k  ./configs/riscv/run.py ll-100k 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/ll-100k  ./configs/riscv/run.py ll-100k 32kB 64kB &

time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/ll-300k   ./configs/riscv/run.py ll-300k 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/ll-300k  ./configs/riscv/run.py ll-300k 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/ll-300k  ./configs/riscv/run.py ll-300k 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/ll-300k ./configs/riscv/run.py ll-300k 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/ll-300k  ./configs/riscv/run.py ll-300k 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/ll-300k  ./configs/riscv/run.py ll-300k 32kB 64kB &

# BFS
time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/bfs-64   ./configs/riscv/run.py bfs-64 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/bfs-64  ./configs/riscv/run.py bfs-64 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/bfs-64  ./configs/riscv/run.py bfs-64 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/bfs-64 ./configs/riscv/run.py bfs-64 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/bfs-64  ./configs/riscv/run.py bfs-64 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/bfs-64  ./configs/riscv/run.py bfs-64 32kB 64kB &

time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/bfs-128   ./configs/riscv/run.py bfs-128 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/bfs-128  ./configs/riscv/run.py bfs-128 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/bfs-128  ./configs/riscv/run.py bfs-128 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/bfs-128 ./configs/riscv/run.py bfs-128 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/bfs-128  ./configs/riscv/run.py bfs-128 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/bfs-128  ./configs/riscv/run.py bfs-128 32kB 64kB &

time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/bfs-256   ./configs/riscv/run.py bfs-256 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/bfs-256  ./configs/riscv/run.py bfs-256 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/bfs-256  ./configs/riscv/run.py bfs-256 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/bfs-256 ./configs/riscv/run.py bfs-256 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/bfs-256  ./configs/riscv/run.py bfs-256 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/bfs-256  ./configs/riscv/run.py bfs-256 32kB 64kB &

time ./build/RISCV/gem5.opt -r -d out/cache/i8k-d32k/bfs-512   ./configs/riscv/run.py bfs-512 8kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d32k/bfs-512  ./configs/riscv/run.py bfs-512 16kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d64k/bfs-512  ./configs/riscv/run.py bfs-512 16kB 64kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i16k-d128k/bfs-512 ./configs/riscv/run.py bfs-512 16kB 128kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d32k/bfs-512  ./configs/riscv/run.py bfs-512 32kB 32kB &
time ./build/RISCV/gem5.opt -r -d out/cache/i32k-d64k/bfs-512  ./configs/riscv/run.py bfs-512 32kB 64kB