def tableGenerator(row, column, lowestNumber):
    a = [[0]*column]*row
    a[0:] = list(range(lowestNumber,(lowestNumber+column)))
    for i in range(1,row):
        a[i:]=list(range(lowestNumber+column*i,lowestNumber+column*i+column))
    return a

#row,column=map(int,input().split())
row=4
column=4
shesher = tableGenerator(row, row-column+1, (column-1)*row+1)
shurur = tableGenerator(row, column-1, 1)
arr = [[0]*row]*row
for i in range(0,row):
    print(shurur[i:])
    #print(shesher[i:])
    #arr[i:]=shurur[i:]+shesher[i:] 
    #print(arr[i:])
#print(arr)


