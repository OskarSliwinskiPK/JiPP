# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "D:/Program Files/cmake-3.19.0-win64-x64/bin/cmake.exe"

# The command to remove a file.
RM = "D:/Program Files/cmake-3.19.0-win64-x64/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:/Politechnika Studia/JiPP/Logger"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:/Politechnika Studia/JiPP/Logger/build"

# Include any dependencies generated for this target.
include CMakeFiles/logger.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/logger.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/logger.dir/flags.make

CMakeFiles/logger.dir/src/main.cpp.obj: CMakeFiles/logger.dir/flags.make
CMakeFiles/logger.dir/src/main.cpp.obj: CMakeFiles/logger.dir/includes_CXX.rsp
CMakeFiles/logger.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:/Politechnika Studia/JiPP/Logger/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/logger.dir/src/main.cpp.obj"
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/logger.dir/src/main.cpp.obj -c "D:/Politechnika Studia/JiPP/Logger/src/main.cpp"

CMakeFiles/logger.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/logger.dir/src/main.cpp.i"
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:/Politechnika Studia/JiPP/Logger/src/main.cpp" > CMakeFiles/logger.dir/src/main.cpp.i

CMakeFiles/logger.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/logger.dir/src/main.cpp.s"
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:/Politechnika Studia/JiPP/Logger/src/main.cpp" -o CMakeFiles/logger.dir/src/main.cpp.s

CMakeFiles/logger.dir/src/Log.cpp.obj: CMakeFiles/logger.dir/flags.make
CMakeFiles/logger.dir/src/Log.cpp.obj: CMakeFiles/logger.dir/includes_CXX.rsp
CMakeFiles/logger.dir/src/Log.cpp.obj: ../src/Log.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:/Politechnika Studia/JiPP/Logger/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/logger.dir/src/Log.cpp.obj"
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/logger.dir/src/Log.cpp.obj -c "D:/Politechnika Studia/JiPP/Logger/src/Log.cpp"

CMakeFiles/logger.dir/src/Log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/logger.dir/src/Log.cpp.i"
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:/Politechnika Studia/JiPP/Logger/src/Log.cpp" > CMakeFiles/logger.dir/src/Log.cpp.i

CMakeFiles/logger.dir/src/Log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/logger.dir/src/Log.cpp.s"
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:/Politechnika Studia/JiPP/Logger/src/Log.cpp" -o CMakeFiles/logger.dir/src/Log.cpp.s

CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.obj: CMakeFiles/logger.dir/flags.make
CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.obj: CMakeFiles/logger.dir/includes_C.rsp
CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.obj: ../libs/sqlite3/sqlite3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:/Politechnika Studia/JiPP/Logger/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.obj"
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.obj -c "D:/Politechnika Studia/JiPP/Logger/libs/sqlite3/sqlite3.c"

CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.i"
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:/Politechnika Studia/JiPP/Logger/libs/sqlite3/sqlite3.c" > CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.i

CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.s"
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:/Politechnika Studia/JiPP/Logger/libs/sqlite3/sqlite3.c" -o CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.s

# Object files for target logger
logger_OBJECTS = \
"CMakeFiles/logger.dir/src/main.cpp.obj" \
"CMakeFiles/logger.dir/src/Log.cpp.obj" \
"CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.obj"

# External object files for target logger
logger_EXTERNAL_OBJECTS =

logger.exe: CMakeFiles/logger.dir/src/main.cpp.obj
logger.exe: CMakeFiles/logger.dir/src/Log.cpp.obj
logger.exe: CMakeFiles/logger.dir/libs/sqlite3/sqlite3.c.obj
logger.exe: CMakeFiles/logger.dir/build.make
logger.exe: CMakeFiles/logger.dir/linklibs.rsp
logger.exe: CMakeFiles/logger.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:/Politechnika Studia/JiPP/Logger/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable logger.exe"
	"D:/Program Files/cmake-3.19.0-win64-x64/bin/cmake.exe" -E rm -f CMakeFiles/logger.dir/objects.a
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/ar.exe" cr CMakeFiles/logger.dir/objects.a @CMakeFiles/logger.dir/objects1.rsp
	"D:/Program Files/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe" -g -Wl,--whole-archive CMakeFiles/logger.dir/objects.a -Wl,--no-whole-archive -o logger.exe -Wl,--out-implib,liblogger.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/logger.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/logger.dir/build: logger.exe

.PHONY : CMakeFiles/logger.dir/build

CMakeFiles/logger.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/logger.dir/cmake_clean.cmake
.PHONY : CMakeFiles/logger.dir/clean

CMakeFiles/logger.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "D:/Politechnika Studia/JiPP/Logger" "D:/Politechnika Studia/JiPP/Logger" "D:/Politechnika Studia/JiPP/Logger/build" "D:/Politechnika Studia/JiPP/Logger/build" "D:/Politechnika Studia/JiPP/Logger/build/CMakeFiles/logger.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/logger.dir/depend

