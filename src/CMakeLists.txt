project(planningMain)

add_subdirectory(pncMap)
add_subdirectory(process)
add_subdirectory(showResult)

add_executable(${PROJECT_NAME} planningMain.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${process_dir})

target_link_libraries (${PROJECT_NAME} PRIVATE process)



target_include_directories(${PROJECT_NAME} PRIVATE ${show_result_dir})
target_link_libraries(${PROJECT_NAME} PUBLIC
    showResult
)
