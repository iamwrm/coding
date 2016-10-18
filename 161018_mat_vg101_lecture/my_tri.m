% my_tri: function description
% point is a 2 x 4 matrix
function my_tri(point1,point2,point3,lev,n)
	if lev>=n
		return;
	end

plot([point1(1),point2(1),point3(1),point1(1)],[point1(2),point2(2),point3(2),point1(2)],'b');

my_tri((point1+point3)/2,(point2+point3)/2,point3,lev+1,n);
my_tri(point1,(point1+point2)/2,(point1+point3)/2,lev+1,n);
my_tri((point1+point2)/2,point2,(point2+point3)/2,lev+1,n);





	

end