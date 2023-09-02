# Improving the performance of a RISC-V processor for specific programs

## Introduction
Today in the world of cutting-edge processor optimization, the marriage of innovation and specificity paves the a way for unprecedented performance gains. In the context of computer architecture, the RISC-V processor has emerged as a versatile and open-source platform, bringing the attention of researchers and developers alike. However, as programs become increasingly intricate and varied, the need to tailor processors to serve specific applications has become more apparent. This article dives into the task of enhancing RISC-V processor performance for specific programs, by deeply analyzing their behavior at runtime, and turning ideas into optimization strategies.

## Gem5 simulator
The gem5 simulator is a versatile platform utilized for advanced research in computer-system architecture, encompassing both system-level architecture and processor micro architecture. Gem5 has several key features, including the availability of multiple interchangeable CPU models such as simple one-CPI, in-order, out-of-order, and KVM-based CPUs. Its event-driven memory system encompasses caches, snoop filters, DRAM controllers, and accommodates diverse memory types, allowing flexible arrangements to model complex cache hierarchies with heterogeneous memories. The simulator offers support for multiple instruction set architectures (ISAs) like Alpha, ARM, SPARC, MIPS, POWER, RISC-V, and x86, facilitating effective ISA decoupling from CPU models. This enables gem5 to support a range of guest platforms on various host platforms. Gem5 also accommodates homogeneous and heterogeneous multi-core systems with customizable topologies and employs cache coherence protocols for maintaining cache consistency. It possesses full-system capability for ARM, x86, RISC-V, and SPARC architectures, supporting booting of Linux, Android, and other operating systems. Additionally, gem5 operates in application-only mode, executing architecture/OS binaries through Linux emulation.

## Problem and methodology
The problem to be explored in this project is the optimization of specific programs in a RISC-V CPU, in order to do that we first need to define a base CPU model, and the programs that will be optimized for it. After that we will perform various analysis of the program's behavior, then propose and validate strategies for their runtime optimization. The end goal is to create a RISC-V CPU that is faster than the base model and/or costs less money.

### MinorCPU model
Since we first need to choose a base CPU model to work from, lucky for us at Gem5 has one that is designed for experimentation like this, the MinorCPU which was chosen for this project.
The Gem5's Minor CPU model is an in-order processor model with a fixed pipeline but configurable data structures and execute behavior. It is intended to be used to model processors with strict in-order execution behavior and allows visualization of an instruction’s position in the pipeline through the minorview tool. The intention is to provide a framework for micro-architecturally correlating the model with a particular, chosen processor with similar capabilities more details about the Minor CPU architecture can be found [here](https://www.gem5.org/documentation/general_docs/cpu_models/minor_cpu).

Also, the specific hardware details for the base model are the following:
- Architecture: RISC-V
- CPU model: MinorCPU
- Clock speed: 2Ghz
- RAM: 1x 512Mb DDR3 1600Mhz
- L1 ICache: 32k
- L1 DCache: 32k
- L2 Cache: N/A

### Programs
The three programs that we aim to optimize are Matrix multiplication (MxM), Linked List traversal (LL), and graph Breadth-First Search (BFS). These programs were chosen because each one has different characteristics when it comes to CPU needs. The source code for the programs was written in the C language, and cross-compiled to RISC-V binaries using the RISC-V GNU GCC tool.


## Optimization strategies
For exploration purposes we started with testing the three programs running on the base CPU model with different sets of input data. The input data for the programs were divided into four sets (small, medium, large, very large) for each program, where each one has a significant increase in size (and consequentially execution time). The datasets used for each programs are as follows:
- MxM
  - 32x32 - small
  - 64x64 - medium
  - 128x128 - large
  - 256x256 - very large
- LL
  - 1k nodes - small
  - 10k nodes - medium
  - 100k nodes - large
  - 300k nodes - very large
- BFS
  - 64 vertices - small
  - 128 vertices - medium
  - 256 vertices - large
  - 512 vertices - very large

