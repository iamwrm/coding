clear
clc



[a0,colormapa0]=imread('l3.bmp');
a120=imread('l3120.bmp');
a176=imread('l3176.bmp');
a177=imread('l3177.bmp');
a120_0=a120-a0;

a177_0=a177-a0;
% 
% a177_0(a177_0~=0)=1;
a177diff=bitxor(a177,a0);
a176diff=bitxor(a176,a0);
a120diff=bitxor(a120,a0);
 

A=[];
i1=1;
i2=1;

while i1<=1919
	if ~isequal(a177(i1,:),a0(i1,:))
		A(i2,:)=a177(i1,:);
		i2=i2+1;
	end
	i1=i1+1;
end


imshow(A,colormapa0)


