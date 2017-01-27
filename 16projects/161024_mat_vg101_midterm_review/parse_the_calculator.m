% parse command like "add 1 3"
command = input('Please type a command: ','s');
space = strfind(command,' ');
if strcmp(command(1:space(1)-1),'add')
    parameter1 = str2num(command(space(1)+1:space(2)-1));
    parameter2 = str2num(command(space(2)+1:end));
    result = parameter1+parameter2
end