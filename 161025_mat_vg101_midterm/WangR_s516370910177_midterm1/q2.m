clear
clc
sent=input('Enter a sentence: ','s');
s={};
space = strfind(sent,' ');
s{1,1}=sent(1:space(1)-1);
 for i1=1:(length(space)-1)
     s{i1+1,1}=sent(space(i1)+1:space(i1+1)-1);
 end
s{i1+2,1}=sent(space(end)+1:end-1);   
out=[];
for i2=1:size(s,1)
    out=[out s{size(s,1)-i2+1,1} ' '];
end
out(end)='.';
disp(out);