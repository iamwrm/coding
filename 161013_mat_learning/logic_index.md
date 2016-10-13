MATLAB
logic indexing

searching for elements greater than 0.5
-----
```
A = rand(5); B = A > 0.5; A(B) = 0
```


searching for elements that is 0
----
```
a(a(:)==0)=-1;
```

解释
---
`a(:)==0`返回的是布尔类型的数组
MATLAB可以用布尔类型来索引
