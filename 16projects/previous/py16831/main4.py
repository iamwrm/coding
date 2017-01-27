#试一下只有一个元素的数组 list=(1,)   后来又试了一下类方法

L=[1,]
for f in range(10):
    L.insert(f+1,f*f)


L.pop(-1)

for i in L:
    print(i)

