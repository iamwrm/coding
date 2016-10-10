%This file is for VC210 CH1&2


clear all;

aaa=[45.3
67.8
34.3
51.2
48.5
61.3
59.3
65.1
49.3
42.4
63.5
69.8
71.2
39.8
55.5
53.2
56.7
48.8
61.5
51.2
58.9
63.1
67.5
62.4
52.4
50.2
49.8
56.8
59.7
60.4
45.8
43.8
51.3
54.8
55.1
52.3
56.2
59.7
63.0
46.7
63.1
58.2
41.9
59.2
57.2
67.3
68.2
38.9
51.3
63.8
53.4
58.9
56.3
58.9
53.2
56.8];
aaa=aaa';
%% Finding the MODE
aaa=sort(aaa);
ii=1;
b=1;
cc=1;
c=zeros(2,50);
while ii<=55
    if aaa(1,ii)==aaa(1,ii+1)
        b=b+1;
    else
        c(1,cc)=b;
        c(2,cc)=aaa(1,ii);
        cc=cc+1;
        b=1;
    end
    ii=ii+1;
end


%%==================================

cmaxtime=max(c(1,:));%The time MODE shows
cmax=max(aaa)%Maximum
cmin=min(aaa)%Minimum
Median=(aaa(1,28)+aaa(1,29))/2
mean1=sum(aaa)/56
    