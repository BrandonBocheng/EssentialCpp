# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bochenghu/myCpp/HeimaProgramCppTutorial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bochenghu/myCpp/HeimaProgramCppTutorial/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HeimaProgramCppTutorial.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/HeimaProgramCppTutorial.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/HeimaProgramCppTutorial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HeimaProgramCppTutorial.dir/flags.make

CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.o: CMakeFiles/HeimaProgramCppTutorial.dir/flags.make
CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.o: ../01_CppBasic/01_Variable.cpp
CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.o: CMakeFiles/HeimaProgramCppTutorial.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bochenghu/myCpp/HeimaProgramCppTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/gcc $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.o -MF CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.o.d -o CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.o -c /Users/bochenghu/myCpp/HeimaProgramCppTutorial/01_CppBasic/01_Variable.cpp

CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/gcc $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bochenghu/myCpp/HeimaProgramCppTutorial/01_CppBasic/01_Variable.cpp > CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.i

CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/gcc $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bochenghu/myCpp/HeimaProgramCppTutorial/01_CppBasic/01_Variable.cpp -o CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.s

# Object files for target HeimaProgramCppTutorial
HeimaProgramCppTutorial_OBJECTS = \
"CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.o"

# External object files for target HeimaProgramCppTutorial
HeimaProgramCppTutorial_EXTERNAL_OBJECTS =

HeimaProgramCppTutorial: CMakeFiles/HeimaProgramCppTutorial.dir/01_CppBasic/01_Variable.cpp.o
HeimaProgramCppTutorial: CMakeFiles/HeimaProgramCppTutorial.dir/build.make
HeimaProgramCppTutorial: CMakeFiles/HeimaProgramCppTutorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bochenghu/myCpp/HeimaProgramCppTutorial/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HeimaProgramCppTutorial"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HeimaProgramCppTutorial.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HeimaProgramCppTutorial.dir/build: HeimaProgramCppTutorial
.PHONY : CMakeFiles/HeimaProgramCppTutorial.dir/build

CMakeFiles/HeimaProgramCppTutorial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HeimaProgramCppTutorial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HeimaProgramCppTutorial.dir/clean

CMakeFiles/HeimaProgramCppTutorial.dir/depend:
	cd /Users/bochenghu/myCpp/HeimaProgramCppTutorial/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bochenghu/myCpp/HeimaProgramCppTutorial /Users/bochenghu/myCpp/HeimaProgramCppTutorial /Users/bochenghu/myCpp/HeimaProgramCppTutorial/cmake-build-debug /Users/bochenghu/myCpp/HeimaProgramCppTutorial/cmake-build-debug /Users/bochenghu/myCpp/HeimaProgramCppTutorial/cmake-build-debug/CMakeFiles/HeimaProgramCppTutorial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HeimaProgramCppTutorial.dir/depend

