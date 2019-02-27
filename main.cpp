#include <iostream>

int main()
{

// compiler flag
#ifdef _MSC_VER
    std::cout << "_MSC_VER defined. use Visual Studio" << std::endl;
#endif

#ifdef __GNUC__
    std::cout << "__GNUC__ defined. use gcc" << std::endl;
#endif

#ifdef __clang__
    std::cout << "__clang__ defined. use clang" << std::endl;
#endif

#ifdef __EMSCRIPTEN__
    std::cout << "__EMSCRIPTEN__  defined. use asm.js and webassembly" << std::endl;
#endif

#ifdef __MINGW32__
    std::cout << "__EMSCRIPTEN__  defined. use MinGW 32 , MinGW-w64 32bit " << std::endl;
#endif

#ifdef __MINGW64__
    std::cout << "__EMSCRIPTEN__  defined. use MinGW-w64 64bit  " << std::endl;
#endif

// platform flag

#ifdef _WIN32
    std::cout << "_WIN32 defined. use Windows" << std::endl;
#endif

#ifdef _WIN64
    std::cout << "_WIN64 defined. use Windows 64 bit" << std::endl;
#endif

#if defined(__linux__) && !defined(__ANDROID__)
    std::cout << "__linux__ defined and not defined __ANDROID__" << std::endl;
#endif

#ifdef __linux__
    std::cout << "__linux__ defined" << std::endl;
#endif

#ifdef __i386__
    std::cout << "__i386__ defined" << std::endl;
#endif

#ifdef __x86_64__
    std::cout << "__x86_64__ defined" << std::endl;
#endif

}