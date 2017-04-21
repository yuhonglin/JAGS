include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/src/util ${PROJECT_SOURCE_DIR}/src/monitor/)

file(GLOB monitor_src
    "${CMAKE_CURRENT_LIST_DIR}/*.h"
    "${CMAKE_CURRENT_LIST_DIR}/*.cc"
    )

add_library(monitor
  ${monitor_src}
  )
