include_directories(${PROJECT_SOURCE_DIR}/src/lib/ ${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/src/distribution/)

file(GLOB distribution_src
    "${CMAKE_CURRENT_LIST_DIR}/*.h"
    "${CMAKE_CURRENT_LIST_DIR}/*.cc"
    )

add_library(distribution
  ${distribution_src}
  )
