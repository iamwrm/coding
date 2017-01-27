n=input('Please input an even number(>=4):');
for i1=1:n
	if isprime(i1)&&isprime(n-i1)
		break
	end
end
fprintf([num2str(n),'=',num2str(i1),'+',num2str(n-i1),'\n']);

