import numpy as np
def tableGenerator(row, column, lowestNumber):
    a = np.zeros((row,column))
    a[0:] = list(range(lowestNumber,(lowestNumber+column)))
    for i in range(1,row):
        a[i:]=list(range(lowestNumber+column*i,lowestNumber+column*i+column))
    return a

row = 4
column = 4
shesher = tableGenerator(row, row-column+1, (column-1)*row+1)
shurur = tableGenerator(row, column-1, 1)
print(shurur)
print(shesher)
arr=np.concatenate((shurur, shesher),1)
    
print(arr)


