%This is the first way to create the matrix(by instructord)
n_matrix=5;
mat_row=[1:n_matrix 1:n_matrix];
out_mat=[];
for i1=1:n_matrix
	out_mat(i1,:)=mat_row(1,i1:(i1+n_matrix-1));
end
out_mat
