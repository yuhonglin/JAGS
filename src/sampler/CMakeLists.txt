include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/src/distribution/ ${PROJECT_SOURCE_DIR}/src/lib/ ${PROJECT_SOURCE_DIR}/src/util/ ${PROJECT_SOURCE_DIR}/src/sampler/)

file(GLOB sampler_src
    "${CMAKE_CURRENT_LIST_DIR}/*.h"
    "${CMAKE_CURRENT_LIST_DIR}/*.cc"
    )

add_library(sampler
  ${sampler_src}
  )
