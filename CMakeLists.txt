# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目名
project(a)

# 指定源文件目录, 并将目录保存到变量var中({dir} {var})
aux_source_directory(src SRC_PATH)

# 添加子处理目录, 这个目录下的CMakeLists.txt也会被处理
add_subdirectory(math)

# 添加头文件目录
include_directories(include)

# 指定可执行文件({exe} {src1} {src2} ...)
# 指定可执行文件({exe} {src_path})
add_executable(a ${SRC_PATH})
# add_executable(a a.cpp b.cpp)

# 添加链接库
target_link_libraries(a MyMath)
