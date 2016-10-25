clc
clear
a={};
for i1=0:9
eval(['pic=imread( ''' num2str(i1) '.bmp '' );'])
a{end+1}=pic;
end



a{1}=imresize(a{1},12);

for i2=1:10
subplot(2,5,i2);
imshow(a{i2});
end


