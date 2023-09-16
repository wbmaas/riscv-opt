import pandas as pd
import matplotlib.pyplot as plt

# MxM
df = pd.read_csv('./stats/exec-opt-mxm.csv')
ax = df.plot(kind='bar', figsize=(10, 6))
ax.text(0, df['baseSimSeconds'][0], df['baseSimSeconds'][0], ha="right", color='#1f77b4')
ax.text(0, df['simSeconds'][0], df['simSeconds'][0], ha="left", color='#ff7f0e')
plt.xlabel('Matrix size')
plt.ylabel('Time (simSeconds)')
plt.title('Exec unit optimizations - MxM')
plt.xticks(range(4),['32','64','128','256'], rotation=360)
plt.savefig('./stats/charts/exec-opt-mxm.png')


# LL
df = pd.read_csv('./stats/exec-opt-ll.csv')
ax = df.plot(kind='bar', figsize=(10, 6))
ax.text(0, df['baseSimSeconds'][0], df['baseSimSeconds'][0], ha="right", color='#1f77b4')
ax.text(0, df['simSeconds'][0], df['simSeconds'][0], ha="left", color='#ff7f0e')
plt.xlabel('Number of nodes')
plt.ylabel('Time (simSeconds)')
plt.title('Exec unit optimizations - Linked List')
plt.xticks(range(4),['1k','10k','100k','300k'], rotation=360)
plt.savefig('./stats/charts/exec-opt-ll.png')


# BFS
df = pd.read_csv('./stats/exec-opt-bfs.csv')
ax = df.plot(kind='bar', figsize=(10, 6))
ax.text(0, df['baseSimSeconds'][0], df['baseSimSeconds'][0], ha="right", color='#1f77b4')
ax.text(0, df['simSeconds'][0], df['simSeconds'][0], ha="left", color='#ff7f0e')
plt.xlabel('Number of vertices (Graph)')
plt.ylabel('Time (simSeconds)')
plt.title('Exec unit optimizations - BFS')
plt.xticks(range(4),['64','128','256','512'], rotation=360)
plt.savefig('./stats/charts/exec-opt-bfs.png')
