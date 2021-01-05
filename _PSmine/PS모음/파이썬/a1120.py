a=[0]*100
a[0]=1
a[1]=1
for n in range(2,100,1):
    a[n]=a[n-1]+a[n-2]

for i in range(0,100,1):
    print(a[i])
