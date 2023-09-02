import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('./stats/caches.csv')
df['program_size'] = df['program'] + '-' + df['size']

for program in ['mxm', 'll', 'bfs']:
    filtered_df = df[df['program'] == program]
    grouped_data = filtered_df.groupby(['icache/dcache', 'program_size'])['simSeconds'].mean().unstack()

    ax = grouped_data.plot(kind='line', stacked=True, figsize=(10, 6))
    plt.xlabel('icache/dcache')
    plt.ylabel('simSeconds')
    plt.title(f'simSeconds for Program: {program}')
    plt.xticks(rotation=45)

    plt.legend(title='Program ' + program, loc='upper right')
    plt.tight_layout()
    plt.savefig('./stats/charts/caches-' + program + '.png')
    # plt.show()
