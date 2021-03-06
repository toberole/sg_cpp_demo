## 静态多态 动态多态
- 静态多态也叫早绑定 通过函数的重载实现
- 动态多态也叫做晚绑定 必须通过虚函数才能实现

## 虚函数
* 纯虚函数不能有函数体
* 虚函数可以有函数体
```
    纯虚函数没有函数体；虚函数 有函数体
    含有纯虚函数的类都是抽象类
```

## 虚函数与重载函数的区别 
```
1、重载函数在类型和参数数量上一定不相同，而重定义的虚函数则要求参数的类型和个数、函数返回类型相同；
2、虚函数必须是类的成员函数，重载的函数则不一定是这样；
3、构造函数可以重载，但不能是虚函数，析构函数可以是虚函数
```

## virtual在函数中的使用限制
* 普通函数不能是虚函数，也就是说这个函数必须是某一个类的成员函数，不可以是一个全局函数，否则会导致编译错误。
* 静态成员函数不能是虚函数 static成员函数是和类同生共处的，他不属于任何对象，使用virtual也将导致错误。
* 内联函数不能是虚函数 如果修饰内联函数 如果内联函数被virtual修饰，计算机会忽略inline使它变成存粹的虚函数。
* 构造函数不能是虚函数，否则会出现编译错误。

# sizeof
* 传递数组首地址 则结果是数组的长度
* 传递指针 则结果是指针所占的字节宽度

### 指定版本：
    cmake_minimum_required(VERSION 3.6.0)
### 指定项目名称
    project(xxxx)

### cmake输出信息
    message(" hello world ")

### 设置一些预定义变量的值
    设置C++版本 set(CMAKE_CXX_STANDARD 14)

### 构建库
    构建一个名字为xxxlib 共享库 所需要的源文件是 demo.c demo.h
    add_library(xxxlib SHARED demo.c demo.h ...)

### 构建可执行文件
    add_executable(xxxexe demo.c demo.h)

### 给构建目标添加宏
    给demo_test目标添加一个XXXX_DEFINE宏 可以直接在源代码里面使用
    target_compile_definitions(demo_test PUBLIC XXXX_DEFINE)





