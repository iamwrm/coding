function [n,PI]=myPi()
clc
fprintf('This program will estimate the value of PI\n');
while 1

n=input('input an integer (-1 for quit)-->','s');
n=str2num(n);
if n<0
	break;
end
r=randi([0 1],n,n);

my_sum=0;
for i1=1:n
	for i2=1:n
		if (r(i1,i2)==1)&&((i1)^2+(i2)^2<=n^2)
			my_sum=my_sum+1;
		end
	end
end

PI=my_sum/n^2*8;

end
    