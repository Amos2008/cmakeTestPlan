project(mapTest) # 定义一个名为 mapTest 的项目
add_executable(${PROJECT_NAME} mapTest.cpp) # 生成可执行文件 mapTest，源文件为 mapTest.cpp
target_include_directories(${PROJECT_NAME} PRIVATE ${pnc_map_dir}) # 添加头文件搜索路径，指向 pnc_map_dir 变量指定的目录
target_link_libraries(${PROJECT_NAME} PRIVATE pncMap) # 链接 pncMap 库，确保可执行文件能调用 pncMap 的实现

# 添加测试，使用 ctest 时会运行 mapTest 可执行文件
add_test(NAME mapTest COMMAND ${PROJECT_NAME})

