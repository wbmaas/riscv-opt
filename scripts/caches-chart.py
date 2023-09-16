import pandas as pd
import matplotlib.pyplot as plt

# MxM
df = pd.read_csv('./stats/caches-mxm.csv')
df['program_size'] = df['program'] + '-' + df['size']
grouped_data = df.groupby(['sortId', 'program_size'])['simSeconds'].mean().unstack()
ax = grouped_data.plot(kind='bar', figsize=(10, 6))
plt.xticks([0, 1, 2, 3, 4, 5],['i8k/d32k', 'i16k/d32k', 'i16k/d64k', 'i16k/d128k', 'i32k/d32k', '64k/d64k'])
plt.xlabel('L1 Cache (icache/dcache)')
plt.ylabel('Time (simSeconds)')
plt.title('L1 caches - MxM')
plt.xticks(rotation=360)

plt.legend(title='Program', loc='upper right')
plt.tight_layout()
plt.savefig('./stats/charts/caches-mxm.png')


# LL
df = pd.read_csv('./stats/caches-ll.csv')
df['program_size'] = df['program'] + '-' + df['size']
grouped_data = df.groupby(['sortId', 'program_size'])['simSeconds'].mean().unstack()
ax = grouped_data.plot(kind='bar', figsize=(10, 6))
plt.xticks([0, 1, 2, 3, 4, 5],['i8k/d32k', 'i16k/d32k', 'i16k/d64k', 'i16k/d128k', 'i32k/d32k', '64k/d64k'])
plt.xlabel('L1 Cache (icache/dcache)')
plt.ylabel('Time (simSeconds)')
plt.title('L1 caches - Linked List')
plt.xticks(rotation=360)

plt.legend(title='Program', loc='upper right')
plt.tight_layout()
plt.savefig('./stats/charts/caches-ll.png')


# BFS
df = pd.read_csv('./stats/caches-bfs.csv')
df['program_size'] = df['program'] + '-' + df['size']
grouped_data = df.groupby(['sortId', 'program_size'])['simSeconds'].mean().unstack()
ax = grouped_data.plot(kind='bar', figsize=(10, 6))
plt.xticks([0, 1, 2, 3, 4, 5],['i8k/d32k', 'i16k/d32k', 'i16k/d64k', 'i16k/d128k', 'i32k/d32k', '64k/d64k'])
plt.xlabel('L1 Cache (icache/dcache)')
plt.ylabel('Time (simSeconds)')
plt.title('L1 caches - BFS')
plt.xticks(rotation=360)

plt.legend(title='Program', loc='upper right')
plt.tight_layout()
plt.savefig('./stats/charts/caches-bfs.png')
