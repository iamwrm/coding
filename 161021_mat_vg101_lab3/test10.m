clc
clear
[pic clm]=imread('l3.bmp');
pic_origin=pic;
pic0=imread('0.bmp');
pic1=imread('1.bmp');
pic2=imread('2.bmp');
pic3=imread('3.bmp');
pic4=imread('4.bmp');
pic5=imread('5.bmp');
pic6=imread('6.bmp');
pic7=imread('7.bmp');
pic8=imread('8.bmp');
pic9=imread('9.bmp');

i1c = [8 20 30 45 61 79 92 104 114 129 145 163 176 188 198 213 229 247 ...
       260 272 282 297 313 331 344 356 366 381 397 415 428 440 450 465 ...
       481 499 512 524 534 549 565 583 596 608 618 633 649 667 680 692 ...
       702 717 733 751 764 776 786 801 817 835 848 860 870 885 901 919 ...
       932 944 954 969 985 1003 1016 1028 1038 1053];
   
i1r = [8 16 22 33 45 59 68 76 82 93 105 119 128 136 142 153 165 179 188 ...
       196 202 213 225 239 248 256 262 273 285 299 308 316 322 333 345 ...
       359 368 376 382 393 405 419 428 436 442 453 465 479 488 496 502 ...
       513 525 539 548 556 562 573 585 599 608 616 622 633 645 659 668 ...
       676 682 693 705 719 728 736 742 753 765 779 788 796 802 813 825 ...
       839 848 856 862 873 885 899 908 916 922 933 945 959 968 976 982 ...
       993 1005 1019 1028 1036 1042 1053 1065 1079 1088 1096 1102 1113 ...
       1125 1139 1148 1156 1162 1173 1185 1199 1208 1216 1222 1233 1245 ...
       1259 1268 1276 1282 1293 1305 1319 1328 1336 1342 1353 1365 1379 ...
       1388 1396 1402 1413 1425 1439 1448 1456 1462 1473 1485 1499 1508 ...
       1516 1522 1533 1545 1559 1568 1576 1582 1593 1605 1619 1628 1636 ...
       1642 1653 1665 1679 1688 1696 1702 1713 1725 1739 1748 1756 1762 ...
       1773 1785 1799 1808 1816 1822 1833 1845 1859 1868 1876 1882 1893 ...
       1905 1919];   

% pico={pic0;pic1;pic2;pic3;pic4;pic5;pic6;pic7;pic8;pic9};

% stuid=input('input your stuid: ', 's');
% stuid=str2num(stuid);
% 
compose=[pic6 pic2 pic8];
% 
% compose=reshape(compose,[76 192]);
compose=compose';
% compose=reshape(compose,[192 76]);
% compose(compose(:)>=200)=200;

% compose(compose(:)>=250)=0;
for i1=1:192
    for i2=1:76
        pic(i1r(i1),i1c(i2))=compose(i1,i2);
    end
end


secret=imread('temp.bmp');
length(find(pic==secret))
imshow(pic,clm);