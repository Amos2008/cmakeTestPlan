# cmakeTestPlan

这是一个用于学习和验证 CMake 多模块构建的 C++ 示例项目。项目主程序 `planningMain` 会调用规划处理模块 `process`，`process` 再组合地图模块 `pncMap`；运行结束前还会调用 `showResult`，通过 EasyX 绘制一个简单窗口结果。

## 项目结构

```text
.
├── CMakeLists.txt                 # 顶层 CMake 配置
├── src/
│   ├── planningMain.cpp           # C++ 主程序入口
│   ├── pncMap/                    # 地图信息模块，生成 pncMap 动态库
│   ├── process/                   # 规划处理模块，生成 process 动态库
│   └── showResult/                # 绘图展示模块，生成 showResult 动态库
└── test/
    └── mapTest/                   # pncMap 的简单测试程序
```

## C++ 模块说明

- `pncMap`：提供 `PNCMap` 类，目前主要输出地图模块信息。
- `process`：提供 `Process` 类，内部组合 `PNCMap`，并使用 Eigen 创建简单矩阵示例。
- `showResult`：提供 `ShowResult` 类，依赖 EasyX 绘制窗口、圆形、矩形和文本。
- `planningMain`：主程序入口，按顺序执行 `Process::planProcess()` 和 `ShowResult::drawResult()`。

## 构建依赖

构建 C++ 项目前需要准备：

- CMake 3.10 或更高版本
- 支持 C++11 的编译器
- Eigen3 3.3 或更高版本
- EasyX for MinGW

当前顶层 `CMakeLists.txt` 中 EasyX 路径写为：

```cmake
set(easyx_dir "D:/code/easyx4mingw_25.9.10")
```

如果你的 EasyX 安装位置不同，需要先修改这个路径。

## 构建和运行

在项目根目录执行：

```powershell
cmake -S . -B build
cmake --build build
```

生成的可执行文件和库会输出到项目根目录下的 `bin/` 目录，因为顶层 CMake 已设置：

```cmake
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
```

运行主程序：

```powershell
.\bin\planningMain.exe
```

运行测试：

```powershell
ctest --test-dir build
```

## 当前项目重点

这个仓库目前更像一个 CMake 练习项目，重点是理解：

- 顶层 CMake 如何管理子目录。
- `add_library()` 如何生成模块库。
- `target_include_directories()` 如何传递头文件路径。
- `target_link_libraries()` 如何连接模块依赖。
- 第三方库 Eigen 和 EasyX 如何接入 CMake 构建。

<!--
Previous README content, kept for reference:

# cmakeTestPlan
cmake test project plan

# explain  cmake
1. project   build a name of project
2. add_library  build a shared library
3. target_include_directories  {project_name}  public   head file path, use set to name
4. {CMAKE_SOURCE_NAME} file of cmake   {PROJECT_SOURCE_NAME} file of project
#
[old note: directory levels]
[old note: paragraph indentation]
# first

## second

### third

[old note: bold or underline]
*content*
_content_

**content**
__content__

***content***
___content__

[old note: list content]
- content
* content
+ content

It's just only me
what was the man expect to find under stairs

[old note: nested list]
1. content
2. content
    * content
    * content
    * content
-->
