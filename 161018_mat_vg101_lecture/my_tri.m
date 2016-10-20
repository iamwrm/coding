% my_tri: function description
% point is a 2 x 4 matrix
function my_tri(p1,p2,pt3,lev,n)
	if lev>=n
		return;
	end

plot([p1(1),p2(1),pt3(1),p1(1)],[p1(2),p2(2),pt3(2),p1(2)],'b');

my_tri((p1+pt3)/2,(p2+pt3)/2,pt3,lev+1,n);
my_tri(p1,(p1+p2)/2,(p1+pt3)/2,lev+1,n);
my_tri((p1+p2)/2,p2,(p2+pt3)/2,lev+1,n);





	

end