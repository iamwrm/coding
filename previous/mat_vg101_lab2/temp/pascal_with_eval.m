clear

% for i1=1:100
% 	eval(['mat_out',num2str(i1),'=[]']);
% end
%creating matrixes massively

n_of_tri=3;

mat_out=[];
mat_out1='      1      ';
mat_out2='   1     1   ';
mat_out3='1     2     1';

for i1=1:3

	
	eval(['mat_temp=mat_out',num2str(i1),';']);
	mat_temp=['  ',mat_temp];
    eval(['mat_out',num2str(i1),'=mat_temp;']);
end

mat_out=[mat_out1;mat_out2]
