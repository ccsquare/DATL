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
include src/CMakeFiles/libdatl.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/libdatl.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/libdatl.dir/flags.make

# Object files for target libdatl
libdatl_OBJECTS =

# External object files for target libdatl
libdatl_EXTERNAL_OBJECTS =

src/liblibdatl.a: src/CMakeFiles/libdatl.dir/build.make
src/liblibdatl.a: src/CMakeFiles/libdatl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library liblibdatl.a"
	cd /home/tavares/DATL/src && $(CMAKE_COMMAND) -P CMakeFiles/libdatl.dir/cmake_clean_target.cmake
	cd /home/tavares/DATL/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libdatl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/libdatl.dir/build: src/liblibdatl.a
.PHONY : src/CMakeFiles/libdatl.dir/build

src/CMakeFiles/libdatl.dir/requires:
.PHONY : src/CMakeFiles/libdatl.dir/requires

src/CMakeFiles/libdatl.dir/clean:
	cd /home/tavares/DATL/src && $(CMAKE_COMMAND) -P CMakeFiles/libdatl.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/libdatl.dir/clean

src/CMakeFiles/libdatl.dir/depend:
	cd /home/tavares/DATL && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tavares/DATL /home/tavares/DATL/src /home/tavares/DATL /home/tavares/DATL/src /home/tavares/DATL/src/CMakeFiles/libdatl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/libdatl.dir/depend

