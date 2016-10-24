function hanoi(n)

han(n,'a','b','c')

function han(n,a,b,c)
if n==1
ex(a,c)
else
han(n-1,a,c,b)
ex(a,c)
han(n-1,b,a,c)
end

function ex(a,b)
disp ([a '-->' b])

