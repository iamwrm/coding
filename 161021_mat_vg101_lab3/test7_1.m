clear
clc
% the seventh version
% not perfectly solve the problem

[op,colormap_op]=imread('l3.bmp');%		op stands for original picutre
cp=imread('l3120.bmp');	%	cp stands for classified picture
anumber=imread('9.bmp');

ops=[];
cps=[];%	classified picutre stored that has been deleted the same row


for i1=1:1920
	if ~isequal(op(i1,:),cp(i1,:));
		ops=[ops;op(i1,:)];
		cps=[cps;cp(i1,:)];
	end
end

opsc=[];%classified picutre stored that has been
		% deleted the same row and the same column
cpsc=[];

for i1=1:1080
	if ~isequal(ops(:,i1),cps(:,i1))
		opsc=[opsc,ops(:,i1)];
		cpsc=[cpsc,cps(:,i1)];
	end
end
cpsc=cpsc';
cpscr=reshape(cpsc,[192 76]);

imshow(cpscr);





