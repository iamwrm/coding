function a_dec= Mybin2dec(a_bin,n)  % A is the input matrix which is 1*n  
	%n is the number of elements in A
	%m is the number which is used to choose the right number
    %NOW I HAVE TO USE ONLY //FOR// LOOP
	%% 	
	% turn dec to bin matrix ()*n
    clc
  
%Try to convert it into dec	
	
	
		A_dec_zhi=0;
		for i2=1:size(a_bin,2)
			if a_bin(1,i2)=='1'
				A_dec_zhi=A_dec_zhi+2^(size(a_bin,2)-(i2));
			end
		end
		
	a_dec=A_dec_zhi;


    
    

    
   


