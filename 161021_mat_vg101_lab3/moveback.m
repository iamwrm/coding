function A177=moveback(A177,be2,ed2,d2)

be2=4500;   ed2=14592;   d2=20;%d1=deviation  back
 A177(be2:ed2)=[ zeros(1,d2) A177(be2:ed2-d2) ];