t=int(input())
while t>0:
    t-=1
    s=input()
    while s=='':
        s=input()
    if len(s) % 2 ==1:
        s=' '+s
    sr=0
    ans=0
    x=0
    while sr<len(s):
        x=x*100+int(s[sr]+s[sr+1])
        sr+=2
        f=9
        while (20*ans+f)*f>x:
            f-=1
        x-=(20*ans+f)*f
        ans=ans*10+f
    print(ans)
    if t>0:
        print('')