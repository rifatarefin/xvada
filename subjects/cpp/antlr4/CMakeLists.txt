
cmake_minimum_required (VERSION 3.17.1)
project(g_cpp)

if(DEFINED ENV{ANTLR_RUNTIME})
        set(ANTLR_RUNTIME  $ENV{ANTLR_RUNTIME})
else()
   message(FATAL_ERROR "Please set ANTLR_RUNTIME to the location of the antlr c++ runtime")
endif()

add_custom_command(OUTPUT CPP14Lexer.cpp CPP14Parser.cpp
        COMMAND antlr4 CPP14Lexer.g4 CPP14Parser.g4 -Dlanguage=Cpp -no-listener -no-visitor
        DEPENDS CPP14Lexer.g4 CPP14Parser.g4)

add_executable(file_parser file_parser.cpp CPP14Lexer.cpp CPP14Parser.cpp CPP14ParserBase.cpp)
target_include_directories(file_parser PUBLIC ${ANTLR_RUNTIME}/runtime/src/)
target_link_libraries(file_parser ${ANTLR_RUNTIME}/dist/libantlr4-runtime.a)
