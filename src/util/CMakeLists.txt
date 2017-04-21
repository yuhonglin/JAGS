include_directories(${PROJECT_SOURCE_DIR}/src/version/)
add_library (logger STATIC logger.hpp logger.cpp)
target_link_libraries(logger version)
add_library (option STATIC option.hpp option.cpp)
target_link_libraries(option logger)


add_library (error STATIC error.h error.cc)
include_directories(error ${PROJECT_SOURCE_DIR}/src/ ${PROJECT_SOURCE_DIR}/src/graph/ ${PROJECT_SOURCE_DIR}/src/distribution/ ${PROJECT_SOURCE_DIR}/src/function/)

