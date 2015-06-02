include_directories(${PROJECT_SOURCE_DIR}/src)

set(APP_SRC
	kdtree_test.cc
	datl_test.cc)

set(GTEST_SRC
	kdtree_gtest.cc
	numeric_gtest.cc
)


add_executable(test_suite ${APP_SRC})
target_link_libraries(test_suite libdatl)

########## gtest ###########
add_executable(gtest_suite  ${GTEST_SRC})
# link test executable against gtest & gtest_main
target_link_libraries(gtest_suite gtest gtest_main)
add_test(gtest_suite gtest_suite)
