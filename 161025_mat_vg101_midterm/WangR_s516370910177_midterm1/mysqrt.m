function [b,n]=mysqrt(a,precision)
x=a;
n=1;
while ~(abs(x-sqrt(a))<precision)
	x=(x+a/x)/2;
	n=n+1;
end
b=x;