cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
project(cmakeTestPlan)

#动态库  把动态和执行文件都生成的地址 windows平台
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

#动态库  把动态和执行文件都生成的地址 windows平台
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# aux_source_directory(. SRC_LIST)

# 生成动态库
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
add_library(common SHARED
${SRC_LIST}
)
target_include_directories(common PUBLIC
${PROJECT_SOURCE_DIR}/include
)


add_executable(cmakeTestPlan planningMain.cpp)
target_include_directories(cmakeTestPlan PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(cmakeTestPlan PRIVATE common)