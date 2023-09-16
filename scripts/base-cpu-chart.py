import pandas as pd
import matplotlib.pyplot as plt

# MxM
df = pd.read_csv('./stats/base-cpu-mxm.csv')
df['program_size'] = df['program'] + '-' + df['size']
ax = df.plot(kind='bar', figsize=(10, 6))

for i in range(4):
    ax.text(i, df['simSeconds'][i], df['simSeconds'][i], ha="center")

plt.xlabel('Matrix size')
plt.ylabel('Time (simSeconds)')
plt.title('Base CPU stats - MxM')
plt.xticks(range(4),['32x32','64x64','128x128','256x256'], rotation=360)
plt.savefig('./stats/charts/base-cpu-mxm.png')


# LL
df = pd.read_csv('./stats/base-cpu-ll.csv')
df['program_size'] = df['program'] + '-' + df['size']
ax = df.plot(kind='bar', figsize=(10, 6))

for i in range(4):
    ax.text(i, df['simSeconds'][i], df['simSeconds'][i], ha="center")

plt.xlabel('Number of nodes')
plt.ylabel('Time (simSeconds)')
plt.title('Base CPU stats - Linked List')
plt.xticks(range(4),['1k','10k','100k','300k'], rotation=360)
plt.savefig('./stats/charts/base-cpu-ll.png')


# BFS
df = pd.read_csv('./stats/base-cpu-bfs.csv')
df['program_size'] = df['program'] + '-' + df['size']
ax = df.plot(kind='bar', figsize=(10, 6))

for i in range(4):
    ax.text(i, df['simSeconds'][i], df['simSeconds'][i], ha="center")

plt.xlabel('Number of vertices (Graph)')
plt.ylabel('Time (simSeconds)')
plt.title('Base CPU stats - BFS')
plt.xticks(rotation=90)
plt.xticks(range(4),['64','128','256','512'], rotation=360)
plt.savefig('./stats/charts/base-cpu-bfs.png')