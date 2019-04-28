add_subdirectory(database)
add_subdirectory(io)

# CORE library that combines the two libraries (database and io)
add_library(core SHARED)
target_link_libraries(core PUBLIC core_io_obj core_database_obj)

# Sample executable that links against "core"
add_executable(sample_app sample_app/sample_app.cpp)
target_link_libraries(sample_app PRIVATE core)