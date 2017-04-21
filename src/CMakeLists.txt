add_subdirectory(util)
add_subdirectory(version)
add_subdirectory(compiler)
add_subdirectory(graph)

include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/src/util/)
add_executable (jags main.cpp ${PROJECT_SOURCE_DIR}/src/util/option.hpp ${PROJECT_SOURCE_DIR}/src/util/logger.hpp)
target_compile_features(jags PRIVATE cxx_range_for)
target_link_libraries (jags logger option frontend)

