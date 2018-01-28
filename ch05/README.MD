## 练习5.1
> 空语句是没有内容的，以分号结尾的一条语句。只有功能意义，没有逻辑意义。例如while语句后面。
##练习5.2
> 块是以花括号包起来的语句体。但是逻辑上只占据一个语句的位置。例如if else中间，如果需要多条语句，可以用语句块。
## 练习5.4
* （a）定义和比较不能一起，应该把定义放在语句之外。
* （b）后面的if在语句作用域之外，没有效。
## 练习5.7
```cpp
   （a）//缺少分号
        if(ival1!=ival2)
        ival1=ival2;
        else ival1=ival2=0;
   （b）// 应该用块
        if(ival<minval)
        {
        minval=ival;
        occurs=1;
        }
   （c）// 语句外，非变量作用域
        int ival;
        if(ival = get_value())
            cout << "ival="<<ival<<endl;
        else
            cout << "ival=0\n";
   （d）//赋值给ival为0，则条件判断始终未false，无意义。
        if(ival==0)
           ival = get_value();
```
## 练习5.8
* 简单来说就是，if语句内部嵌套if语句，造成if比else多，不知道该对应哪一个if。c++中else与相距最近且无配对的if组成一对。若else与想与更远的组成一队，可以用块，因为块内对于块外是无效的。
## 练习5.13
* （a）每个case后面没有break,则，程序会一直往下运行，不会跳出，出现问题。修改，在每个case后面加break。
* （b）会出现变量未定义使用，即index非1时，ix，使用非法。可以将它的定义放在switch前面。后面只是赋值。
* （c）不应该用逗号。改成冒号，且在数字前加case关键字。
* （d）不能用变量放在case后面，case在编译的时候要知道它后面的值。可以在前面定义的时候前面加一个conexpr或者const。
 
