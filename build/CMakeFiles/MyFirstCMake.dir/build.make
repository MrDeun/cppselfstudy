# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\CMakeProject\source"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\build"

# Include any dependencies generated for this target.
include CMakeFiles/MyFirstCMake.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyFirstCMake.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyFirstCMake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyFirstCMake.dir/flags.make

CMakeFiles/MyFirstCMake.dir/main.cpp.obj: CMakeFiles/MyFirstCMake.dir/flags.make
CMakeFiles/MyFirstCMake.dir/main.cpp.obj: C:/Users/Patryk\ Michalak/Documents/GitHub/cppselfstudy/CMakeProject/source/main.cpp
CMakeFiles/MyFirstCMake.dir/main.cpp.obj: CMakeFiles/MyFirstCMake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyFirstCMake.dir/main.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyFirstCMake.dir/main.cpp.obj -MF CMakeFiles\MyFirstCMake.dir\main.cpp.obj.d -o CMakeFiles\MyFirstCMake.dir\main.cpp.obj -c "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\CMakeProject\source\main.cpp"

CMakeFiles/MyFirstCMake.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyFirstCMake.dir/main.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\CMakeProject\source\main.cpp" > CMakeFiles\MyFirstCMake.dir\main.cpp.i

CMakeFiles/MyFirstCMake.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyFirstCMake.dir/main.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\CMakeProject\source\main.cpp" -o CMakeFiles\MyFirstCMake.dir\main.cpp.s

# Object files for target MyFirstCMake
MyFirstCMake_OBJECTS = \
"CMakeFiles/MyFirstCMake.dir/main.cpp.obj"

# External object files for target MyFirstCMake
MyFirstCMake_EXTERNAL_OBJECTS =

MyFirstCMake.exe: CMakeFiles/MyFirstCMake.dir/main.cpp.obj
MyFirstCMake.exe: CMakeFiles/MyFirstCMake.dir/build.make
MyFirstCMake.exe: CMakeFiles/MyFirstCMake.dir/linkLibs.rsp
MyFirstCMake.exe: CMakeFiles/MyFirstCMake.dir/objects1.rsp
MyFirstCMake.exe: CMakeFiles/MyFirstCMake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyFirstCMake.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MyFirstCMake.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyFirstCMake.dir/build: MyFirstCMake.exe
.PHONY : CMakeFiles/MyFirstCMake.dir/build

CMakeFiles/MyFirstCMake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MyFirstCMake.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MyFirstCMake.dir/clean

CMakeFiles/MyFirstCMake.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\CMakeProject\source" "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\CMakeProject\source" "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\build" "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\build" "C:\Users\Patryk Michalak\Documents\GitHub\cppselfstudy\build\CMakeFiles\MyFirstCMake.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/MyFirstCMake.dir/depend
