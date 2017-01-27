clc
clear
fid=fopen('HW3_scores.txt');
fgetl(fid);

i1=1;
while ~feof(fid)
fscanf(fid, '%s',1);
score(i1)=fscanf(fid, '%f',1);
i1=i1+1;
end

fclose(fid);


num=0;
i2=1;
mean_score=mean(score);
std_score=std(score);
disp(mean_score);
disp(std_score);


for i1=0:10:90
num(i2)=size(find(score(:)>=i1 & score(:)<i1+10),1);
i2=i2+1;
end
bar([5:10:95],num);
            