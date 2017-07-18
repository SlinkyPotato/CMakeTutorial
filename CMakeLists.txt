cmake_minimum_required(VERSION 3.7)
project(CMakeTutorial)

# Version number
set(CMakeTutorial_VERSION_MAJOR 1)
set(CMakeTutorial_VERSION_MINOR 0)
set(CMakeTutorial_VERSION_MICRO 0)

# Configure a header tile to pass some of the CMake settings
configure_file(
	"${PROJECT_SOURCE_DIR}/CMakeTutorialConfig.h.in"
	"${PROJECT_BINARY_DIR}/CMakeTutorialConfig.h"
	)

# Add libraries
# add_library(MathFunctions mysqrt.cpp)
# option(USE_MYMATH
	# "Use tutorial provided math implementation" ON)

# Add the binary tree to the search path for include files
include_directories("${PROJECT_BINARY_DIR}")
# include_directories("${PROJECT_SOURCE_DIR}/MathFunctions")
# add_subdirectory(MathFunctions)

add_executable(CMakeTutorial main.cpp)

# Link the libraries
# target_link_libraries(CMakeTutorial MathFunctions)
