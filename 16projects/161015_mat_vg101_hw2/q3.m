clear
clc

N=input('','s');
N=str2num(N);
P=[];
for i1=1:N
	if isprime(i1)==1
		P=[P,i1];
	end
end
P1=[0,P];
P1(end)=[];
Q=P-P1;
Q(1)=[];
c_Q=size(Q,2);
index_Q=[1:c_Q];
plot(index_Q,Q);