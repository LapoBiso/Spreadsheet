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
CMAKE_COMMAND = /home/lapo/Scrivania/clion-2020.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/lapo/Scrivania/clion-2020.1.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lapo/Scrivania/ProgettiClion/Spreadsheet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Spreadsheet.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Spreadsheet.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Spreadsheet.dir/flags.make

CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.o: CMakeFiles/Spreadsheet.dir/flags.make
CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.o: Spreadsheet_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/Spreadsheet_autogen/mocs_compilation.cpp

CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/Spreadsheet_autogen/mocs_compilation.cpp > CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.i

CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/Spreadsheet_autogen/mocs_compilation.cpp -o CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.s

CMakeFiles/Spreadsheet.dir/main.cpp.o: CMakeFiles/Spreadsheet.dir/flags.make
CMakeFiles/Spreadsheet.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Spreadsheet.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Spreadsheet.dir/main.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/main.cpp

CMakeFiles/Spreadsheet.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Spreadsheet.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/main.cpp > CMakeFiles/Spreadsheet.dir/main.cpp.i

CMakeFiles/Spreadsheet.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Spreadsheet.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/main.cpp -o CMakeFiles/Spreadsheet.dir/main.cpp.s

# Object files for target Spreadsheet
Spreadsheet_OBJECTS = \
"CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Spreadsheet.dir/main.cpp.o"

# External object files for target Spreadsheet
Spreadsheet_EXTERNAL_OBJECTS =

Spreadsheet: CMakeFiles/Spreadsheet.dir/Spreadsheet_autogen/mocs_compilation.cpp.o
Spreadsheet: CMakeFiles/Spreadsheet.dir/main.cpp.o
Spreadsheet: CMakeFiles/Spreadsheet.dir/build.make
Spreadsheet: libcore.a
Spreadsheet: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
Spreadsheet: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
Spreadsheet: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
Spreadsheet: CMakeFiles/Spreadsheet.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Spreadsheet"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Spreadsheet.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Spreadsheet.dir/build: Spreadsheet

.PHONY : CMakeFiles/Spreadsheet.dir/build

CMakeFiles/Spreadsheet.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Spreadsheet.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Spreadsheet.dir/clean

CMakeFiles/Spreadsheet.dir/depend:
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lapo/Scrivania/ProgettiClion/Spreadsheet /home/lapo/Scrivania/ProgettiClion/Spreadsheet /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles/Spreadsheet.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Spreadsheet.dir/depend

