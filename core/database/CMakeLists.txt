# OBJECT LIBRARY
add_library(core_database_obj OBJECT
            src/database.cpp)

target_include_directories(core_database_obj PUBLIC include)

target_compile_definitions(core_database_obj PRIVATE COMPILING_DLL)

# REGULAR LIBRARY (here it is explicitly SHARED)
# Note: some IDEs may not show the target if the target has no sources itself. 
add_library(core_database SHARED)

target_link_libraries(core_database PUBLIC core_database_obj)

