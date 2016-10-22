%% Euler: function description
function [my_e,my_n] = Euler(precision)

n=0;
eet=0;%e estimated
while 1 
	eet=eet+1/(prod(1:n));
	if abs(eet-exp(1))<precision
	break;
	end
	n=n+1;
end

my_n=n;
my_e=eet;
end