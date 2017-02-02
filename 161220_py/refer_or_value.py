# 测试python 的存值和引用

def printall():
	print(a)


a=1;
b=2;
c=3;


print(a)
print(b)
print(c)


b=a;
c=b;
a=2;

print('=======')

print(a)
print(b)
print(c)

print('asdfasdfsad')

printall()