import numpy as np

nx = 181
ny = 121

lx = 18
ly = 12

num_x = 17
num_y = 11

x, y = np.meshgrid(np.linspace(0, lx, nx), np.linspace(0, ly, ny))

c_all = np.zeros((0, ny * nx))

for j in range(1, num_y + 1):
    for i in range(1, num_x + 1):
        file_input = f'snap_{i}_{j}.csv'

        data = np.loadtxt(open(file_input,"rb"), delimiter=",", skiprows=1)
        data = data[ny * nx:]

        c = data[:, 0].reshape((1, ny * nx))
        c = c / np.max(c)

        c_all = np.vstack((c_all, c))

np.save('x', x)
np.save('y', y)
np.save('c_all', c_all)

print('Finish read c_all.')