# 设置项目名称为 pncMap
project(pncMap)

# 创建一个名为 pncMap 的共享库（SHARED），源文件为 pncMap.cpp
add_library(${PROJECT_NAME} SHARED
    pncMap.cpp
)

# 为目标 pncMap 添加头文件搜索路径
# ${pnc_map_dir} 变量应在外部定义，表示头文件所在目录
target_include_directories(${PROJECT_NAME} PUBLIC
${pnc_map_dir}
)