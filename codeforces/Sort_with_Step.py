t=int(input())

while (t):
    t-=1
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    cnt=0
    for i in range(n):
        if (i+1)%k != arr[i]%k:
            cnt+=1

    if(cnt>2):
        print("-1")
    else:
        print(int(cnt/2))



