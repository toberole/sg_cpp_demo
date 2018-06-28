cmake_minimum_required(VERSION 3.10)
project(demo_study)

set(CMAKE_CXX_STANDARD 11)

# aux_source_directory命令
# 命令语法：aux_source_directory(<dir> <variable>)
# 命令简述：用于将 dir 目录下的所有源文件的名字保存在变量 variable 中
# 使用范例：aux_source_directory(. DIR_SRCS)
# 用于将 dir 目录下的所有源文件的名字保存在变量 DIR_SRCS 中
aux_source_directory(./src DIR_SRCS)

# include_directories 命令
# 命令语法：include_directories([AFTER|BEFORE] [SYSTEM] dir1 dir2 …)
# 命令简述：用于设定目录，这些设定的目录将被编译器用来查找 include 文件
# 使用范例：include_directories(${PROJECT_SOURCE_DIR}/lib)
include_directories(./../include)

# add_executable 命令
# 命令语法：add_executable(<name> [WIN32] [MACOSX_BUNDLE][EXCLUDE_FROM_ALL] source1 source2 … sourceN)
# 命令简述：用于指定从一组源文件 source1 source2 … sourceN 编译出一个可执行文件且命名为 name
# 使用范例：add_executable(Main ${DIR_SRCS})
add_executable(demo_study  ${DIR_SRCS} src/Shape.cpp include/Shape.h include/Rect.h include/Student.h src/DataProcessor.h src/AppDataProcessor.cpp src/AppDataProcessor.h src/SysDataProcessor.cpp src/SysDataProcessor.h)

# add_library 命令
# 命令语法：add_library([STATIC | SHARED | MODULE] [EXCLUDE_FROM_ALL] source1source2 … sourceN)
# 命令简述：用于指定从一组源文件 source1 source2 … sourceN 编译出一个库文件且命名为 name
# 使用范例：add_library(Lib ${DIR_SRCS})




























