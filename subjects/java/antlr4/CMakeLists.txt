
cmake_minimum_required (VERSION 3.17.1)
project(g_java)

if(DEFINED ENV{ANTLR_RUNTIME})
        set(ANTLR_RUNTIME  $ENV{ANTLR_RUNTIME})
else()
   message(FATAL_ERROR "Please set ANTLR_RUNTIME to the location of the antlr c++ runtime")
endif()

add_custom_command(OUTPUT JavaLexer.cpp JavaParser.cpp
        COMMAND antlr4 JavaLexer.g4 JavaParser.g4 -Dlanguage=Cpp -no-listener -no-visitor
        DEPENDS JavaLexer.g4 JavaParser.g4)

add_executable(file_parser file_parser.cpp JavaLexer.cpp JavaParser.cpp)
target_include_directories(file_parser PUBLIC ${ANTLR_RUNTIME}/runtime/src/)
target_link_libraries(file_parser ${ANTLR_RUNTIME}/dist/libantlr4-runtime.a)
