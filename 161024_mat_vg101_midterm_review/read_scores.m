% read scores.txt
clear all; clc;
fid = fopen('scores.txt','r');
name = fscanf(fid, '%s', 1);
n = 0;
while length(name)>0
    n = n + 1;
    student(n).name = name;
    student(n).score = fscanf(fid,'%f',1);
    name = fscanf(fid, '%s', 1);
end
% print result
for i=1:n
    disp(sprintf('%s %g',student(i).name,student(i).score));
end
disp(sprintf('average score: %g', mean([student.score])));
fclose(fid);