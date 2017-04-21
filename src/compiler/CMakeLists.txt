find_package(BISON)
find_package(FLEX)

BISON_TARGET(modelparser parser.yy ${CMAKE_CURRENT_BINARY_DIR}/parser.cc)
FLEX_TARGET(modelscanner scanner.ll  ${CMAKE_CURRENT_BINARY_DIR}/scanner.cpp)
ADD_FLEX_BISON_DEPENDENCY(modelscanner modelparser)

include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/src/compiler)
add_library(frontend
  parser_extra.h ParseTree.h ParseTree.cc parser.cc parser.hh remap.h
    ${BISON_modelparser_OUTPUTS}
    ${FLEX_modelscanner_OUTPUTS}
 )
