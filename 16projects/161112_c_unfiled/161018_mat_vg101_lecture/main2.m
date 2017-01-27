function main2()
p1=[0;0];
p2=[2;0];
p3=[1;sqrt(3)];
hold on;
tic
my_tri(p1,p2,p3,1,4)
toc
end

function my_tri(p1,p2,p3,lev,n)
	if lev>n
		return;
    end
    
    lev
plot([p1(1),p2(1),p3(1),p1(1)],[p1(2),p2(2),p3(2),p1(2)],'b');
my_tri((p1+p3)/2,(p2+p3)/2,p3,lev+1,n);
my_tri(p1,(p1+p2)/2,(p1+p3)/2,lev+1,n);
my_tri((p1+p2)/2,p2,(p2+p3)/2,lev+1,n);
end