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
include test/CMakeFiles/RunAllTests.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/RunAllTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/RunAllTests.dir/flags.make

test/CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.o: test/CMakeFiles/RunAllTests.dir/flags.make
test/CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.o: test/RunAllTests_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.o"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test/RunAllTests_autogen/mocs_compilation.cpp

test/CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.i"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test/RunAllTests_autogen/mocs_compilation.cpp > CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.i

test/CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.s"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test/RunAllTests_autogen/mocs_compilation.cpp -o CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.s

test/CMakeFiles/RunAllTests.dir/RunAllTests.cpp.o: test/CMakeFiles/RunAllTests.dir/flags.make
test/CMakeFiles/RunAllTests.dir/RunAllTests.cpp.o: ../test/RunAllTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/RunAllTests.dir/RunAllTests.cpp.o"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/RunAllTests.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/RunAllTests.cpp

test/CMakeFiles/RunAllTests.dir/RunAllTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/RunAllTests.cpp.i"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/RunAllTests.cpp > CMakeFiles/RunAllTests.dir/RunAllTests.cpp.i

test/CMakeFiles/RunAllTests.dir/RunAllTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/RunAllTests.cpp.s"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/RunAllTests.cpp -o CMakeFiles/RunAllTests.dir/RunAllTests.cpp.s

test/CMakeFiles/RunAllTests.dir/ModelTests.cpp.o: test/CMakeFiles/RunAllTests.dir/flags.make
test/CMakeFiles/RunAllTests.dir/ModelTests.cpp.o: ../test/ModelTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object test/CMakeFiles/RunAllTests.dir/ModelTests.cpp.o"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/ModelTests.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/ModelTests.cpp

test/CMakeFiles/RunAllTests.dir/ModelTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/ModelTests.cpp.i"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/ModelTests.cpp > CMakeFiles/RunAllTests.dir/ModelTests.cpp.i

test/CMakeFiles/RunAllTests.dir/ModelTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/ModelTests.cpp.s"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/ModelTests.cpp -o CMakeFiles/RunAllTests.dir/ModelTests.cpp.s

test/CMakeFiles/RunAllTests.dir/SumTests.cpp.o: test/CMakeFiles/RunAllTests.dir/flags.make
test/CMakeFiles/RunAllTests.dir/SumTests.cpp.o: ../test/SumTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object test/CMakeFiles/RunAllTests.dir/SumTests.cpp.o"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/SumTests.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/SumTests.cpp

test/CMakeFiles/RunAllTests.dir/SumTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/SumTests.cpp.i"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/SumTests.cpp > CMakeFiles/RunAllTests.dir/SumTests.cpp.i

test/CMakeFiles/RunAllTests.dir/SumTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/SumTests.cpp.s"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/SumTests.cpp -o CMakeFiles/RunAllTests.dir/SumTests.cpp.s

test/CMakeFiles/RunAllTests.dir/MeanTests.cpp.o: test/CMakeFiles/RunAllTests.dir/flags.make
test/CMakeFiles/RunAllTests.dir/MeanTests.cpp.o: ../test/MeanTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object test/CMakeFiles/RunAllTests.dir/MeanTests.cpp.o"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/MeanTests.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/MeanTests.cpp

test/CMakeFiles/RunAllTests.dir/MeanTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/MeanTests.cpp.i"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/MeanTests.cpp > CMakeFiles/RunAllTests.dir/MeanTests.cpp.i

test/CMakeFiles/RunAllTests.dir/MeanTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/MeanTests.cpp.s"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/MeanTests.cpp -o CMakeFiles/RunAllTests.dir/MeanTests.cpp.s

test/CMakeFiles/RunAllTests.dir/MaxTests.cpp.o: test/CMakeFiles/RunAllTests.dir/flags.make
test/CMakeFiles/RunAllTests.dir/MaxTests.cpp.o: ../test/MaxTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object test/CMakeFiles/RunAllTests.dir/MaxTests.cpp.o"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/MaxTests.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/MaxTests.cpp

test/CMakeFiles/RunAllTests.dir/MaxTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/MaxTests.cpp.i"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/MaxTests.cpp > CMakeFiles/RunAllTests.dir/MaxTests.cpp.i

