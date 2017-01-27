sum = 0; % number of dots in the fan
N=100000;
for ii = 1:N
    % random numbers ==> dot position
    dotPos = rand(1, 2);
    x=dotPos(1);
    y=dotPos(2);
    if ((x-0)^2+(y-1)^2<=1)&&((y-0)^2+(x-1)^2<=1)&&((x-0)^2+(y-1)^2<=1)&&((x-1)^2+(y-1)^2<=1)&&((x-0)^2+(y-0)^2<=1)
        sum = sum + 1;
    end
end
area = sum / N;

%area is the answer to this question