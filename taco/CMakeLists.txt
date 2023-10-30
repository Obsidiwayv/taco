# CMakeList.txt : CMake project for taco, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (taco "taco.cpp" "taco.h"  "assembler.h" "assembler.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET taco PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
