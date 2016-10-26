function S = Mysum(n)
	if n==1 
		S=1;
	else
		S=n+Mysum(n-1);
    end
end
