# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/xujinqi/data-structure-learning/Tree/ThreadTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xujinqi/data-structure-learning/Tree/ThreadTree/build

# Include any dependencies generated for this target.
include CMakeFiles/ThreadTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ThreadTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ThreadTree.dir/flags.make

CMakeFiles/ThreadTree.dir/src/myFunc.cpp.o: CMakeFiles/ThreadTree.dir/flags.make
CMakeFiles/ThreadTree.dir/src/myFunc.cpp.o: ../src/myFunc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xujinqi/data-structure-learning/Tree/ThreadTree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ThreadTree.dir/src/myFunc.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ThreadTree.dir/src/myFunc.cpp.o -c /home/xujinqi/data-structure-learning/Tree/ThreadTree/src/myFunc.cpp

CMakeFiles/ThreadTree.dir/src/myFunc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ThreadTree.dir/src/myFunc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xujinqi/data-structure-learning/Tree/ThreadTree/src/myFunc.cpp > CMakeFiles/ThreadTree.dir/src/myFunc.cpp.i

CMakeFiles/ThreadTree.dir/src/myFunc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ThreadTree.dir/src/myFunc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xujinqi/data-structure-learning/Tree/ThreadTree/src/myFunc.cpp -o CMakeFiles/ThreadTree.dir/src/myFunc.cpp.s

CMakeFiles/ThreadTree.dir/src/main.cpp.o: CMakeFiles/ThreadTree.dir/flags.make
CMakeFiles/ThreadTree.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xujinqi/data-structure-learning/Tree/ThreadTree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ThreadTree.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ThreadTree.dir/src/main.cpp.o -c /home/xujinqi/data-structure-learning/Tree/ThreadTree/src/main.cpp

CMakeFiles/ThreadTree.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ThreadTree.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xujinqi/data-structure-learning/Tree/ThreadTree/src/main.cpp > CMakeFiles/ThreadTree.dir/src/main.cpp.i

CMakeFiles/ThreadTree.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ThreadTree.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xujinqi/data-structure-learning/Tree/ThreadTree/src/main.cpp -o CMakeFiles/ThreadTree.dir/src/main.cpp.s

# Object files for target ThreadTree
ThreadTree_OBJECTS = \
"CMakeFiles/ThreadTree.dir/src/myFunc.cpp.o" \
"CMakeFiles/ThreadTree.dir/src/main.cpp.o"

# External object files for target ThreadTree
ThreadTree_EXTERNAL_OBJECTS =

../bin/ThreadTree: CMakeFiles/ThreadTree.dir/src/myFunc.cpp.o
../bin/ThreadTree: CMakeFiles/ThreadTree.dir/src/main.cpp.o
../bin/ThreadTree: CMakeFiles/ThreadTree.dir/build.make
../bin/ThreadTree: CMakeFiles/ThreadTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xujinqi/data-structure-learning/Tree/ThreadTree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/ThreadTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ThreadTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ThreadTree.dir/build: ../bin/ThreadTree

.PHONY : CMakeFiles/ThreadTree.dir/build

CMakeFiles/ThreadTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ThreadTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ThreadTree.dir/clean

CMakeFiles/ThreadTree.dir/depend:
	cd /home/xujinqi/data-structure-learning/Tree/ThreadTree/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xujinqi/data-structure-learning/Tree/ThreadTree /home/xujinqi/data-structure-learning/Tree/ThreadTree /home/xujinqi/data-structure-learning/Tree/ThreadTree/build /home/xujinqi/data-structure-learning/Tree/ThreadTree/build /home/xujinqi/data-structure-learning/Tree/ThreadTree/build/CMakeFiles/ThreadTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ThreadTree.dir/depend
