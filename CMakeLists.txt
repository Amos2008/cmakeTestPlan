# 设置CMake的最低版本要求
cmake_minimum_required(VERSION 3.10)

# 定义项目名称、版本、描述、主页和使用的语言
project(
    realCmakeProject
    VERSION 0.0.1
    DESCRIPTION "A simple CMake project"
    HOMEPAGE_URL "https://github.com/Amos2008/cmakeTestPlan"
    LANGUAGES CXX
)

# 设置C++标准为C++11
set(CMAKE_CXX_STANDARD 11)

# 启用测试功能
enable_testing()

# 设置输出目录，将生成的库和可执行文件放到bin目录下
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)   # 静态库输出目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)   # 动态库输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)   # 可执行文件输出目录

# 也可以选择使用构建目录作为输出目录（已注释）
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 设置源码子目录变量，便于后续引用
set(process_dir ${CMAKE_SOURCE_DIR}/src/process)
set(pnc_map_dir ${CMAKE_SOURCE_DIR}/src/pncMap)
set(show_result_dir ${CMAKE_SOURCE_DIR}/src/showResult)

# 查找第三方库Eigen3，要求3.3及以上版本
find_package(Eigen3 3.3 REQUIRED NO_MODULE)
list(APPEND CMAKE_MODULE_PATH "${Eigen3_DIR}")  # 添加Eigen3的模块路径
message("CMAKE_MODULE_PATH=${CMAKE_MODULE_PATH}")
message(STATUS "Found Eigen version: ${EIGEN3_VERSION}")

# 检查Eigen3目标是否存在
if(TARGET Eigen::Eigen)
    message(STATUS "Eigen3::Eigen is found")
endif()


# 其它第三方库设置（如ONNXRUNTIME、OpenCV，当前已注释）
# set(ONNXRUNTIME_DIR "/home/dell/test/lib/onnxruntime-linux-x64-1.12.1") 
# include_directories("${ONNXRUNTIME_DIR}/include")
# find_package(OpenCV 4 REQUIRED )
# message(STATUS "Found OpenCV version: ${OpenCV_VERSION}")

# 设置easyx库路径（静态库第三方）
set(easyx_dir "D:/code/easyx4mingw_25.9.10")
# include_directories("${easyx_dir}/include")

# 添加子目录，编译src和test/mapTest下的CMakeLists.txt

add_subdirectory(src)

add_subdirectory(test/mapTest)









