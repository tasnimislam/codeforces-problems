import sys
n,k=map(int,sys.stdin.readline().split())
a=list(map(int,sys.stdin.readline().split()))
a=sorted(a)

def check(x):
    moves=0
    for i in range((n+1)//2,n):
        if(x-a[i]>0): moves=x-a[i]
        if(moves-a[i]>k): return False
    if (moves<=k): return True
    else: return False   
small = 1
big = 2000000
#binary search
while(small!=big):
    mid=(small+big+1)/2
    if(check(mid)): small = mid
    else: big = mid-1
      
print(small)
''''''