clc
clear
thre=str2num(input('please input the threshold: ','s'));

pic=imread('lena_gray.jpg');

pic(pic(:)>=thre)=255;
pic(pic(:)<thre)=0;

imwrite(pic,'lena_binary.jpg');