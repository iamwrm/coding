n_level=5;
my_out=[];
my_out_line=[];
for i1=1:n_level
	for i2=0:(i1+1)
		if i2==(i1+1)
			break;
		end
		my_out_line=[my_out_line num2str(create_pascal(i1,i2)) ' '];
        
	end
	my_out=[my_out;my_out_line];
	my_out_line=[];
end

my_out

  