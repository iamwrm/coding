

%% create_pascal: function description
function [myresult] = create_pascal(cn,ck)	%cn>=ck	
clc
 if (cn<ck)||(cn<0)||(ck<0)
 		fprintf('wrong input argument\n check if cn>=ck\n');
	else
		if ck==1
			myresult=cn;
		elseif ck==cn
			myresult=1;
		elseif ck==0
			myresult=1;
		else
			myresult=create_pascal(cn-1,ck-1)+create_pascal(cn-1,ck);
		end;
 end;
end



% end





