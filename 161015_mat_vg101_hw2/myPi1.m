% calculate pi by Monte Carlo method
function [n,PI] = myPI1()
% N is the number of dots in the square
% put N dots into a 1x1 square
clc

fprintf('This program will estimate the value of PI\n');
while 1
n=input('input an integer (-1 for quit)-->','s');
n=str2num(n);
if n<0
	break;
end

sum = 0; % number of dots in the fan
for ii = 1:n
    % random numbers ==> dot position
    dotPos = rand(1, 2);
    % if the dot is in the fan
    if sqrt(dotPos(1).^2 + dotPos(2).^2) < 1
        sum = sum + 1;
    end
end
PI = sum / n * 4

end