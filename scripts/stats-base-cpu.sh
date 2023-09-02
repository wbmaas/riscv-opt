#!/bin/sh

echo 'icache/dcache,program,size,simSeconds' > stats/base-cpu.csv

grep -E "simSeconds" ../gem5/out/base-cpu/mxm-32/stats.txt | awk '{print "i32k-d32k,mxm,32x32," $2}' >> stats/base-cpu.csv
grep -E "simSeconds" ../gem5/out/base-cpu/mxm-64/stats.txt | awk '{print "i32k-d32k,mxm,64x64," $2}' >> stats/base-cpu.csv
grep -E "simSeconds" ../gem5/out/base-cpu/mxm-128/stats.txt | awk '{print "i32k-d32k,mxm,128x128," $2}' >> stats/base-cpu.csv
grep -E "simSeconds" ../gem5/out/base-cpu/mxm-256/stats.txt | awk '{print "i32k-d32k,mxm,256x256," $2}' >> stats/base-cpu.csv

grep -E "simSeconds" ../gem5/out/base-cpu/ll-1k/stats.txt | awk '{print "i32k-d32k,ll,1k," $2}' >> stats/base-cpu.csv
grep -E "simSeconds" ../gem5/out/base-cpu/ll-10k/stats.txt | awk '{print "i32k-d32k,ll,10k," $2}' >> stats/base-cpu.csv
grep -E "simSeconds" ../gem5/out/base-cpu/ll-100k/stats.txt | awk '{print "i32k-d32k,ll,100k," $2}' >> stats/base-cpu.csv
grep -E "simSeconds" ../gem5/out/base-cpu/ll-300k/stats.txt | awk '{print "i32k-d32k,ll,300k," $2}' >> stats/base-cpu.csv

grep -E "simSeconds" ../gem5/out/base-cpu/bfs-64/stats.txt | awk '{print "i32k-d32k,bfs,64," $2}' >> stats/base-cpu.csv
grep -E "simSeconds" ../gem5/out/base-cpu/bfs-128/stats.txt | awk '{print "i32k-d32k,bfs,128," $2}' >> stats/base-cpu.csv
grep -E "simSeconds" ../gem5/out/base-cpu/bfs-256/stats.txt | awk '{print "i32k-d32k,bfs,256," $2}' >> stats/base-cpu.csv
grep -E "simSeconds" ../gem5/out/base-cpu/bfs-512/stats.txt | awk '{print "i32k-d32k,bfs,512," $2}' >> stats/base-cpu.csv
