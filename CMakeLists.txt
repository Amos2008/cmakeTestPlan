cmake_minimum_required(VERSION 3.10)


project(
    realCmakeProject
    VERSION 0.0.1
    DESCRIPTION "A simple CMake project"
    HOMEPAGE_URL "https://github.com/Amos2008/cmakeTestPlan"
    LANGUAGES CXX
)
        
set(CMAKE_CXX_STANDARD 11)
    
#变量设置
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)


# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(process_dir ${CMAKE_SOURCE_DIR}/src/process)
set(pnc_map_dir ${CMAKE_SOURCE_DIR}/src/pncMap)




#添加子目录
add_subdirectory(src)


# cmake_minimum_required(VERSION 3.10)
# set(CMAKE_CXX_STANDARD 11)
# project(cmakeTestPlan)

# #动态库  把动态和执行文件都生成的地址 windows平台
# # set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# #动态库  把动态和执行文件都生成的地址 windows平台
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# # set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# # aux_source_directory(. SRC_LIST)

# # 生成动态库
# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
# add_library(common SHARED
# ${SRC_LIST}
# )
# target_include_directories(common PUBLIC
# ${PROJECT_SOURCE_DIR}/include
# )

# # 生成可执行文件
# add_executable(cmakeTestPlan planningMain.cpp)
# target_include_directories(cmakeTestPlan PRIVATE ${PROJECT_SOURCE_DIR}/include)

# # 链接动态库
# target_link_libraries(cmakeTestPlan PRIVATE common)