clc
clear
fid=fopen('HW3_scores.txt');
fgetl(fid);
i1=1;
while ~feof(fid)
a=fscanf(fid, '%s',1);
temp=fscanf(fid, '%f',1);
score(i1)=temp;
i1=i1+1;
end