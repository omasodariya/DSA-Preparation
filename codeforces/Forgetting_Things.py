da,db=map(int,input().split())

if(da==db):
    print(f"{da*10} {db*10+1}")
elif(db-da==1):  
    print(f"{da} {db}")
elif(da==9 and db==1):  
    print(f"{9} {10}")
else:
    print("-1")
