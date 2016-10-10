clear all
aa=1;
ii=0;
c=zeros(1,10);
i=1;

while ii<=5
    aa=aa*aa;
    aa=aa-ii;
    ii=ii+1;
    c(1,i)=aa;
    i=i+1;
    plot(c)
end;

c

aa;