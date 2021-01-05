n=1
a=[[0]*5,[0]*5,[0]*5,[0]*5,[0]*5]

for i in range(0,5,1):
    for j in range(0,i+1,1):
        a[i][j]=n
        n=n+1
        print(a[i][j], end=" ")
    print("\n")

