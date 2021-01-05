a=[[0]*5,[0]*5,[0]*5,[0]*5,[0]*5]
n=1
for j in range(0,5,1):
    for i in range(0,5,1):
        a[i][j]=n
        n=n+1

for i in range(0,5,1):
    for j in range(0,5,1):
        print(a[i][j],end=" ")
    print("\n")
