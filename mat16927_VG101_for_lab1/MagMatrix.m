function B= MagMatrix(A,n,m)  % A is the input matrix which is 1*n  
	%n is the number of elements in A
	%m is the number which is used to choose the right number
    %NOW I HAVE TO USE ONLY //FOR// LOOP
	%% 	
	% turn dec to bin matrix ()*n
    clc
    A=sort(A,'descend');
	Abin=dec2bin(A);
	A_column=size(Abin,2);
	RC_matrix=[];


	


	for i1=1:n 	%i1 is for line
		n_of_1=0;
		for i2=1:A_column
			if Abin(i1,i2)=='1';
				n_of_1=n_of_1+1;

			end
		end
		if n_of_1==m
			RC_matrix=[RC_matrix;Abin(i1,:)];
		
	
		end
    end
%  RC_matrix now is char   has 0 in front of 
RC_matrix;
%Try to convert it into dec	
	A_dec=[];
	for i1=1:size(RC_matrix,1)
		A_dec_zhi=0;
		for i2=size(RC_matrix,2):-1:1
			if RC_matrix(i1,i2)=='1'
				A_dec_zhi=A_dec_zhi+10^(size(RC_matrix,2)-(i2));
			end
		end
		A_dec=[A_dec;A_dec_zhi];
	end
	B=A_dec;
%no problem 

    
    

    
   


