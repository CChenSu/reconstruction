file(GLOB HEADERS "*.h" "*.hpp")

file(GLOB SOURCES "*.c" "*.cpp")

source_group("Header Files" FILES "*.h" "*.hpp")
source_group("Source Files" FILES "*.c" "*.cpp")

add_library(DataStruct ${HEADERS} ${SOURCES})