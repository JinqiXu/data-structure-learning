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
CMAKE_SOURCE_DIR = /home/xujinqi/data-structure-learning/LinkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xujinqi/data-structure-learning/LinkedList/build

# Include any dependencies generated for this target.
include CMakeFiles/LinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkedList.dir/flags.make

CMakeFiles/LinkedList.dir/src/main.cpp.o: CMakeFiles/LinkedList.dir/flags.make
CMakeFiles/LinkedList.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xujinqi/data-structure-learning/LinkedList/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinkedList.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinkedList.dir/src/main.cpp.o -c /home/xujinqi/data-structure-learning/LinkedList/src/main.cpp

CMakeFiles/LinkedList.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkedList.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xujinqi/data-structure-learning/LinkedList/src/main.cpp > CMakeFiles/LinkedList.dir/src/main.cpp.i

CMakeFiles/LinkedList.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkedList.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xujinqi/data-structure-learning/LinkedList/src/main.cpp -o CMakeFiles/LinkedList.dir/src/main.cpp.s

CMakeFiles/LinkedList.dir/src/myFunc.cpp.o: CMakeFiles/LinkedList.dir/flags.make
CMakeFiles/LinkedList.dir/src/myFunc.cpp.o: ../src/myFunc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xujinqi/data-structure-learning/LinkedList/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LinkedList.dir/src/myFunc.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinkedList.dir/src/myFunc.cpp.o -c /home/xujinqi/data-structure-learning/LinkedList/src/myFunc.cpp

CMakeFiles/LinkedList.dir/src/myFunc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkedList.dir/src/myFunc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xujinqi/data-structure-learning/LinkedList/src/myFunc.cpp > CMakeFiles/LinkedList.dir/src/myFunc.cpp.i

CMakeFiles/LinkedList.dir/src/myFunc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkedList.dir/src/myFunc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xujinqi/data-structure-learning/LinkedList/src/myFunc.cpp -o CMakeFiles/LinkedList.dir/src/myFunc.cpp.s

# Object files for target LinkedList
LinkedList_OBJECTS = \
"CMakeFiles/LinkedList.dir/src/main.cpp.o" \
"CMakeFiles/LinkedList.dir/src/myFunc.cpp.o"

# External object files for target LinkedList
LinkedList_EXTERNAL_OBJECTS =

../bin/LinkedList: CMakeFiles/LinkedList.dir/src/main.cpp.o
../bin/LinkedList: CMakeFiles/LinkedList.dir/src/myFunc.cpp.o
../bin/LinkedList: CMakeFiles/LinkedList.dir/build.make
../bin/LinkedList: CMakeFiles/LinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xujinqi/data-structure-learning/LinkedList/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/LinkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkedList.dir/build: ../bin/LinkedList

.PHONY : CMakeFiles/LinkedList.dir/build

CMakeFiles/LinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinkedList.dir/clean

CMakeFiles/LinkedList.dir/depend:
	cd /home/xujinqi/data-structure-learning/LinkedList/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xujinqi/data-structure-learning/LinkedList /home/xujinqi/data-structure-learning/LinkedList /home/xujinqi/data-structure-learning/LinkedList/build /home/xujinqi/data-structure-learning/LinkedList/build /home/xujinqi/data-structure-learning/LinkedList/build/CMakeFiles/LinkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkedList.dir/depend

