# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = D:\JetBrains\CLion2023.3\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = D:\JetBrains\CLion2023.3\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Alex\Desktop\A2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Alex\Desktop\A2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/a2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/a2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/a2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a2.dir/flags.make

CMakeFiles/a2.dir/main.cpp.obj: CMakeFiles/a2.dir/flags.make
CMakeFiles/a2.dir/main.cpp.obj: C:/Users/Alex/Desktop/A2/main.cpp
CMakeFiles/a2.dir/main.cpp.obj: CMakeFiles/a2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Alex\Desktop\A2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a2.dir/main.cpp.obj"
	D:\JetBrains\CLion2023.3\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a2.dir/main.cpp.obj -MF CMakeFiles\a2.dir\main.cpp.obj.d -o CMakeFiles\a2.dir\main.cpp.obj -c C:\Users\Alex\Desktop\A2\main.cpp

CMakeFiles/a2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a2.dir/main.cpp.i"
	D:\JetBrains\CLion2023.3\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Alex\Desktop\A2\main.cpp > CMakeFiles\a2.dir\main.cpp.i

CMakeFiles/a2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a2.dir/main.cpp.s"
	D:\JetBrains\CLion2023.3\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Alex\Desktop\A2\main.cpp -o CMakeFiles\a2.dir\main.cpp.s

CMakeFiles/a2.dir/array_generator.cpp.obj: CMakeFiles/a2.dir/flags.make
CMakeFiles/a2.dir/array_generator.cpp.obj: C:/Users/Alex/Desktop/A2/array_generator.cpp
CMakeFiles/a2.dir/array_generator.cpp.obj: CMakeFiles/a2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Alex\Desktop\A2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/a2.dir/array_generator.cpp.obj"
	D:\JetBrains\CLion2023.3\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a2.dir/array_generator.cpp.obj -MF CMakeFiles\a2.dir\array_generator.cpp.obj.d -o CMakeFiles\a2.dir\array_generator.cpp.obj -c C:\Users\Alex\Desktop\A2\array_generator.cpp

CMakeFiles/a2.dir/array_generator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a2.dir/array_generator.cpp.i"
	D:\JetBrains\CLion2023.3\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Alex\Desktop\A2\array_generator.cpp > CMakeFiles\a2.dir\array_generator.cpp.i

CMakeFiles/a2.dir/array_generator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a2.dir/array_generator.cpp.s"
	D:\JetBrains\CLion2023.3\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Alex\Desktop\A2\array_generator.cpp -o CMakeFiles\a2.dir\array_generator.cpp.s

CMakeFiles/a2.dir/sort_tester.cpp.obj: CMakeFiles/a2.dir/flags.make
CMakeFiles/a2.dir/sort_tester.cpp.obj: C:/Users/Alex/Desktop/A2/sort_tester.cpp
CMakeFiles/a2.dir/sort_tester.cpp.obj: CMakeFiles/a2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Alex\Desktop\A2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/a2.dir/sort_tester.cpp.obj"
	D:\JetBrains\CLion2023.3\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a2.dir/sort_tester.cpp.obj -MF CMakeFiles\a2.dir\sort_tester.cpp.obj.d -o CMakeFiles\a2.dir\sort_tester.cpp.obj -c C:\Users\Alex\Desktop\A2\sort_tester.cpp

CMakeFiles/a2.dir/sort_tester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a2.dir/sort_tester.cpp.i"
	D:\JetBrains\CLion2023.3\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Alex\Desktop\A2\sort_tester.cpp > CMakeFiles\a2.dir\sort_tester.cpp.i

CMakeFiles/a2.dir/sort_tester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a2.dir/sort_tester.cpp.s"
	D:\JetBrains\CLion2023.3\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Alex\Desktop\A2\sort_tester.cpp -o CMakeFiles\a2.dir\sort_tester.cpp.s

# Object files for target a2
a2_OBJECTS = \
"CMakeFiles/a2.dir/main.cpp.obj" \
"CMakeFiles/a2.dir/array_generator.cpp.obj" \
"CMakeFiles/a2.dir/sort_tester.cpp.obj"

# External object files for target a2
a2_EXTERNAL_OBJECTS =

a2.exe: CMakeFiles/a2.dir/main.cpp.obj
a2.exe: CMakeFiles/a2.dir/array_generator.cpp.obj
a2.exe: CMakeFiles/a2.dir/sort_tester.cpp.obj
a2.exe: CMakeFiles/a2.dir/build.make
a2.exe: CMakeFiles/a2.dir/linkLibs.rsp
a2.exe: CMakeFiles/a2.dir/objects1.rsp
a2.exe: CMakeFiles/a2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Alex\Desktop\A2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable a2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\a2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a2.dir/build: a2.exe
.PHONY : CMakeFiles/a2.dir/build

CMakeFiles/a2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\a2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/a2.dir/clean

CMakeFiles/a2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Alex\Desktop\A2 C:\Users\Alex\Desktop\A2 C:\Users\Alex\Desktop\A2\cmake-build-debug C:\Users\Alex\Desktop\A2\cmake-build-debug C:\Users\Alex\Desktop\A2\cmake-build-debug\CMakeFiles\a2.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/a2.dir/depend
