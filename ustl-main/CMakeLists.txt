configure_step("Target")

# Helper vars
get_filename_component(CURRENT_DIR ${CMAKE_CURRENT_LIST_DIR} NAME)
set(USTL_BINARY_DIR ${${USTL_TARGET_NAME}_BINARY_DIR}/${CURRENT_DIR})
set(USTL_SOURCE_DIR ${${USTL_TARGET_NAME}_SOURCE_DIR}/${CURRENT_DIR})

# Target
add_library(
		${USTL_TARGET_NAME}
		INTERFACE
)

add_library(
		${USTL_PROJECT_NAME}::${USTL_TARGET_NAME}
		ALIAS
		${USTL_TARGET_NAME}
)

target_include_directories(
		${USTL_TARGET_NAME}
		INTERFACE
		$<BUILD_INTERFACE:${USTL_BINARY_DIR}/include>
		$<BUILD_INTERFACE:${USTL_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>
)

end_configure_step("Target")