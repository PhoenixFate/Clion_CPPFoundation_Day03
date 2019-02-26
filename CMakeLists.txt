cmake_minimum_required(VERSION 3.13)
project(Clion_CPPFoundation_Day03)

set(CMAKE_CXX_STANDARD 14)

add_executable(Clion_CPPFoundation_Day03 "01 面向对象设计案例-立方体.cpp" "02 面向对象设计案例-点和圆的关系.cpp" Point.cpp Point.h Circle.cpp Circle.h "03 初始化和清理.cpp" "04 构造函数的分类和调用.cpp" "05 拷贝构造函数调用时机.cpp" "06 拷贝函数的调用规则.cpp" "07 深拷贝和浅拷贝.cpp" "08 初始化列表的使用.cpp" "09 类对象作为成员.cpp" "10 explicit关键字.cpp" "11 new运算符的使用.cpp")