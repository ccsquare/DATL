# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tavares/DATL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tavares/DATL

# Include any dependencies generated for this target.
include CMakeFiles/runAllTests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/runAllTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runAllTests.dir/flags.make

CMakeFiles/runAllTests.dir/runAllTests.cc.o: CMakeFiles/runAllTests.dir/flags.make
CMakeFiles/runAllTests.dir/runAllTests.cc.o: runAllTests.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tavares/DATL/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/runAllTests.dir/runAllTests.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/runAllTests.dir/runAllTests.cc.o -c /home/tavares/DATL/runAllTests.cc

CMakeFiles/runAllTests.dir/runAllTests.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runAllTests.dir/runAllTests.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tavares/DATL/runAllTests.cc > CMakeFiles/runAllTests.dir/runAllTests.cc.i

CMakeFiles/runAllTests.dir/runAllTests.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runAllTests.dir/runAllTests.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tavares/DATL/runAllTests.cc -o CMakeFiles/runAllTests.dir/runAllTests.cc.s

CMakeFiles/runAllTests.dir/runAllTests.cc.o.requires:
.PHONY : CMakeFiles/runAllTests.dir/runAllTests.cc.o.requires

CMakeFiles/runAllTests.dir/runAllTests.cc.o.provides: CMakeFiles/runAllTests.dir/runAllTests.cc.o.requires
	$(MAKE) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/runAllTests.cc.o.provides.build
.PHONY : CMakeFiles/runAllTests.dir/runAllTests.cc.o.provides

CMakeFiles/runAllTests.dir/runAllTests.cc.o.provides.build: CMakeFiles/runAllTests.dir/runAllTests.cc.o

# Object files for target runAllTests
runAllTests_OBJECTS = \
"CMakeFiles/runAllTests.dir/runAllTests.cc.o"

# External object files for target runAllTests
runAllTests_EXTERNAL_OBJECTS =

runAllTests: CMakeFiles/runAllTests.dir/runAllTests.cc.o
runAllTests: CMakeFiles/runAllTests.dir/build.make
runAllTests: src/libDATL.a
runAllTests: CMakeFiles/runAllTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable runAllTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runAllTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runAllTests.dir/build: runAllTests
.PHONY : CMakeFiles/runAllTests.dir/build

CMakeFiles/runAllTests.dir/requires: CMakeFiles/runAllTests.dir/runAllTests.cc.o.requires
.PHONY : CMakeFiles/runAllTests.dir/requires

CMakeFiles/runAllTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runAllTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runAllTests.dir/clean

CMakeFiles/runAllTests.dir/depend:
	cd /home/tavares/DATL && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tavares/DATL /home/tavares/DATL /home/tavares/DATL /home/tavares/DATL /home/tavares/DATL/CMakeFiles/runAllTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/runAllTests.dir/depend

