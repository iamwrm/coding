import re
l1=re.compile(r'\+\d\d\-\d\d\d')
l2=l1.search('+86-123+26-123')
l3=l1.findall('+86-123+26-123')
print(l2.group())
print(l3)