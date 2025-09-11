project(process)

add_library(${PROJECT_NAME} SHARED
   process.cpp
)   
# target_include_directories(${PROJECT_NAME} PUBLIC
# ${process_dir}
# )
target_include_directories(${PROJECT_NAME} PUBLIC
${pnc_map_dir}
)   
target_link_libraries(${PROJECT_NAME} PUBLIC
pncMap)

