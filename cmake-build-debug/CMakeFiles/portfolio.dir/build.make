# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\yashs\Desktop\portfolio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\yashs\Desktop\portfolio\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\portfolio.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\portfolio.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\portfolio.dir\flags.make

CMakeFiles\portfolio.dir\src\helpers\details.cpp.obj: CMakeFiles\portfolio.dir\flags.make
CMakeFiles\portfolio.dir\src\helpers\details.cpp.obj: ..\src\helpers\details.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\yashs\Desktop\portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/portfolio.dir/src/helpers/details.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\portfolio.dir\src\helpers\details.cpp.obj /FdCMakeFiles\portfolio.dir\ /FS -c C:\Users\yashs\Desktop\portfolio\src\helpers\details.cpp
<<

CMakeFiles\portfolio.dir\src\helpers\details.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/portfolio.dir/src/helpers/details.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\portfolio.dir\src\helpers\details.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\yashs\Desktop\portfolio\src\helpers\details.cpp
<<

CMakeFiles\portfolio.dir\src\helpers\details.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/portfolio.dir/src/helpers/details.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\portfolio.dir\src\helpers\details.cpp.s /c C:\Users\yashs\Desktop\portfolio\src\helpers\details.cpp
<<

# Object files for target portfolio
portfolio_OBJECTS = \
"CMakeFiles\portfolio.dir\src\helpers\details.cpp.obj"

# External object files for target portfolio
portfolio_EXTERNAL_OBJECTS =

portfolio.exe: CMakeFiles\portfolio.dir\src\helpers\details.cpp.obj
portfolio.exe: CMakeFiles\portfolio.dir\build.make
portfolio.exe: CMakeFiles\portfolio.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\yashs\Desktop\portfolio\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable portfolio.exe"
	"C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\portfolio.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\portfolio.dir\objects1.rsp @<<
 /out:portfolio.exe /implib:portfolio.lib /pdb:C:\Users\yashs\Desktop\portfolio\cmake-build-debug\portfolio.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\portfolio.dir\build: portfolio.exe

.PHONY : CMakeFiles\portfolio.dir\build

CMakeFiles\portfolio.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\portfolio.dir\cmake_clean.cmake
.PHONY : CMakeFiles\portfolio.dir\clean

CMakeFiles\portfolio.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\yashs\Desktop\portfolio C:\Users\yashs\Desktop\portfolio C:\Users\yashs\Desktop\portfolio\cmake-build-debug C:\Users\yashs\Desktop\portfolio\cmake-build-debug C:\Users\yashs\Desktop\portfolio\cmake-build-debug\CMakeFiles\portfolio.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\portfolio.dir\depend