test/CMakeFiles/RunAllTests.dir/MaxTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/MaxTests.cpp.s"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/MaxTests.cpp -o CMakeFiles/RunAllTests.dir/MaxTests.cpp.s

test/CMakeFiles/RunAllTests.dir/MinTests.cpp.o: test/CMakeFiles/RunAllTests.dir/flags.make
test/CMakeFiles/RunAllTests.dir/MinTests.cpp.o: ../test/MinTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object test/CMakeFiles/RunAllTests.dir/MinTests.cpp.o"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/MinTests.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/MinTests.cpp

test/CMakeFiles/RunAllTests.dir/MinTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/MinTests.cpp.i"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/MinTests.cpp > CMakeFiles/RunAllTests.dir/MinTests.cpp.i

test/CMakeFiles/RunAllTests.dir/MinTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/MinTests.cpp.s"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/MinTests.cpp -o CMakeFiles/RunAllTests.dir/MinTests.cpp.s

test/CMakeFiles/RunAllTests.dir/ResultTests.cpp.o: test/CMakeFiles/RunAllTests.dir/flags.make
test/CMakeFiles/RunAllTests.dir/ResultTests.cpp.o: ../test/ResultTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object test/CMakeFiles/RunAllTests.dir/ResultTests.cpp.o"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RunAllTests.dir/ResultTests.cpp.o -c /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/ResultTests.cpp

test/CMakeFiles/RunAllTests.dir/ResultTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RunAllTests.dir/ResultTests.cpp.i"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/ResultTests.cpp > CMakeFiles/RunAllTests.dir/ResultTests.cpp.i

test/CMakeFiles/RunAllTests.dir/ResultTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RunAllTests.dir/ResultTests.cpp.s"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/ResultTests.cpp -o CMakeFiles/RunAllTests.dir/ResultTests.cpp.s

# Object files for target RunAllTests
RunAllTests_OBJECTS = \
"CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/RunAllTests.dir/RunAllTests.cpp.o" \
"CMakeFiles/RunAllTests.dir/ModelTests.cpp.o" \
"CMakeFiles/RunAllTests.dir/SumTests.cpp.o" \
"CMakeFiles/RunAllTests.dir/MeanTests.cpp.o" \
"CMakeFiles/RunAllTests.dir/MaxTests.cpp.o" \
"CMakeFiles/RunAllTests.dir/MinTests.cpp.o" \
"CMakeFiles/RunAllTests.dir/ResultTests.cpp.o"

# External object files for target RunAllTests
RunAllTests_EXTERNAL_OBJECTS =

test/RunAllTests: test/CMakeFiles/RunAllTests.dir/RunAllTests_autogen/mocs_compilation.cpp.o
test/RunAllTests: test/CMakeFiles/RunAllTests.dir/RunAllTests.cpp.o
test/RunAllTests: test/CMakeFiles/RunAllTests.dir/ModelTests.cpp.o
test/RunAllTests: test/CMakeFiles/RunAllTests.dir/SumTests.cpp.o
test/RunAllTests: test/CMakeFiles/RunAllTests.dir/MeanTests.cpp.o
test/RunAllTests: test/CMakeFiles/RunAllTests.dir/MaxTests.cpp.o
test/RunAllTests: test/CMakeFiles/RunAllTests.dir/MinTests.cpp.o
test/RunAllTests: test/CMakeFiles/RunAllTests.dir/ResultTests.cpp.o
test/RunAllTests: test/CMakeFiles/RunAllTests.dir/build.make
test/RunAllTests: lib/libgtestd.a
test/RunAllTests: lib/libgtest_maind.a
test/RunAllTests: libcore.a
test/RunAllTests: lib/libgtestd.a
test/RunAllTests: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
test/RunAllTests: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
test/RunAllTests: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
test/RunAllTests: test/CMakeFiles/RunAllTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable RunAllTests"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RunAllTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/RunAllTests.dir/build: test/RunAllTests

.PHONY : test/CMakeFiles/RunAllTests.dir/build

test/CMakeFiles/RunAllTests.dir/clean:
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/RunAllTests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/RunAllTests.dir/clean

test/CMakeFiles/RunAllTests.dir/depend:
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lapo/Scrivania/ProgettiClion/Spreadsheet /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test/CMakeFiles/RunAllTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/RunAllTests.dir/depend

