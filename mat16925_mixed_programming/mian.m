% this program is designed to solve the statistic problem in VC210 CH1&2
% PART C
% 


clc
clear all;
a=[45 68 34 51 49 61 59 65 49 42 64 70 71 40 56 53 57 49 62 51 59 63 68 62 52 50 50 57 60 60 46 44 51 55 55 52 56 60 63 47 63 58 42 60 57 67 68 39 51 64 53 59 56 59 53 57];
a=sort(a);

ii=1;
b=1;
cc=1;
c=zeros(2,50);
while ii<=55
    if a(1,ii)==a(1,ii+1)
        b=b+1;
    else
        c(1,cc)=b;
        c(2,cc)=a(1,ii);
        cc=cc+1;
        b=1;
    end
    ii=ii+1;
end
c
    

    