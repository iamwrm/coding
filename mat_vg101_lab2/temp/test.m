clear 
clc
n_line=5;
answ=[];
for n=1:n_line


pascal_line=pascal(n);
pascal_line=pascal_line(n,:);
pascal_line=[pascal_line(1:n) pascal_line(end-1:-1:1)];   %  2n-1 elements

% num2str(pascal_line)
answ(n,2*n-1)=0;
answ=[answ;pascal_line];
end
answ(1,1)=1;
answ(2,2)=1;
answ(answ(:)==0)=-1;


answ1=num2str(answ);
for i1=1:n_line+1
answ1(i1,:)=strrep(answ1(i1,:),'-1','  ');
end



 for i1=1:n_line
     hehe=(n_line+1-i1)*0;
     hehe1=[];hehe1(1:hehe)=32;
     
     answ1(i1,:)=[hehe1,   answ1(i1,1:(4*i1-3) ) ,  answ1( i1,(4*i1-3+1):end-hehe) ];
 end
 

 
 answ1
     