function sixangle(a0,a3,lev,maxn)

if lev>maxn
	return;
end

a0a3=a3-a0;
avector=1/3*a0a3;
a1=a0+avector;
a2=a0+2*avector;
theta=pi/3;
myrot=[cos(theta) -sin(theta);sin(theta) cos(theta)];
aaa=myrot*avector;
a4=a1+aaa;
hold on ;
axis equal;
a_final=[a0,a1,a4,a2,a3];
plot(a_final(1,:),a_final(2,:),'b');
a_white=[];
a_white=[a1,a2];
plot(a_white(1,:),a_white(2,:),'w');


sixangle(a0,a1,lev+1,maxn);
sixangle(a1,a4,lev+1,maxn);
sixangle(a4,a2,lev+1,maxn);
sixangle(a2,a3,lev+1,maxn);

end