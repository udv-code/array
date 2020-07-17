cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

option(USTL_BUILD_EXAMPLES "Build examples" ON)

### Global configs
set(CMAKE_DEBUG_POSTFIX "-debug")
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

### Modules
list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_CURRENT_LIST_DIR}/cmake")

include(printhelp)

### Project config
set(USTL_PROJECT_NAME "ustl")
set(USTL_VERSION_MAJOR 1)
set(USTL_VERSION_MINOR 0)
set(USTL_VERSION_HOTFIX 0)
set(USTL_VERSION "${USTL_VERSION_MAJOR}.${USTL_VERSION_MINOR}.${USTL_VERSION_HOTFIX}")
set(USTL_NAME_VERSION "${USTL_PROJECT_NAME} v${USTL_VERSION}")
### Target Config
set(USTL_TARGET_NAME "${USTL_PROJECT_NAME}")

if (WIN32)
	set(CMAKE_USE_RELATIVE_PATHS ON)
endif ()

### Modules
list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_CURRENT_LIST_DIR}/cmake")

### Project setup
project(
		${USTL_PROJECT_NAME}
		VERSION ${USTL_VERSION}
		LANGUAGES CXX
)

### Target
add_subdirectory(ustl-main)

### Examples
if (USTL_BUILD_EXAMPLES)
	add_subdirectory(examples)
endif ()