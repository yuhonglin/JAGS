include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/src/lib/ ${PROJECT_SOURCE_DIR}/src/function/ ${PROJECT_SOURCE_DIR}/src/util/)

file(GLOB function_src
    "${CMAKE_CURRENT_LIST_DIR}/*.h"
    "${CMAKE_CURRENT_LIST_DIR}/*.cc"
    )

add_library(function
  ${function_src}
  )
target_link_libraries(function jrmath)
