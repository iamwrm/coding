clear
clc



[a0,colormapa0]=imread('l3.bmp');
a177=imread('l3177.bmp');
anumber=imread('9.bmp');

A177=[];
ia=1;

for i1=1:1920
	for i2=1:1080
		if a177(i1,i2)~=a0(i1,i2)
			A177(ia)=a177(i1,i2);
			ia=ia+1;
		end
	end
end
A177(14592)=0;


d1=75;%d1=deviation 
A177(1:4450)=[A177(d1:4450) zeros(1,d1-1) ];



be2=2250;   ed2=3500;   d2=75;%d1=deviation 
 A177(be2:ed2)=[ zeros(1,d2) A177(be2:ed2-d2) ];



A177_reshape=reshape(A177,[64*3,76]);
imshow(A177_reshape)