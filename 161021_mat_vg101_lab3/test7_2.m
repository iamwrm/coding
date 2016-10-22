clear
clc


[op,colormap_op]=imread('l3.bmp');%		op stands for original picutre
cp=imread('l3120.bmp');	%	cp stands for classified picture
anumber=imread('9.bmp');

cpsc=cp(cp~=op);

cpsc=cpsc';
cpsc(192*76)=0;
cpscr=reshape(cpsc,[192 76]);

imshow(cpscr);





