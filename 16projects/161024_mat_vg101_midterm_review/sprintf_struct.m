clear
clc;
TA(1) = struct('name','M','value',1);
TA(2) = struct('name','S','value',2);
TA(3) = struct('name','Y','value',3);
disp(sprintf('name\tvalue'));
for i=1:3
    disp(sprintf('%s\t\t%d',TA(i).name,TA(i).value));
end