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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /C_Project/C_Basic_exercises

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /C_Project/C_Basic_exercises/build

# Include any dependencies generated for this target.
include CMakeFiles/c_exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/c_exe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/c_exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_exe.dir/flags.make

CMakeFiles/c_exe.dir/src/double_list.c.o: CMakeFiles/c_exe.dir/flags.make
CMakeFiles/c_exe.dir/src/double_list.c.o: ../src/double_list.c
CMakeFiles/c_exe.dir/src/double_list.c.o: CMakeFiles/c_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/C_Project/C_Basic_exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_exe.dir/src/double_list.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/c_exe.dir/src/double_list.c.o -MF CMakeFiles/c_exe.dir/src/double_list.c.o.d -o CMakeFiles/c_exe.dir/src/double_list.c.o -c /C_Project/C_Basic_exercises/src/double_list.c

CMakeFiles/c_exe.dir/src/double_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_exe.dir/src/double_list.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /C_Project/C_Basic_exercises/src/double_list.c > CMakeFiles/c_exe.dir/src/double_list.c.i

CMakeFiles/c_exe.dir/src/double_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_exe.dir/src/double_list.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /C_Project/C_Basic_exercises/src/double_list.c -o CMakeFiles/c_exe.dir/src/double_list.c.s

# Object files for target c_exe
c_exe_OBJECTS = \
"CMakeFiles/c_exe.dir/src/double_list.c.o"

# External object files for target c_exe
c_exe_EXTERNAL_OBJECTS =

c_exe: CMakeFiles/c_exe.dir/src/double_list.c.o
c_exe: CMakeFiles/c_exe.dir/build.make
c_exe: CMakeFiles/c_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/C_Project/C_Basic_exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_exe.dir/build: c_exe
.PHONY : CMakeFiles/c_exe.dir/build

CMakeFiles/c_exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c_exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c_exe.dir/clean

CMakeFiles/c_exe.dir/depend:
	cd /C_Project/C_Basic_exercises/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /C_Project/C_Basic_exercises /C_Project/C_Basic_exercises /C_Project/C_Basic_exercises/build /C_Project/C_Basic_exercises/build /C_Project/C_Basic_exercises/build/CMakeFiles/c_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_exe.dir/depend
