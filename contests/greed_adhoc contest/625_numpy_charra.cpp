import numpy as np
def tableGenerator(row, column, lowestNumber):
    a = []
    a.append(list(range(lowestNumber,(lowestNumber+column)))
    for i in range(1,row):
        print(a)
        #a.append(list(range(lowestNumber+column*i,lowestNumber+column*i+column)))
    return a

row,column=map(int,input().split())
shesher = tableGenerator(row, row-column+1, (column-1)*row+1)
shurur = tableGenerator(row, column-1, 1)
arr=np.concatenate((shurur, shesher),1)
    
print(arr)


