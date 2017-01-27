% calculate pi by Monte Carlo method
function area = y_x2(N)
% N is the number of dots in the square
% put N dots into a 1x1 square
sum = 0; % number of dots in the fan
for ii = 1:N
    % random numbers ==> dot position
    dotPos = rand(1, 2);
    % if the dot is in the area of y < x2
    if dotPos(2) < dotPos(1)^2
        sum = sum + 1;
    end
end
area = sum / N;