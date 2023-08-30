# Report

## RISCV CPU improvement

running gem5:

```
riscv64-linux-gnu-gcc -O3 matrix.c -o matrix-riscv -static
./build/MIPS/gem5.fast ./configs/learning_gem5/part1/simple-mips.py

mipsel-linux-gnu-gcc -O3 -march=mips32 matrix.c -o matrix-mips
./build/RISCV/gem5.fast ./configs/learning_gem5/part1/simple-mips.py
```

### Cache memory

## Matrix multiplication

### Tests

```
clang matrix.c -o matrix && time ./matrix
clang -O3 -S -target mips -mcpu=mips32 matrix.c
```

#### Size 1024x1024

4.64s user 0.01s system 96% cpu 4.817 total
4.51s user 0.01s system 85% cpu 5.288 total
4.62s user 0.01s system 96% cpu 4.802 total

#### Size 2048x2048

123.23s user 0.17s system 98% cpu 2:05.30 total
81.86s user 0.10s system 99% cpu 1:22.74 total
114.97s user 0.23s system 98% cpu 1:56.40 total

#### Size 4096x4096

1475.90s user 13.92s system 98% cpu 25:15.06 total
1666.38s user 12.80s system 98% cpu 28:21.50 total
1611.81s user 16.64s system 98% cpu 27:34.83 total

#### Size 5000x5000

3127.29s user 22.99s system 98% cpu 53:21.36 total
3371.96s user 21.48s system 99% cpu 57:07.36 total
2988.33s user 30.86s system 98% cpu 51:11.83 total

## Linked List

### Test

```
clang linkedlist.c -o linkedlist && time ./linkedlist
```

## Breadth first search

### Tests

```
clang bfs.c -o bfs && time ./bfs
```

#### Size N=25

7.50s user 1.19s system 91% cpu 9.529 total
7.56s user 1.14s system 92% cpu 9.371 total
7.43s user 1.12s system 96% cpu 8.833 total

#### Size N=26

15.34s user 2.45s system 92% cpu 19.298 total
14.84s user 2.06s system 97% cpu 17.320 total
14.97s user 2.16s system 97% cpu 17.599 total

#### Size N=27

34.32s user 11.06s system 93% cpu 48.577 total
32.18s user 6.38s system 95% cpu 40.390 total
33.25s user 9.79s system 93% cpu 45.803 total