### Base CPU statistics
We collected all the metrics for simulation, but for analytics purposes the ones that matter the most right now are the simulation seconds and cycles per instruction.

| Program | size    | simSeconds | CPI      |
| ------- | ------- | ---------- | -------- |
| MxM     | 32x32   | 0.001736   | 1.130370 |
| MxM     | 64x64   | 0.019175   | 1.595599 |
| MxM     | 128x128 | 0.222061   | 2.331762 |
| MxM     | 256x256 | 1.805744   | 2.381009 |
| LL      | 1k      | 0.000339   | 1.209895 |
| LL      | 10k     | 0.003585   | 1.305191 |
| LL      | 100k    | 0.035528   | 1.296130 |
| LL      | 300k    | 0.106525   | 1.295612 |
| BFS     | 64      | 0.001891   | 1.282639 |
| BFS     | 128     | 0.006731   | 1.298649 |
| BFS     | 256     | 0.028382   | 1.307054 |
| BFS     | 512     | 0.106458   | 1.316062 |

### Instruction distribution
During the execution of the tests we were also able to collect statistics about the distribution of their instructions, that can be seen in the following table:

| Program | Mem   | FloatAlu | IntAlu | IntMult | IntDiv | NoOp |
| ------- | ----- | -------- | ------ | ------- | ------ | ---- |
| MxM     | 44.45 | 4.45     | 46.65  | 4.43    | 0.0    | 0.0  |
| LL      | 36.49 | 1.09     | 62.40  | 0.0     | 0.0    | 0.0  |
| BFS     | 36.17 | 0.0      | 63.34  | 0.0     | 0.15   | 0.31 |

### Cache memory
Its generally known that Caches play a pivotal role in modern processors by bridging the speed gap between the fast CPU and the relatively slower main RAM memory, and they are essential for improving overall system performance and efficiency.

#### L1 caches
The first strategy is to optimize the L1 cache sizes and validate if there are any performance gains that can be obtained. The base CPU has a 32k instruction cache and a 32k data cache, we performed tests with instruction caches sizes of 8k/16k/32k/64k, combining with data caches of 32k/64k/128k for all programs and the input data variants.

<!-- TODO: add table with data -->

With the results obtained we can observe the following:
- Instruction cache adds value up until 16k, after that there were no performance gains for the all programs.
- Data cache greater than 32k don't provide performance gains to the LL and BFS programs.
- A MxM of size 128x128 has a performance gain from a data cache of 128k.
- The MxM program reaches its peak performance for large matrices (128x128 plus) with a data cache of 32k.

Based on this analysis we can say that a L1 instruction and data cache of 16k/32k is the optimal choice with cost benefit in mind.

#### L2 cache
Based on the same principle of the L1 caches, we analyzed the performance of the CPU after adding a L2 cache of different sizes. For the test we used the optimal L1 cache combination of 16k/32k and some other variations (16k/64k and 16k/128k which also had a good performance), in combination with a L2 cache of sizes 128k and 256k.

<!-- TODO: add table with data -->

With the results obtained we can observe the following:
- The L2 cache had a small performance improvement in a small MxM.
- The L2 cache made the performance of MxM greater than small worse by X.
- The L2 cache made the performance of LL worse by X.
- The L2 cache made the performance of BFS worse by X.
<!-- TODO: verify results -->

### CPU execution unit improvements

2 -> 4x MinorDefaultIntFU
1 -> 4x MinorDefaultMemFU
1 -> 0x MinorDefaultVecFU
decodeInputWidth=12
executeInputWidth=6
executeIssueLimit=4
executeMemoryIssueLimit=4
executeCommitLimit=4
executeMemoryCommitLimit=4


<!-- ### RISC-V Vector extension -->

## Results

## Conclusion

## References
https://www.gem5.org/about/
https://github.com/riscv-collab/riscv-gnu-toolchain