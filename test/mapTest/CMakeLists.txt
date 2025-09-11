project(mapTest)
add_executable(${PROJECT_NAME} mapTest.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${pnc_map_dir})
target_link_libraries(${PROJECT_NAME} PRIVATE pncMap)


add_test(NAME mapTest COMMAND ${PROJECT_NAME})