
// Generated from minic.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  minicParser : public antlr4::Parser {
public:
  enum {
    IF = 1, ELSE = 2, WHILE = 3, DO = 4, INT_T = 5, FLOAT_T = 6, BOOL_T = 7, 
    CHAR_T = 8, VOID_T = 9, LPAREN = 10, RPAREN = 11, LBRACE = 12, RBRACE = 13, 
    SEMI = 14, COMMA = 15, ASSIGN = 16, PLUS = 17, MINUS = 18, LT = 19, 
    IDENT = 20, NUM = 21
  };

  enum {
    RuleStart = 0, RuleN2 = 1, RuleDecl = 2, RuleVar_decl = 3, RuleType = 4, 
    RuleIdents = 5, RuleFunc_decl = 6, RuleRtype = 7, RuleArgs = 8, RuleN0 = 9, 
    RuleParams = 10, RuleN1 = 11, RuleN3 = 12, RuleN4 = 13
  };

  explicit minicParser(antlr4::TokenStream *input);

  minicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~minicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class N2Context;
  class DeclContext;
  class Var_declContext;
  class TypeContext;
  class IdentsContext;
  class Func_declContext;
  class RtypeContext;
  class ArgsContext;
  class N0Context;
  class ParamsContext;
  class N1Context;
  class N3Context;
  class N4Context; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    N2Context *n2();
    antlr4::tree::TerminalNode *EOF();

   
  };

  StartContext* start();

  class  N2Context : public antlr4::ParserRuleContext {
  public:
    N2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);

   
  };

  N2Context* n2();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declContext *var_decl();
    Func_declContext *func_decl();

   
  };

  DeclContext* decl();

  class  Var_declContext : public antlr4::ParserRuleContext {
  public:
    Var_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    IdentsContext *idents();
    antlr4::tree::TerminalNode *SEMI();

   
  };

  Var_declContext* var_decl();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_T();
    antlr4::tree::TerminalNode *FLOAT_T();
    antlr4::tree::TerminalNode *BOOL_T();
    antlr4::tree::TerminalNode *CHAR_T();

   
  };

  TypeContext* type();

  class  IdentsContext : public antlr4::ParserRuleContext {
  public:
    IdentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *COMMA();
    IdentsContext *idents();

   
  };

  IdentsContext* idents();

  class  Func_declContext : public antlr4::ParserRuleContext {
  public:
    Func_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RtypeContext *rtype();
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    ArgsContext *args();
    std::vector<N0Context *> n0();
    N0Context* n0(size_t i);

   
  };

  Func_declContext* func_decl();

  class  RtypeContext : public antlr4::ParserRuleContext {
  public:
    RtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *VOID_T();

   
  };

  RtypeContext* rtype();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *COMMA();
    ArgsContext *args();

   
  };

  ArgsContext* args();

  class  N0Context : public antlr4::ParserRuleContext {
  public:
    N0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    std::vector<N0Context *> n0();
    N0Context* n0(size_t i);
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    N4Context *n4();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LBRACE();
    N1Context *n1();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *RBRACE();
    Var_declContext *var_decl();

   
  };

  N0Context* n0();

  class  ParamsContext : public antlr4::ParserRuleContext {
  public:
    ParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    N4Context *n4();
    antlr4::tree::TerminalNode *COMMA();
    ParamsContext *params();

   
  };

  ParamsContext* params();

  class  N1Context : public antlr4::ParserRuleContext {
  public:
    N1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RBRACE();
    N0Context *n0();
    N1Context *n1();

   
  };

  N1Context* n1();

  class  N3Context : public antlr4::ParserRuleContext {
  public:
    N3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    N4Context *n4();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *IDENT();
    ParamsContext *params();
    std::vector<N3Context *> n3();
    N3Context* n3(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

   
  };

  N3Context* n3();
  N3Context* n3(int precedence);
  class  N4Context : public antlr4::ParserRuleContext {
  public:
    N4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<N3Context *> n3();
    N3Context* n3(size_t i);
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *ASSIGN();
    N4Context *n4();
    antlr4::tree::TerminalNode *LT();

   
  };

  N4Context* n4();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool n3Sempred(N3Context *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

