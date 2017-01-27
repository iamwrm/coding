
% the six version
% not perfectly solve the problem
clc
clear

[op,colormap_op]=imread('l3.bmp');%		op stands for original picutre
cp=imread('177n.bmp');	%	cp stands for classified picture
cp0=imread('0.bmp');

ops=[];
cps=[];%	classified picutre stored that has been deleted the same row

i1r=[];
for i1=1:1920
	if ~isequal(op(i1,:),cp(i1,:));
        i1r=[i1r i1];
		ops=[ops;op(i1,:)];
		cps=[cps;cp(i1,:)];
	end
end

opsc=[];%classified picutre stored that has been
		% deleted the same row and the same column
cpsc=[];

i1c=[];
for i1=1:1080
	if ~isequal(ops(:,i1),cps(:,i1))
         i1c=[i1c i1];
		opsc=[opsc,ops(:,i1)];
		cpsc=[cpsc,cps(:,i1)];
	end
end
cpsc=cpsc';
cpscr=reshape(cpsc,[192 76]);

 cpscr=rot90(cpscr);
imshow(cpscr);




