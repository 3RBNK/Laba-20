# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lenovo/Документы/prjct/clion/Laba-20

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/code.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/code.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/code.dir/flags.make

CMakeFiles/code.dir/main.c.o: CMakeFiles/code.dir/flags.make
CMakeFiles/code.dir/main.c.o: /home/lenovo/Документы/prjct/clion/Laba-20/main.c
CMakeFiles/code.dir/main.c.o: CMakeFiles/code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/code.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/code.dir/main.c.o -MF CMakeFiles/code.dir/main.c.o.d -o CMakeFiles/code.dir/main.c.o -c /home/lenovo/Документы/prjct/clion/Laba-20/main.c

CMakeFiles/code.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/code.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lenovo/Документы/prjct/clion/Laba-20/main.c > CMakeFiles/code.dir/main.c.i

CMakeFiles/code.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/code.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lenovo/Документы/prjct/clion/Laba-20/main.c -o CMakeFiles/code.dir/main.c.s

CMakeFiles/code.dir/data_structures/matrix/matrix.c.o: CMakeFiles/code.dir/flags.make
CMakeFiles/code.dir/data_structures/matrix/matrix.c.o: /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/matrix/matrix.c
CMakeFiles/code.dir/data_structures/matrix/matrix.c.o: CMakeFiles/code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/code.dir/data_structures/matrix/matrix.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/code.dir/data_structures/matrix/matrix.c.o -MF CMakeFiles/code.dir/data_structures/matrix/matrix.c.o.d -o CMakeFiles/code.dir/data_structures/matrix/matrix.c.o -c /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/matrix/matrix.c

CMakeFiles/code.dir/data_structures/matrix/matrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/code.dir/data_structures/matrix/matrix.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/matrix/matrix.c > CMakeFiles/code.dir/data_structures/matrix/matrix.c.i

CMakeFiles/code.dir/data_structures/matrix/matrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/code.dir/data_structures/matrix/matrix.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/matrix/matrix.c -o CMakeFiles/code.dir/data_structures/matrix/matrix.c.s

CMakeFiles/code.dir/data_structures/vector/vector.c.o: CMakeFiles/code.dir/flags.make
CMakeFiles/code.dir/data_structures/vector/vector.c.o: /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/vector/vector.c
CMakeFiles/code.dir/data_structures/vector/vector.c.o: CMakeFiles/code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/code.dir/data_structures/vector/vector.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/code.dir/data_structures/vector/vector.c.o -MF CMakeFiles/code.dir/data_structures/vector/vector.c.o.d -o CMakeFiles/code.dir/data_structures/vector/vector.c.o -c /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/vector/vector.c

CMakeFiles/code.dir/data_structures/vector/vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/code.dir/data_structures/vector/vector.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/vector/vector.c > CMakeFiles/code.dir/data_structures/vector/vector.c.i

CMakeFiles/code.dir/data_structures/vector/vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/code.dir/data_structures/vector/vector.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/vector/vector.c -o CMakeFiles/code.dir/data_structures/vector/vector.c.s

CMakeFiles/code.dir/data_structures/string/string_.c.o: CMakeFiles/code.dir/flags.make
CMakeFiles/code.dir/data_structures/string/string_.c.o: /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/string/string_.c
CMakeFiles/code.dir/data_structures/string/string_.c.o: CMakeFiles/code.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/code.dir/data_structures/string/string_.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/code.dir/data_structures/string/string_.c.o -MF CMakeFiles/code.dir/data_structures/string/string_.c.o.d -o CMakeFiles/code.dir/data_structures/string/string_.c.o -c /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/string/string_.c

CMakeFiles/code.dir/data_structures/string/string_.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/code.dir/data_structures/string/string_.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/string/string_.c > CMakeFiles/code.dir/data_structures/string/string_.c.i

CMakeFiles/code.dir/data_structures/string/string_.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/code.dir/data_structures/string/string_.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lenovo/Документы/prjct/clion/Laba-20/data_structures/string/string_.c -o CMakeFiles/code.dir/data_structures/string/string_.c.s

# Object files for target code
code_OBJECTS = \
"CMakeFiles/code.dir/main.c.o" \
"CMakeFiles/code.dir/data_structures/matrix/matrix.c.o" \
"CMakeFiles/code.dir/data_structures/vector/vector.c.o" \
"CMakeFiles/code.dir/data_structures/string/string_.c.o"

# External object files for target code
code_EXTERNAL_OBJECTS =

code: CMakeFiles/code.dir/main.c.o
code: CMakeFiles/code.dir/data_structures/matrix/matrix.c.o
code: CMakeFiles/code.dir/data_structures/vector/vector.c.o
code: CMakeFiles/code.dir/data_structures/string/string_.c.o
code: CMakeFiles/code.dir/build.make
code: CMakeFiles/code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable code"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/code.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/code.dir/build: code
.PHONY : CMakeFiles/code.dir/build

CMakeFiles/code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/code.dir/cmake_clean.cmake
.PHONY : CMakeFiles/code.dir/clean

CMakeFiles/code.dir/depend:
	cd /home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lenovo/Документы/prjct/clion/Laba-20 /home/lenovo/Документы/prjct/clion/Laba-20 /home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug /home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug /home/lenovo/Документы/prjct/clion/Laba-20/cmake-build-debug/CMakeFiles/code.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/code.dir/depend

