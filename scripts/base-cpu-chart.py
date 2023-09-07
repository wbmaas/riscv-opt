import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('./stats/base-cpu.csv')
df['program_size'] = df['program'] + '-' + df['size']
ax = df.plot(kind='bar', figsize=(10, 6))

for i in range(12):
    ax.text(i, df['simSeconds'][i], df['simSeconds'][i], ha="center")

plt.xlabel('Programs')
plt.ylabel('simSeconds')
plt.title('Exec unit optimizations')
plt.xticks(range(12),['mxm-32x32','mxm-64x64','mxm-128x128','mxm-256x256','ll-1k','ll-10k','ll-100k','ll-300k','bfs-64','bfs-128','bfs-256','bfs-512'])
plt.savefig('./stats/charts/base-cpu.png')
