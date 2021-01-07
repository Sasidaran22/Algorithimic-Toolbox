inp=input()
l=list()
l1=list()
l=inp.split()
l[0]=int(l[0])
l[1]=int(l[1])
if l[1]==0:
    print(0)
    exit()
for i in range(l[0]):
    t=input()
    l1.append(t.split())
    l1[i][0]=float(l1[i][0])
    l1[i][1]=float(l1[i][1])
l1.sort(key = lambda x: x[0]/x[1], reverse = True)
tot=0
value=0.0
for i in l1:
    if(i[1]+tot<=l[1]):
        tot=tot+i[1]
        value=i[0]+value
    else :
        for j in range(int(i[1])):
            tot=tot+1
            value=i[0]/i[1]+value
            if(tot==l[1]):
                break
    if(tot==l[1]):
        break
print(round(value,4))
        
    