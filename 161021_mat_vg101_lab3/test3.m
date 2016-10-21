clear
clc



[a0,colormapa0]=imread('l3.bmp');
a120=imread('l3120.bmp');
a176=imread('l3176.bmp');
a177=imread('l3177.bmp');
anumber=imread('9.bmp');

A176=a176(a176~=a0);
% A(14592)=0;
% Are=reshape(A,[64*3,76]);
% imshow(Are,colormapa0)