# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/beloin/clion-2021.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/beloin/clion-2021.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/beloin/Documents/aulas/SEMB/polinomial_regression

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/polinomial_regression.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/polinomial_regression.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/polinomial_regression.dir/flags.make

CMakeFiles/polinomial_regression.dir/main.c.o: CMakeFiles/polinomial_regression.dir/flags.make
CMakeFiles/polinomial_regression.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/polinomial_regression.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/polinomial_regression.dir/main.c.o -c /home/beloin/Documents/aulas/SEMB/polinomial_regression/main.c

CMakeFiles/polinomial_regression.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/polinomial_regression.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/beloin/Documents/aulas/SEMB/polinomial_regression/main.c > CMakeFiles/polinomial_regression.dir/main.c.i

CMakeFiles/polinomial_regression.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/polinomial_regression.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/beloin/Documents/aulas/SEMB/polinomial_regression/main.c -o CMakeFiles/polinomial_regression.dir/main.c.s

CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.o: CMakeFiles/polinomial_regression.dir/flags.make
CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.o: ../src/gauss/gauss_method.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.o -c /home/beloin/Documents/aulas/SEMB/polinomial_regression/src/gauss/gauss_method.c

CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/beloin/Documents/aulas/SEMB/polinomial_regression/src/gauss/gauss_method.c > CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.i

CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/beloin/Documents/aulas/SEMB/polinomial_regression/src/gauss/gauss_method.c -o CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.s

CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.o: CMakeFiles/polinomial_regression.dir/flags.make
CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.o: ../src/simple_polynomial_regression/simple_polynomial_regression.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.o -c /home/beloin/Documents/aulas/SEMB/polinomial_regression/src/simple_polynomial_regression/simple_polynomial_regression.c

CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/beloin/Documents/aulas/SEMB/polinomial_regression/src/simple_polynomial_regression/simple_polynomial_regression.c > CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.i

CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/beloin/Documents/aulas/SEMB/polinomial_regression/src/simple_polynomial_regression/simple_polynomial_regression.c -o CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.s

CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.o: CMakeFiles/polinomial_regression.dir/flags.make
CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.o: ../src/simple_polynomial_regression/poly_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.o -c /home/beloin/Documents/aulas/SEMB/polinomial_regression/src/simple_polynomial_regression/poly_utils.c

CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/beloin/Documents/aulas/SEMB/polinomial_regression/src/simple_polynomial_regression/poly_utils.c > CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.i

CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/beloin/Documents/aulas/SEMB/polinomial_regression/src/simple_polynomial_regression/poly_utils.c -o CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.s

# Object files for target polinomial_regression
polinomial_regression_OBJECTS = \
"CMakeFiles/polinomial_regression.dir/main.c.o" \
"CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.o" \
"CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.o" \
"CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.o"

# External object files for target polinomial_regression
polinomial_regression_EXTERNAL_OBJECTS =

polinomial_regression: CMakeFiles/polinomial_regression.dir/main.c.o
polinomial_regression: CMakeFiles/polinomial_regression.dir/src/gauss/gauss_method.c.o
polinomial_regression: CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/simple_polynomial_regression.c.o
polinomial_regression: CMakeFiles/polinomial_regression.dir/src/simple_polynomial_regression/poly_utils.c.o
polinomial_regression: CMakeFiles/polinomial_regression.dir/build.make
polinomial_regression: CMakeFiles/polinomial_regression.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable polinomial_regression"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/polinomial_regression.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/polinomial_regression.dir/build: polinomial_regression
.PHONY : CMakeFiles/polinomial_regression.dir/build

CMakeFiles/polinomial_regression.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/polinomial_regression.dir/cmake_clean.cmake
.PHONY : CMakeFiles/polinomial_regression.dir/clean

CMakeFiles/polinomial_regression.dir/depend:
	cd /home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/beloin/Documents/aulas/SEMB/polinomial_regression /home/beloin/Documents/aulas/SEMB/polinomial_regression /home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug /home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug /home/beloin/Documents/aulas/SEMB/polinomial_regression/cmake-build-debug/CMakeFiles/polinomial_regression.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/polinomial_regression.dir/depend

