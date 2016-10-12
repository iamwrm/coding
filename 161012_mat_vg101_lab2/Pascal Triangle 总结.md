```
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

end
```
## 下面是分解

```
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
```
1. 用`zeros` 创建全0数组 数组的长度是考虑到后面要在两个数之间加空格，所以翻倍了
1. n和演示中的结果不一样，所以`n=n-1`做了微小的调整
1. 这里排列数用了nchoosek函数，因为自带的pascal函数乱七八糟的
1. 有所间隔地定义数：`a(i1,2*i2-1)`

```
for i1=1:n+1
    my_back=n-i1+1;
    my_blank=zeros(1,my_back);
     a(i1,:)=[my_blank,a(i1,1:end-my_back)];
end
```
1. 开始平移   `i1`越小，向右越多
1. 一定要注意列数得对应上

```
a(a(:)==0)=-1;
a=num2str(a);

for i1=1:n+1
a(i1,:)=strrep(a(i1,:),'-1','  ');
end
```

1. __让a中的所有为0的数全变为-1（很有可迁移性）__
2. `num2str`会自动考虑不同位数之间的空格问题，非常方便
3. 当a被转为字符串数组后，将所有-1 替换为两个空格（不替换0是因为会导致比如60后面的0消失）


```
fileID=fopen('a.txt','w+');
for i1=1:n+1
  fprintf(fileID,'%s\r\n',a(i1,:));
end

end
```
1. 最后用`fprintf`写入文本文件
1. 只能（目前只会）逐行写入
1. 会遇到无法换行的玄学问题，详情看 fprintf 中的玄学
