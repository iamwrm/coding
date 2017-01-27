`save a.mat`保持工作区

`load a.mat`读取工作区

`whos`查看变量及其占用内存

`cat` 合并矩阵

`linespace(a,b,n)`生成项数为`n`的等差数列
等同于`a:(b-a)/(n-1):b` 

数据类型有`structure` `cell` `float` `double` `char`等

`unidrnd`随机整数 uniform of descrete random number

`doc ` 查看文档
`help` 帮助

`sort`排序
可以`sort(A,'descend')` 表示降序排列

`str2num` 、`num2str` 字符串字面值与字符串互换（不是ASCII码）





`iskeyword` 查看是否为 保留字

`edit functionname` 看MATLAB源码（并不好用）

`@` 匿名函数

`repmat` 通过重复，生成更大的矩阵

`bench` 电脑跑分

`fliplr`  矩阵次序颠倒 也可以写`b=a(end:-1:1)`

去除`NaN` 用`a(isnan(a))=[]`

---

`eval(' ')` 将字符串转化为MATLAB语句

可以用来批量创建变量a1,a2..a100
**很强大**

文件读写
--
`append` 在文件末加
`fopen`将文件加入流
`fprintf`写入文件
`fread`用二进制读取（不常用）
`fscanf`格式化读取
`fseek`挪动光标
`fgetl`跳过一行 未验证

比如
```
for i=1:10
    fprintf(fopen('b.txt','a'),'a%d',i);
    fprintf(fopen('b.txt','a'),'b%d',i);

end;
```



数学函数
-----
`factor` 求一个数的质数因子

`isprime`是否为质数

`primes`小于某个数的质数

`gcd`最大公约数

`lcm`最小公倍数

`rat`有理逼近

`rats`有理数输出

`nchoosek`n个数中一次取k个数的组合


复数
----

`abs`“取模”

`imag`虚部

`real`实部

`isreal`是否为复数


取整求余 近似
---
`fix`向0取整

`floor`向下取整

`ceil`向上取整

`round`向最近整数取整

`mod`整除取余（为正数）

`rem`整除取余（可能为负数）

`sign`符号函数


格式命令
--


`format short`

`format long`

`format short e`

`format long e`

`format short g`

`format long g`

`format hex`

`format bank`两位小数

`format +`正数

`format rat`有理数近似 如`355/113`
