# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\gryma\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\gryma\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Projekty Clion\Square"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Projekty Clion\Square\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Square.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Square.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Square.dir/flags.make

CMakeFiles/Square.dir/main.c.obj: CMakeFiles/Square.dir/flags.make
CMakeFiles/Square.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Projekty Clion\Square\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Square.dir/main.c.obj"
	D:\MINGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Square.dir\main.c.obj   -c "D:\Projekty Clion\Square\main.c"

CMakeFiles/Square.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Square.dir/main.c.i"
	D:\MINGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Projekty Clion\Square\main.c" > CMakeFiles\Square.dir\main.c.i

CMakeFiles/Square.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Square.dir/main.c.s"
	D:\MINGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Projekty Clion\Square\main.c" -o CMakeFiles\Square.dir\main.c.s

# Object files for target Square
Square_OBJECTS = \
"CMakeFiles/Square.dir/main.c.obj"

# External object files for target Square
Square_EXTERNAL_OBJECTS =

Square.exe: CMakeFiles/Square.dir/main.c.obj
Square.exe: CMakeFiles/Square.dir/build.make
Square.exe: CMakeFiles/Square.dir/linklibs.rsp
Square.exe: CMakeFiles/Square.dir/objects1.rsp
Square.exe: CMakeFiles/Square.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Projekty Clion\Square\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Square.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Square.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Square.dir/build: Square.exe

.PHONY : CMakeFiles/Square.dir/build

CMakeFiles/Square.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Square.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Square.dir/clean

CMakeFiles/Square.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Projekty Clion\Square" "D:\Projekty Clion\Square" "D:\Projekty Clion\Square\cmake-build-debug" "D:\Projekty Clion\Square\cmake-build-debug" "D:\Projekty Clion\Square\cmake-build-debug\CMakeFiles\Square.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Square.dir/depend

