a=[[0]*7,[0]*7,[0]*7,[0]*7,[0]*7,[0]*7]
inputn=int(input())
n=1-inputn
brk_ck=0

for i in range(0,6,1):
    for j in range(0,7,1):
        if(n<=31):
            a[i][j]=n
            n=n+1
        else:
            brk_ck=1
            break
    if(brk_ck):
        break

for i in range(0,inputn,1):
    a[0][i]=0







for i in range(0,6,1):
    for j in range(0,7,1):
        print(a[i][j],end=" ")
    print("\n")
