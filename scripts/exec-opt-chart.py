import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('./stats/exec-opt.csv')

ax = df.plot(kind='bar', figsize=(10, 6))

plt.xlabel('Programs')
plt.ylabel('Time')
plt.title('Exec unit optimizations')
plt.xticks(range(12),['mxm-32','mxm-64','mxm-128','mxm-256','ll-1k','ll-10k','ll-100k','ll-300k','bfs-64','bfs-128','bfs-256','bfs-512'])
plt.savefig('./stats/charts/exec-opt.png')
