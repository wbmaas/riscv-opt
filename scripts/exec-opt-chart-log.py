import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('./stats/exec-opt.csv')
ax = df.plot(kind='bar', figsize=(10, 6))

for i in range(12):
    ax.text(i, df['baseSimSeconds'][i], df['baseSimSeconds'][i], ha="center")
    ax.text(i, df['simSeconds'][i], df['simSeconds'][i], ha="center")

ax.set_yscale('log')

plt.xlabel('Programs')
plt.ylabel('Time')
plt.title('Exec unit optimizations')
plt.xticks(range(12),['mxm-32','mxm-64','mxm-128','mxm-256','ll-1k','ll-10k','ll-100k','ll-300k','bfs-64','bfs-128','bfs-256','bfs-512'])
plt.savefig('./stats/charts/exec-opt-log.png')
