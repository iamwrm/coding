function B= MagMatrix(A,n,m)  % A is the input matrix which is 1*n  
	%n is the number of elements in A
	%m is the number which is used to choose the right number
    %NOW I HAVE TO USE ONLY //while// LOOP
	%% 	
	% turn dec to bin matrix ()*n
    clc
    A=sort(A,'descend');
	Abin=dec2bin(A);
	A_column=size(Abin,2);
	RC_matrix=[];


	

	i1=1;
	while i1<=n
	 	%i1 is for line
		n_of_1=0;
		i2=1;
		while i2<=A_column	
			if Abin(i1,i2)=='1';
				n_of_1=n_of_1+1;

			end
		i2=i2+1;	
		end
		if n_of_1==m
			RC_matrix=[RC_matrix;Abin(i1,:)];
		
		
		end
		i1=i1+1;
    end
%  RC_matrix now is char   has 0 in front of 
% RC_matrix
%Try to convert it into dec	
	A_dec=[];
	i1=1;
	while i1<=size(RC_matrix,1)

		A_dec_zhi=0;

		i2=size(RC_matrix,2);
		while i2>=1
			if RC_matrix(i1,i2)=='1'
				A_dec_zhi=A_dec_zhi+10^(size(RC_matrix,2)-(i2));
			end
		i2=i2-1;
		end
		A_dec=[A_dec;A_dec_zhi];


	i1=i1+1;
    end
    B=A_dec;
	


    
    

    
   


