
set(datl_SRC
	KDTree.h
	Point.h
	BoundedPQueue.h
	numeric.h
	)

add_library(libdatl ${datl_SRC})
set_target_properties(libdatl PROPERTIES LINKER_LANGUAGE CXX)

