a0a3=a3-a0;
avector=1/3*a0a3;
a1=a0+avector;
a2=a0+2*avector;
theta=pi/3;
myrot=[cos(theta) -sin(theta);sin(theta) cos(theta)];
aaa=myrot*avector;
a4=a1+aaa;
hold on ;
a_final=[a0,a1,a4,a2,a3];
plot(a_final(1,:),a_final(2,:));

%this line is aded from an ios github app