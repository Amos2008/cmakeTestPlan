project(showResult)

add_library(${PROJECT_NAME} SHARED
   showResult.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
${process_dir}
)
target_link_libraries(${PROJECT_NAME} PUBLIC
process
)

target_include_directories(${PROJECT_NAME} PUBLIC
${easyx_dir}/include
)   

target_link_libraries(${PROJECT_NAME} PUBLIC
${easyx_dir}/lib64/libeasyx.a
)

target_link_libraries(${PROJECT_NAME} PUBLIC
${easyx_dir}/lib64/libeasyxw.a
)