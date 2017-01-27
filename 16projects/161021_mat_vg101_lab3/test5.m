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


 d1=64;%d1=deviation 
 A177(1:4450)=[A177(d1:4450) zeros(1,d1-1) ];
 
 
be2=2600-900;   ed2=1700+1900; d2=7;%d1=deviation  back
A177(be2:ed2)=[ zeros(1,d2) A177(be2:ed2-d2) ];
 

 

 be3=3750;   ed3=7500;   d3=13;%d1=deviation  front
 A177(be3:ed3)=[ A177(be3+d3:ed3) zeros(1,d3)];

  be2=5600;   ed2=7600;   d2=7;%d1=deviation  back
 A177(be2:ed2)=[ zeros(1,d2) A177(be2:ed2-d2) ];
 
 
 be2=4500;   ed2=14592;   d2=18;%d1=deviation  back
 A177(be2:ed2)=[ zeros(1,d2) A177(be2:ed2-d2) ];

be2=14592-500-500;   ed2=14592; d2=15;%d1=deviation  back
 A177(be2:ed2)=[ zeros(1,d2) A177(be2:ed2-d2) ];


A177_reshape=reshape(A177,[64*3,76]);
imshow(A177_reshape)