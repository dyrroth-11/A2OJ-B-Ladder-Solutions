n = int(input())
l = list(map(int,input().split()))
l.sort(reverse = True)
if 0 not in l:
    print(-1)
else:
    l = list(map(str,l))
    k = int(''.join(l))
    if k%3 == 0:
        print(k)
    else:
        c = k%3
        if c == 1:
            l1 = []
            l2 = []
            for i in range(n):
                if int(l[i])%3 == 1:
                    l1.append(i)
                if int(l[i])%3 == 2:
                    l2.append(i)
 
 
            if l1!=[]:
                l.pop(l1[-1])
            else:
                l.pop(l2[-1])
                l.pop(l2[-2])
 
 
        if c == 2:
            l1 = []
            l2 = []
            for i in range(n):
                if int(l[i])%3 == 1:
                    l1.append(i)
                if int(l[i])%3 == 2:
                    l2.append(i)
            if l2!=[]:
                l.pop(l2[-1])
            else:
                l.pop(l1[-1])
                l.pop(l1[-2])
        k = int(''.join(l))
        if int(k)%3 != 0:
            print(-1)
        else:
            print(k)