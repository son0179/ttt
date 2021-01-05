s=0
n=0
c=0
for i in range(1,11,1):
    n=int(input("%d번째 숫자를 입력하세요"%i))
    if n>=0:
        s=n+s
        c=c+1
print(s/c)
