# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/dale/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/dale/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dale/Documents/PSS_2/HW2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dale/Documents/PSS_2/HW2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW2.dir/flags.make

CMakeFiles/HW2.dir/main.cpp.o: CMakeFiles/HW2.dir/flags.make
CMakeFiles/HW2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dale/Documents/PSS_2/HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW2.dir/main.cpp.o -c /home/dale/Documents/PSS_2/HW2/main.cpp

CMakeFiles/HW2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dale/Documents/PSS_2/HW2/main.cpp > CMakeFiles/HW2.dir/main.cpp.i

CMakeFiles/HW2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dale/Documents/PSS_2/HW2/main.cpp -o CMakeFiles/HW2.dir/main.cpp.s

CMakeFiles/HW2.dir/persons.cpp.o: CMakeFiles/HW2.dir/flags.make
CMakeFiles/HW2.dir/persons.cpp.o: ../persons.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dale/Documents/PSS_2/HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HW2.dir/persons.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW2.dir/persons.cpp.o -c /home/dale/Documents/PSS_2/HW2/persons.cpp

CMakeFiles/HW2.dir/persons.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW2.dir/persons.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dale/Documents/PSS_2/HW2/persons.cpp > CMakeFiles/HW2.dir/persons.cpp.i

CMakeFiles/HW2.dir/persons.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW2.dir/persons.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dale/Documents/PSS_2/HW2/persons.cpp -o CMakeFiles/HW2.dir/persons.cpp.s

CMakeFiles/HW2.dir/rooms.cpp.o: CMakeFiles/HW2.dir/flags.make
CMakeFiles/HW2.dir/rooms.cpp.o: ../rooms.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dale/Documents/PSS_2/HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HW2.dir/rooms.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW2.dir/rooms.cpp.o -c /home/dale/Documents/PSS_2/HW2/rooms.cpp

CMakeFiles/HW2.dir/rooms.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW2.dir/rooms.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dale/Documents/PSS_2/HW2/rooms.cpp > CMakeFiles/HW2.dir/rooms.cpp.i

CMakeFiles/HW2.dir/rooms.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW2.dir/rooms.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dale/Documents/PSS_2/HW2/rooms.cpp -o CMakeFiles/HW2.dir/rooms.cpp.s

CMakeFiles/HW2.dir/generator.cpp.o: CMakeFiles/HW2.dir/flags.make
CMakeFiles/HW2.dir/generator.cpp.o: ../generator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dale/Documents/PSS_2/HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/HW2.dir/generator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW2.dir/generator.cpp.o -c /home/dale/Documents/PSS_2/HW2/generator.cpp

CMakeFiles/HW2.dir/generator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW2.dir/generator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dale/Documents/PSS_2/HW2/generator.cpp > CMakeFiles/HW2.dir/generator.cpp.i

CMakeFiles/HW2.dir/generator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW2.dir/generator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dale/Documents/PSS_2/HW2/generator.cpp -o CMakeFiles/HW2.dir/generator.cpp.s

# Object files for target HW2
HW2_OBJECTS = \
"CMakeFiles/HW2.dir/main.cpp.o" \
"CMakeFiles/HW2.dir/persons.cpp.o" \
"CMakeFiles/HW2.dir/rooms.cpp.o" \
"CMakeFiles/HW2.dir/generator.cpp.o"

# External object files for target HW2
HW2_EXTERNAL_OBJECTS =

HW2: CMakeFiles/HW2.dir/main.cpp.o
HW2: CMakeFiles/HW2.dir/persons.cpp.o
HW2: CMakeFiles/HW2.dir/rooms.cpp.o
HW2: CMakeFiles/HW2.dir/generator.cpp.o
HW2: CMakeFiles/HW2.dir/build.make
HW2: CMakeFiles/HW2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dale/Documents/PSS_2/HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable HW2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HW2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW2.dir/build: HW2

.PHONY : CMakeFiles/HW2.dir/build

CMakeFiles/HW2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HW2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HW2.dir/clean

CMakeFiles/HW2.dir/depend:
	cd /home/dale/Documents/PSS_2/HW2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dale/Documents/PSS_2/HW2 /home/dale/Documents/PSS_2/HW2 /home/dale/Documents/PSS_2/HW2/cmake-build-debug /home/dale/Documents/PSS_2/HW2/cmake-build-debug /home/dale/Documents/PSS_2/HW2/cmake-build-debug/CMakeFiles/HW2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW2.dir/depend

