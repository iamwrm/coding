
for i=1:10
    fprintf(fopen('b.txt','a'),'a%d',i);
    fprintf(fopen('b.txt','a'),'b%d',i);
    
end;

