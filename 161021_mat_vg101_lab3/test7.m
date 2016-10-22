clear
clc
% the six version
% not perfectly solve the problem

[op,colormap_op]=imread('l3.bmp');%		op stands for original picutre
cp=imread('l3176.bmp');	%	cp stands for classified picture
anumber=imread('9.bmp');

ops=[];
cps=[];%	classified picutre stored


for i1=1:1920
	if ~isequal(op(i1,:),cp(i1,:));
		ops=[ops;op(i1,:)];
		cps=[cps;cp(i1,:)];
	end
end




