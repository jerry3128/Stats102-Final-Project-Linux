# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/zs175/stats102-Final/env_dflat/htd-1.0.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build

# Include any dependencies generated for this target.
include test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/depend.make

# Include the progress variables for this target.
include test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/progress.make

# Include the compile flags for this target's objects.
include test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/flags.make

test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o: test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/flags.make
test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o: ../test/htd/MinFillOrderingAlgorithmTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zs175/stats102-Final/env_dflat/htd-1.0.1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o"
	cd /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build/test/htd && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o -c /home/zs175/stats102-Final/env_dflat/htd-1.0.1/test/htd/MinFillOrderingAlgorithmTest.cpp

test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.i"
	cd /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build/test/htd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zs175/stats102-Final/env_dflat/htd-1.0.1/test/htd/MinFillOrderingAlgorithmTest.cpp > CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.i

test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.s"
	cd /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build/test/htd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zs175/stats102-Final/env_dflat/htd-1.0.1/test/htd/MinFillOrderingAlgorithmTest.cpp -o CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.s

test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o.requires:

.PHONY : test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o.requires

test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o.provides: test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o.requires
	$(MAKE) -f test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/build.make test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o.provides.build
.PHONY : test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o.provides

test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o.provides.build: test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o


# Object files for target MinFillOrderingAlgorithmTest
MinFillOrderingAlgorithmTest_OBJECTS = \
"CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o"

# External object files for target MinFillOrderingAlgorithmTest
MinFillOrderingAlgorithmTest_EXTERNAL_OBJECTS =

test/htd/MinFillOrderingAlgorithmTest: test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o
test/htd/MinFillOrderingAlgorithmTest: test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/build.make
test/htd/MinFillOrderingAlgorithmTest: lib/libhtd.a
test/htd/MinFillOrderingAlgorithmTest: test/googletest/googletest-release-1.7.0/libgtest.a
test/htd/MinFillOrderingAlgorithmTest: test/googletest/googletest-release-1.7.0/libgtest_main.a
test/htd/MinFillOrderingAlgorithmTest: test/googletest/googletest-release-1.7.0/libgtest.a
test/htd/MinFillOrderingAlgorithmTest: test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zs175/stats102-Final/env_dflat/htd-1.0.1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MinFillOrderingAlgorithmTest"
	cd /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build/test/htd && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MinFillOrderingAlgorithmTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/build: test/htd/MinFillOrderingAlgorithmTest

.PHONY : test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/build

test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/requires: test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/MinFillOrderingAlgorithmTest.cpp.o.requires

.PHONY : test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/requires

test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/clean:
	cd /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build/test/htd && $(CMAKE_COMMAND) -P CMakeFiles/MinFillOrderingAlgorithmTest.dir/cmake_clean.cmake
.PHONY : test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/clean

test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/depend:
	cd /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zs175/stats102-Final/env_dflat/htd-1.0.1 /home/zs175/stats102-Final/env_dflat/htd-1.0.1/test/htd /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build/test/htd /home/zs175/stats102-Final/env_dflat/htd-1.0.1/build/test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/htd/CMakeFiles/MinFillOrderingAlgorithmTest.dir/depend

