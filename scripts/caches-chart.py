import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('./stats/caches.csv')
df['program_size'] = df['program'] + '-' + df['size']
grouped_data = df.groupby(['sortId', 'program_size'])['simSeconds'].mean().unstack()
ax = grouped_data.plot(kind='line', figsize=(10, 6))
plt.xticks([1, 2, 3, 4, 5, 6],['i8k-d32k', 'i16k-d32k', 'i16k-d64k', 'i16k-d128k', 'i32k-d32k', '64k-d64k'])
plt.xlabel('icache/dcache')
plt.ylabel('simSeconds')
plt.title('L1 caches')
plt.xticks(rotation=45)

plt.legend(title='Program', loc='upper right')
plt.tight_layout()
plt.savefig('./stats/charts/caches.png')
