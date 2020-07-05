import sys
for i in range(int(input())):
    n,k=map(int,sys.stdin.readline().split())
    arr=set(map(int,sys.stdin.readline().split()))
    if(len(arr)>k): print(-1)
    else:
        new_arr=list(arr)+list(range(1,(k-len(arr))+1))
        while(len(new_arr)<=n): 
            new_arr=new_arr+list(arr)
        print(len(new_arr))
        print(*new_arr)