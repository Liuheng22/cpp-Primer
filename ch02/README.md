##2.1
> 整形数据使用中一般用int类型，short一般是2字节，太短，不太够。而long一般
  和int一样4字节，不常用。若是int范围太小，选择long long类型。

  float是单精度浮点型，double是双精度浮点型，但是使用上却与他们精度和表达
  范围关系不大。因为，现在计算机字长和double的长度一样，所以使用double和
  float类型是一样的，所以现在float不常用，大情况下用double。

##2.2
> 利率一般是小数，所以用double双精度浮点数。本金一般是正整数，选用unsigned 
  int,付款为本金和利率的乘积相关，所以用double双精度浮点数。
