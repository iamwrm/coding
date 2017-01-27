% parse +, -, *, /
% eg. 1+2, 4/3, 5*89, 58/2
clear all; clc;
command = input('Please type the command: ','s');
n = length(command);
ii = 1; jj = 1;
while ii <= n
    if command(ii) ~= ' '
        command2(jj) = command(ii);
        jj = jj + 1;
    end
    ii = ii + 1;
end
command = command2;
i = 1;
while isdigit(command(i))
    i = i+1;
end
parameter1 = str2num(command(1:i-1));
operator = command(i);
parameter2 = str2num(command(i+1:end));
switch operator
    case '+'
        result = parameter1 + parameter2
    case '-'
        result = parameter1 - parameter2
    case '*'
        result = parameter1 * parameter2
    case '/'
        result = parameter1 / parameter2
    otherwise
        disp('unknown operator');
end