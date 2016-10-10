function PasTri( n )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
clc
n=n-1;
a=zeros(n+1,2*n+2);
for i1=1:n+1
    for i2=1:i1
        a(i1,2*i2-1)=nchoosek(i1-1,i2-1);
    end
end

for i1=1:n+1
    my_back=n-i1+1;
    my_blank=zeros(1,my_back);
     a(i1,:)=[my_blank,a(i1,1:end-my_back)];
end
a(a(:)==0)=-1;
a=num2str(a);
for i1=1:n+1
a(i1,:)=strrep(a(i1,:),'-1','  ');
end


fileID=fopen('a.txt','w+');
 for i1=1:n+1
fprintf(fileID,'%s\r\n',a(i1,:));

end





clear

end

