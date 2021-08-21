cmake_minimum_required(VERSION 3.0.0)
project(Support VERSION 0.1.0)

include(CTest)
enable_testing()


add_subdirectory(gal)
add_subdirectory(engine)
add_subdirectory(opengl)
add_subdirectory(game)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(  ${PROJECT_VERSION})
include(CPack)
