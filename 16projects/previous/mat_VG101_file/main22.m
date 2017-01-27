n_level=5;
my_out=[];
for i1=1:n_level
	for i2=0:i1
		my_out(i1,i2+1)=create_pascal(i1,i2)
	end
end
  

