clc
clear
fid=fopen('Prices.txt');
fgetl(fid);
a={};
% a(5)=' ';
b=[];
i1=1;
while 1
[a{i1,1},count]=fscanf(fid,'%s',1)
i1=i1+1;
if count~=1
    break
end
end
fclose('all')