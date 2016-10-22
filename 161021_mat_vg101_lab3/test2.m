clear
clc



[a0,colormapa0]=imread('l3.bmp');
a120=imread('l3120.bmp');
a176=imread('l3176.bmp');
a177=imread('l3177.bmp');
anumber=imread('9.bmp');

bA177=a177(a177~=a0);
bA176=a176(a176~=a0);
bA120=a120(a120~=a0);
%  bA177(14592)=0;
%  bA176(14592)=0;
  bA120(14592)=0;
bA120=bA120';
  Are120=reshape(bA120,[64*3,76]);
%  Are176=reshape(bA176,[76,64*3]);
%  Are177=reshape(bA177,[64*3,76]);
    
imshow(Are120,colormapa0)