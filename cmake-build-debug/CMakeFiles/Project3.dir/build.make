# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Project3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Project3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Project3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project3.dir/flags.make

CMakeFiles/Project3.dir/main.cpp.obj: CMakeFiles/Project3.dir/flags.make
CMakeFiles/Project3.dir/main.cpp.obj: ../main.cpp
CMakeFiles/Project3.dir/main.cpp.obj: CMakeFiles/Project3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project3.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project3.dir/main.cpp.obj -MF CMakeFiles\Project3.dir\main.cpp.obj.d -o CMakeFiles\Project3.dir\main.cpp.obj -c "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\main.cpp"

CMakeFiles/Project3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project3.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\main.cpp" > CMakeFiles\Project3.dir\main.cpp.i

CMakeFiles/Project3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project3.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\main.cpp" -o CMakeFiles\Project3.dir\main.cpp.s

CMakeFiles/Project3.dir/Trie_Standard.cpp.obj: CMakeFiles/Project3.dir/flags.make
CMakeFiles/Project3.dir/Trie_Standard.cpp.obj: ../Trie_Standard.cpp
CMakeFiles/Project3.dir/Trie_Standard.cpp.obj: CMakeFiles/Project3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project3.dir/Trie_Standard.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project3.dir/Trie_Standard.cpp.obj -MF CMakeFiles\Project3.dir\Trie_Standard.cpp.obj.d -o CMakeFiles\Project3.dir\Trie_Standard.cpp.obj -c "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\Trie_Standard.cpp"

CMakeFiles/Project3.dir/Trie_Standard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project3.dir/Trie_Standard.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\Trie_Standard.cpp" > CMakeFiles\Project3.dir\Trie_Standard.cpp.i

CMakeFiles/Project3.dir/Trie_Standard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project3.dir/Trie_Standard.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\Trie_Standard.cpp" -o CMakeFiles\Project3.dir\Trie_Standard.cpp.s

CMakeFiles/Project3.dir/Trie_BST.cpp.obj: CMakeFiles/Project3.dir/flags.make
CMakeFiles/Project3.dir/Trie_BST.cpp.obj: ../Trie_BST.cpp
CMakeFiles/Project3.dir/Trie_BST.cpp.obj: CMakeFiles/Project3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project3.dir/Trie_BST.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project3.dir/Trie_BST.cpp.obj -MF CMakeFiles\Project3.dir\Trie_BST.cpp.obj.d -o CMakeFiles\Project3.dir\Trie_BST.cpp.obj -c "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\Trie_BST.cpp"

CMakeFiles/Project3.dir/Trie_BST.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project3.dir/Trie_BST.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\Trie_BST.cpp" > CMakeFiles\Project3.dir\Trie_BST.cpp.i

CMakeFiles/Project3.dir/Trie_BST.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project3.dir/Trie_BST.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\Trie_BST.cpp" -o CMakeFiles\Project3.dir\Trie_BST.cpp.s

# Object files for target Project3
Project3_OBJECTS = \
"CMakeFiles/Project3.dir/main.cpp.obj" \
"CMakeFiles/Project3.dir/Trie_Standard.cpp.obj" \
"CMakeFiles/Project3.dir/Trie_BST.cpp.obj"

# External object files for target Project3
Project3_EXTERNAL_OBJECTS =

Project3.exe: CMakeFiles/Project3.dir/main.cpp.obj
Project3.exe: CMakeFiles/Project3.dir/Trie_Standard.cpp.obj
Project3.exe: CMakeFiles/Project3.dir/Trie_BST.cpp.obj
Project3.exe: CMakeFiles/Project3.dir/build.make
Project3.exe: CMakeFiles/Project3.dir/linklibs.rsp
Project3.exe: CMakeFiles/Project3.dir/objects1.rsp
Project3.exe: CMakeFiles/Project3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Project3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project3.dir/build: Project3.exe
.PHONY : CMakeFiles/Project3.dir/build

CMakeFiles/Project3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project3.dir/clean

CMakeFiles/Project3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b" "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b" "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\cmake-build-debug" "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\cmake-build-debug" "C:\Code\cs 415\Project3b-main\Project3b-main\Project3b\cmake-build-debug\CMakeFiles\Project3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Project3.dir/depend

