project(planningMain)

add_subdirectory(pncMap)
add_subdirectory(process)

add_executable(${PROJECT_NAME} planningMain.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${process_dir})

target_link_libraries (${PROJECT_NAME} PRIVATE process)