# Final project

## Optimize a MIPS Pipeline CPU for the following algorithms:

- Matrix multiplication
- Linked list
- Breadth-first search

### Running the 3 algorithms

```console
$ clang matrix.c -o matrix && ./matrix
$ clang linkedlist.c -o linkedlist && ./linkedlist
$ clang bfs.c -o bfs && ./bfs
```

### Using the GPPD-HPC infrastructure

[PCAD manual](https://gppd-hpc.inf.ufrgs.br/)

```console
$ ssh -i id_rsa wbmaas@gppd-hpc.inf.ufrgs.br # or gppd
$ # allocate a machine
$ salloc -p draco -J gem5-build -t 03:00:00
$ # or
$ salloc -p draco -w draco6 -J gem5-build -t 03:00:00
$ squeue | grep wbmaas
$ scancel 638457
$ sinfo
```

### Building gem5

[Building](https://www.gem5.org/documentation/general_docs/building)

```console
$ scons build/MIPS/gem5.opt -j 5
```
