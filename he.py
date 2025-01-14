i=int(input())
l=[]
for j in range(i):
    f=input()
    l.append(f)
for k in l:
    for p in k:
        g=0
        h=0
        m=0
        n=0
        o=0
        if(p=='n'): 
            g+=1
        elif(p=='e'): 
            h+=1
        elif(p=='u'): 
            m+=1
        elif(p=='r'): 
            n+=1
        elif(p=='o'): 
            o+=1
    s=min(g,h,m,n,o)
    if(s==0):
        print("safe")
    else:
        print("guarded",s)