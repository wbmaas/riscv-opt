#!/bin/sh

echo 'icache/dcache,program,size,simSeconds' > stats/caches.csv

# MxM
grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/mxm-32/stats.txt | awk '{print "i8k-d32k,mxm,32x32," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/mxm-32/stats.txt | awk '{print "i16k-d32k,mxm,32x32," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/mxm-32/stats.txt | awk '{print "i16k-d64k,mxm,32x32," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/mxm-32/stats.txt | awk '{print "i16k-d128k,mxm,32x32," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/mxm-32/stats.txt | awk '{print "i32k-d32k,mxm,32x32," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/mxm-32/stats.txt | awk '{print "i32k-d64k,mxm,32x32," $2}' >> stats/caches.csv

grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/mxm-64/stats.txt | awk '{print "i8k-d32k,mxm,64x64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/mxm-64/stats.txt | awk '{print "i16k-d32k,mxm,64x64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/mxm-64/stats.txt | awk '{print "i16k-d64k,mxm,64x64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/mxm-64/stats.txt | awk '{print "i16k-d128k,mxm,64x64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/mxm-64/stats.txt | awk '{print "i32k-d32k,mxm,64x64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/mxm-64/stats.txt | awk '{print "i32k-d64k,mxm,64x64," $2}' >> stats/caches.csv

grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/mxm-128/stats.txt | awk '{print "i8k-d32k,mxm,128x128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/mxm-128/stats.txt | awk '{print "i16k-d32k,mxm,128x128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/mxm-128/stats.txt | awk '{print "i16k-d64k,mxm,128x128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/mxm-128/stats.txt | awk '{print "i16k-d128k,mxm,128x128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/mxm-128/stats.txt | awk '{print "i32k-d32k,mxm,128x128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/mxm-128/stats.txt | awk '{print "i32k-d64k,mxm,128x128," $2}' >> stats/caches.csv

grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/mxm-256/stats.txt | awk '{print "i8k-d32k,mxm,256x256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/mxm-256/stats.txt | awk '{print "i16k-d32k,mxm,256x256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/mxm-256/stats.txt | awk '{print "i16k-d64k,mxm,256x256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/mxm-256/stats.txt | awk '{print "i16k-d128k,mxm,256x256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/mxm-256/stats.txt | awk '{print "i32k-d32k,mxm,256x256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/mxm-256/stats.txt | awk '{print "i32k-d64k,mxm,256x256," $2}' >> stats/caches.csv

# LL
grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/ll-1k/stats.txt | awk '{print "i8k-d32k,ll,1k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/ll-1k/stats.txt | awk '{print "i16k-d32k,ll,1k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/ll-1k/stats.txt | awk '{print "i16k-d64k,ll,1k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/ll-1k/stats.txt | awk '{print "i16k-d128k,ll,1k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/ll-1k/stats.txt | awk '{print "i32k-d32k,ll,1k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/ll-1k/stats.txt | awk '{print "i32k-d64k,ll,1k," $2}' >> stats/caches.csv

grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/ll-10k/stats.txt | awk '{print "i8k-d32k,ll,10k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/ll-10k/stats.txt | awk '{print "i16k-d32k,ll,10k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/ll-10k/stats.txt | awk '{print "i16k-d64k,ll,10k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/ll-10k/stats.txt | awk '{print "i16k-d128k,ll,10k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/ll-10k/stats.txt | awk '{print "i32k-d32k,ll,10k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/ll-10k/stats.txt | awk '{print "i32k-d64k,ll,10k," $2}' >> stats/caches.csv

grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/ll-100k/stats.txt | awk '{print "i8k-d32k,ll,100k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/ll-100k/stats.txt | awk '{print "i16k-d32k,ll,100k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/ll-100k/stats.txt | awk '{print "i16k-d64k,ll,100k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/ll-100k/stats.txt | awk '{print "i16k-d128k,ll,100k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/ll-100k/stats.txt | awk '{print "i32k-d32k,ll,100k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/ll-100k/stats.txt | awk '{print "i32k-d64k,ll,100k," $2}' >> stats/caches.csv

grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/ll-300k/stats.txt | awk '{print "i8k-d32k,ll,300k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/ll-300k/stats.txt | awk '{print "i16k-d32k,ll,300k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/ll-300k/stats.txt | awk '{print "i16k-d64k,ll,300k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/ll-300k/stats.txt | awk '{print "i16k-d128k,ll,300k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/ll-300k/stats.txt | awk '{print "i32k-d32k,ll,300k," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/ll-300k/stats.txt | awk '{print "i32k-d64k,ll,300k," $2}' >> stats/caches.csv

# BFS
grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/bfs-64/stats.txt | awk '{print "i8k-d32k,bfs,64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/bfs-64/stats.txt | awk '{print "i16k-d32k,bfs,64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/bfs-64/stats.txt | awk '{print "i16k-d64k,bfs,64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/bfs-64/stats.txt | awk '{print "i16k-d128k,bfs,64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/bfs-64/stats.txt | awk '{print "i32k-d32k,bfs,64," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/bfs-64/stats.txt | awk '{print "i32k-d64k,bfs,64," $2}' >> stats/caches.csv

grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/bfs-128/stats.txt | awk '{print "i8k-d32k,bfs,128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/bfs-128/stats.txt | awk '{print "i16k-d32k,bfs,128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/bfs-128/stats.txt | awk '{print "i16k-d64k,bfs,128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/bfs-128/stats.txt | awk '{print "i16k-d128k,bfs,128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/bfs-128/stats.txt | awk '{print "i32k-d32k,bfs,128," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/bfs-128/stats.txt | awk '{print "i32k-d64k,bfs,128," $2}' >> stats/caches.csv

grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/bfs-256/stats.txt | awk '{print "i8k-d32k,bfs,256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/bfs-256/stats.txt | awk '{print "i16k-d32k,bfs,256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/bfs-256/stats.txt | awk '{print "i16k-d64k,bfs,256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/bfs-256/stats.txt | awk '{print "i16k-d128k,bfs,256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/bfs-256/stats.txt | awk '{print "i32k-d32k,bfs,256," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/bfs-256/stats.txt | awk '{print "i32k-d64k,bfs,256," $2}' >> stats/caches.csv

grep -E "simSeconds" ../gem5/out/cache/i8k-d32k/bfs-512/stats.txt | awk '{print "i8k-d32k,bfs,512," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d32k/bfs-512/stats.txt | awk '{print "i16k-d32k,bfs,512," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d64k/bfs-512/stats.txt | awk '{print "i16k-d64k,bfs,512," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i16k-d128k/bfs-512/stats.txt | awk '{print "i16k-d128k,bfs,512," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d32k/bfs-512/stats.txt | awk '{print "i32k-d32k,bfs,512," $2}' >> stats/caches.csv
grep -E "simSeconds" ../gem5/out/cache/i32k-d64k/bfs-512/stats.txt | awk '{print "i32k-d64k,bfs,512," $2}' >> stats/caches.csv
