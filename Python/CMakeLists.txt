project(aDTNPlus)

set(Python_ADDITIONAL_VERSIONS 3.3 3.4 3.5 3.6 3.7)
if (NOT ${EXAMPLE_PYTHON_VERSION} STREQUAL "")
  find_package(PythonLibs ${EXAMPLE_PYTHON_VERSION} EXACT)
  if (NOT PythonLibs_FOUND)
    find_package(PythonLibs ${EXAMPLE_PYTHON_VERSION} REQUIRED)
  endif()
else()
  find_package(PythonLibs REQUIRED)
endif()
string(REPLACE "+" "" PYTHONLIBS_VERSION_STRING "+${PYTHONLIBS_VERSION_STRING}")

include_directories(${PYTHON_INCLUDE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/pybind11-1.2/include)
include_directories(../Lib)
include_directories(../BundleAgent)
add_library(aDTNPlus SHARED
  aDTNPlusPython.cpp
)

set_target_properties(aDTNPlus PROPERTIES PREFIX "")
set_target_properties(aDTNPlus PROPERTIES SUFFIX ".so")
target_link_libraries(aDTNPlus aDTNLib Bundle_lib)