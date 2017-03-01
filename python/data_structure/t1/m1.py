class my_sta:
    def __init__(self):
        self.elem=[]
    def push_back(self,ii):
        self.elem.append(ii)
        return len(self.elem)
    def pop(self):
        return self.elem.pop()
    def __str__(self):
        output="++"
        for i in self.elem:
            output+=' '
            output+=str(i)
        output+="++"
        return output

a=my_sta()
for i in range(1,233,23):
    a.push_back(i)        
print(a)
