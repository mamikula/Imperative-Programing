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
CMAKE_SOURCE_DIR = "D:\Projekty Clion\Bankomaty"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Projekty Clion\Bankomaty\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Bankomaty.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bankomaty.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bankomaty.dir/flags.make

CMakeFiles/Bankomaty.dir/main.c.obj: CMakeFiles/Bankomaty.dir/flags.make
CMakeFiles/Bankomaty.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Projekty Clion\Bankomaty\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Bankomaty.dir/main.c.obj"
	D:\MINGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Bankomaty.dir\main.c.obj   -c "D:\Projekty Clion\Bankomaty\main.c"

CMakeFiles/Bankomaty.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bankomaty.dir/main.c.i"
	D:\MINGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Projekty Clion\Bankomaty\main.c" > CMakeFiles\Bankomaty.dir\main.c.i

CMakeFiles/Bankomaty.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bankomaty.dir/main.c.s"
	D:\MINGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Projekty Clion\Bankomaty\main.c" -o CMakeFiles\Bankomaty.dir\main.c.s

# Object files for target Bankomaty
Bankomaty_OBJECTS = \
"CMakeFiles/Bankomaty.dir/main.c.obj"

# External object files for target Bankomaty
Bankomaty_EXTERNAL_OBJECTS =

Bankomaty.exe: CMakeFiles/Bankomaty.dir/main.c.obj
Bankomaty.exe: CMakeFiles/Bankomaty.dir/build.make
Bankomaty.exe: CMakeFiles/Bankomaty.dir/linklibs.rsp
Bankomaty.exe: CMakeFiles/Bankomaty.dir/objects1.rsp
Bankomaty.exe: CMakeFiles/Bankomaty.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Projekty Clion\Bankomaty\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Bankomaty.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Bankomaty.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bankomaty.dir/build: Bankomaty.exe

.PHONY : CMakeFiles/Bankomaty.dir/build

CMakeFiles/Bankomaty.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Bankomaty.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Bankomaty.dir/clean

CMakeFiles/Bankomaty.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Projekty Clion\Bankomaty" "D:\Projekty Clion\Bankomaty" "D:\Projekty Clion\Bankomaty\cmake-build-debug" "D:\Projekty Clion\Bankomaty\cmake-build-debug" "D:\Projekty Clion\Bankomaty\cmake-build-debug\CMakeFiles\Bankomaty.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Bankomaty.dir/depend

