# - Build sub-script for the MPAGSCipher library

# - Declare the build the static MPAGSCipher library
add_library(MPAGSCipher STATIC
    CipherMode.hpp
    CaesarCipher.hpp
    CaesarCipher.cpp
    TransformChar.hpp
    TransformChar.cpp
    ProcessCommandLine.cpp
    ProcessCommandLine.hpp
)

target_include_directories(MPAGSCipher
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)

target_compile_features(MPAGSCipher
    PUBLIC cxx_auto_type cxx_range_for cxx_uniform_initialization
)