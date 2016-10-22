%% MultipleDigitSum: function description
function [nsum] = MultipleDigitSum(x,n)


x=num2str(x);
len=length(x);


ifodd=mod(len,n);
nsum=0;


if ifodd==0
	for i1=1:n:(len-ifodd+1-n)
		nsum=nsum+str2num(x(i1:i1+n-1));
	end
	
end


if ifodd >0
	for i1=1:n:(len-ifodd+1-n)
		nsum=nsum+str2num(x(i1:i1+n-1));
	end
	nsum=nsum+str2num(x(end-ifodd+1:end));
	
end

end