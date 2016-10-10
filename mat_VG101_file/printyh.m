clear

for i1=1:100
	eval(['mat_out',num2str(i1),'=[]']);
end
%creating matrixes massively



mat_out=[];
mat_out1='      1      ';
mat_out2='   1     1   ';
% c='1     2     1';

for i=1:10
mat_out1=['  ',mat_out1];
mat_out2=['  ',mat_out2];

end

mat_out=[mat_out1;mat_out2]
