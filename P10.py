sum_ans=17
for i in range(11,2000000):
    for j in range(2,int(i**0.5+1)): #checking for prime
        if i%j==0:
            break
    else:
        sum_ans+=i
print(sum_ans)

#142913828922
