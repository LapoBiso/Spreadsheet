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

# Utility rule file for gtest_main_autogen.

# Include the progress variables for this target.
include test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/progress.make

test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target gtest_main"
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test/lib/googletest-master/googletest && /home/lapo/Scrivania/clion-2020.1.2/bin/cmake/linux/bin/cmake -E cmake_autogen /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/AutogenInfo.json Debug

gtest_main_autogen: test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen
gtest_main_autogen: test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/build.make

.PHONY : gtest_main_autogen

# Rule to build all files generated by this target.
test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/build: gtest_main_autogen

.PHONY : test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/build

test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/clean:
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test/lib/googletest-master/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main_autogen.dir/cmake_clean.cmake
.PHONY : test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/clean

test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/depend:
	cd /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lapo/Scrivania/ProgettiClion/Spreadsheet /home/lapo/Scrivania/ProgettiClion/Spreadsheet/test/lib/googletest-master/googletest /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test/lib/googletest-master/googletest /home/lapo/Scrivania/ProgettiClion/Spreadsheet/cmake-build-debug/test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/lib/googletest-master/googletest/CMakeFiles/gtest_main_autogen.dir/depend

