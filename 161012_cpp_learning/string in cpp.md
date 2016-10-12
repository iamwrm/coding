``string`` 是在``<iostream>``中的，更确切地说是``std:string`` 
下面的例子就是
``printf``的第二个参数应该要传地址，而不是变量

别和MATLAB混淆了



```
#include <stdio.h>
#include <iostream>

//using namespace std;
int main()
{
    std::string a;
   
    a = "abcdefg";
   
    printf("%s", &a[0]);
    return 0;
}

```