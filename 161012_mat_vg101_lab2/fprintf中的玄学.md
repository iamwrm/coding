```
fileID=fopen('a.txt','w+');
 for i1=1:n+1
fprintf(fileID,'%d\r\n',i1);

end
```

测试一下
本来应该`\n`就能换行

但好像有玄学
需要`\r\n`

测试一下
环境`win10 MATLAB r2016a`
---
```
fileID=fopen('a.txt','w+');
 for i1=1:n+1
fprintf(fileID,'%d\r\n',i1);

end
```
1
1       1
1       2       1
1       3       3       1
1       4       6       4       1
1       5      10      10       5       1
成功
---
```
fileID=fopen('aa.txt','w');
 for i1=1:n+1
fprintf(fileID,'%s\r\n',a(i1,:));

end
```
成功

---
经测试，只要任意删除`\r`或`\n`或交换次序
就会失效（失效指用MATLAB打开没问题，但是用文本编辑器打开就会失败）

猜测是Windows 的兼容性问题
