a=[[0]*10,[0]*10,[0]*10,[0]*10,[0]*10,[0]*10,[0]*10,[0]*10,[0]*10,[0]*10]

n=int(input())
x=n//2
y=0
for i in range(1,n*n+1,1):
    a[y][x]=i
    if i%n==0:
        y=y+1
        if y==n:
            y=0
    else:
        y=y-1
        x=x+1
        if x==n:
            x=0
        if y==-1:
            y=n-1
                

for x in range(0,n,1):
    for y in range(0,n,1):
        print(a[x][y],end=" ")
    print("\n")




