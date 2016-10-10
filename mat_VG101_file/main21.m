%use mod to create matrix

n_matrix=5;
out_matrix=[];
for i1=1:n_matrix
	for i2=1:n_matrix
		out_matrix(i1,i2)=mod((i1+i2-1),n_matrix)+n_matrix*((i1+i2-1)==n_matrix);

	end
end
out_matrix