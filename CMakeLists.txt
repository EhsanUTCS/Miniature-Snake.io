cmake_minimum_required(VERSION 3.14)
project(Snake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/core/App.cpp src/core/App.h src/core/constants.h src/core/Context.cpp src/core/Context.h src/core/Widget.cpp src/core/Widget.h src/pages/Menu.cpp src/pages/Menu.h src/core/Page.cpp src/core/Page.h src/widgets/Button.cpp src/widgets/Button.h)
add_executable(Snake ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Snake ${SFML_LIBRARIES})
endif()