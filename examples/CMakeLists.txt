add_executable(
		array-example
		array-example.cpp
)

target_link_libraries(
		array-example
		PRIVATE
		${USTL_TARGET_NAME}
)