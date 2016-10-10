#实验dict的功能

diction={'a':1,'b':2,'c':3,4:'d'}

diction['hehe']=233
print(diction[4])


print(4 in diction,'//')

print(diction.get('c'),'//')
print(diction.get('hehe'),'//')


diction2={11:'eleven',12:'twelve',13:'thirteen',14:['a','b','c']}

i=11
while i<15:
    print(diction2[i])
    i=i+1
