%This is for HW1 Q2
clear
clc
format long
epsilon_str=input('','s');
epsilon=str2num(epsilon_str);
n=1;
while 1
    sig_ma=0;
	for i1=1:n
		sig_ma=sig_ma+1/(i1^2);
	end

	PI=sqrt(6*sig_ma);

	if abs(PI-pi)<epsilon
		break;
    end
    
    n=n+1;
	end
disp(PI)
