
function [A] = FindZero(n)
clc

cons=pi/4;
A=[];
for i=1:n
    
  
	if abs(sin(i*cons))<=0.0000001
		A=[A i];
        
	end
end
