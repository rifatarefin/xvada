
// Generated from minic.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  minicLexer : public antlr4::Lexer {
public:
  enum {
    IF = 1, ELSE = 2, WHILE = 3, DO = 4, INT_T = 5, FLOAT_T = 6, BOOL_T = 7, 
    CHAR_T = 8, VOID_T = 9, LPAREN = 10, RPAREN = 11, LBRACE = 12, RBRACE = 13, 
    SEMI = 14, COMMA = 15, ASSIGN = 16, PLUS = 17, MINUS = 18, LT = 19, 
    IDENT = 20, NUM = 21
  };

  explicit minicLexer(antlr4::CharStream *input);

  ~minicLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

