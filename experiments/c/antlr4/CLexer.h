
// Generated from C.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  CLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    Auto = 15, Break = 16, Case = 17, Char = 18, Const = 19, Continue = 20, 
    Default = 21, Do = 22, Double = 23, Else = 24, Enum = 25, Extern = 26, 
    Float = 27, For = 28, Goto = 29, If = 30, Inline = 31, Int = 32, Long = 33, 
    Register = 34, Restrict = 35, Return = 36, Short = 37, Signed = 38, 
    Sizeof = 39, Static = 40, Struct = 41, Switch = 42, Typedef = 43, Union = 44, 
    Unsigned = 45, Void = 46, Volatile = 47, While = 48, Alignas = 49, Alignof = 50, 
    Atomic = 51, Bool = 52, Complex = 53, Generic = 54, Imaginary = 55, 
    Noreturn = 56, StaticAssert = 57, ThreadLocal = 58, LeftParen = 59, 
    RightParen = 60, LeftBracket = 61, RightBracket = 62, LeftBrace = 63, 
    RightBrace = 64, Less = 65, LessEqual = 66, Greater = 67, GreaterEqual = 68, 
    LeftShift = 69, RightShift = 70, Plus = 71, PlusPlus = 72, Minus = 73, 
    MinusMinus = 74, Star = 75, Div = 76, Mod = 77, And = 78, Or = 79, AndAnd = 80, 
    OrOr = 81, Caret = 82, Not = 83, Tilde = 84, Question = 85, Colon = 86, 
    Semi = 87, Comma = 88, Assign = 89, StarAssign = 90, DivAssign = 91, 
    ModAssign = 92, PlusAssign = 93, MinusAssign = 94, LeftShiftAssign = 95, 
    RightShiftAssign = 96, AndAssign = 97, XorAssign = 98, OrAssign = 99, 
    Equal = 100, NotEqual = 101, Arrow = 102, Dot = 103, Ellipsis = 104, 
    Identifier = 105, Constant = 106, DigitSequence = 107, StringLiteral = 108, 
    ComplexDefine = 109, IncludeDirective = 110, AsmBlock = 111, LineAfterPreprocessing = 112, 
    LineDirective = 113, PragmaDirective = 114, Whitespace = 115, Newline = 116, 
    BlockComment = 117, LineComment = 118
  };

  explicit CLexer(antlr4::CharStream *input);

  ~CLexer() override;


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

