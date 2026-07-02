
// Generated from minic.g4 by ANTLR 4.13.2



#include "minicParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MinicParserStaticData final {
  MinicParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MinicParserStaticData(const MinicParserStaticData&) = delete;
  MinicParserStaticData(MinicParserStaticData&&) = delete;
  MinicParserStaticData& operator=(const MinicParserStaticData&) = delete;
  MinicParserStaticData& operator=(MinicParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag minicParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MinicParserStaticData> minicParserStaticData = nullptr;

void minicParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (minicParserStaticData != nullptr) {
    return;
  }
#else
  assert(minicParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MinicParserStaticData>(
    std::vector<std::string>{
      "start", "n2", "decl", "var_decl", "type", "idents", "func_decl", 
      "rtype", "args", "n0", "params", "n1", "n3", "n4"
    },
    std::vector<std::string>{
      "", "'if'", "'else'", "'while'", "'do'", "'int'", "'float'", "'bool'", 
      "'char'", "'void'", "'('", "')'", "'{'", "'}'", "';'", "','", "'='", 
      "'+'", "'-'", "'<'"
    },
    std::vector<std::string>{
      "", "IF", "ELSE", "WHILE", "DO", "INT_T", "FLOAT_T", "BOOL_T", "CHAR_T", 
      "VOID_T", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "SEMI", "COMMA", 
      "ASSIGN", "PLUS", "MINUS", "LT", "IDENT", "NUM"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,21,165,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,0,1,1,5,1,33,8,1,10,1,12,1,36,9,1,1,2,1,2,3,2,40,8,2,1,3,1,3,1,3,1,
  	3,1,4,1,4,1,5,1,5,1,5,3,5,51,8,5,1,6,1,6,1,6,1,6,3,6,57,8,6,1,6,1,6,1,
  	6,5,6,62,8,6,10,6,12,6,65,9,6,1,6,1,6,1,7,1,7,3,7,71,8,7,1,8,1,8,1,8,
  	1,8,3,8,77,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,3,9,116,8,9,1,10,1,10,1,10,3,10,121,8,10,1,11,
  	1,11,1,11,1,11,3,11,127,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,3,12,139,8,12,1,12,3,12,142,8,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,5,12,150,8,12,10,12,12,12,153,9,12,1,13,1,13,1,13,1,13,1,13,1,13,1,
  	13,1,13,3,13,163,8,13,1,13,0,1,24,14,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,0,1,1,0,5,8,175,0,28,1,0,0,0,2,34,1,0,0,0,4,39,1,0,0,0,6,41,1,0,0,
  	0,8,45,1,0,0,0,10,47,1,0,0,0,12,52,1,0,0,0,14,70,1,0,0,0,16,72,1,0,0,
  	0,18,115,1,0,0,0,20,117,1,0,0,0,22,126,1,0,0,0,24,141,1,0,0,0,26,162,
  	1,0,0,0,28,29,3,2,1,0,29,30,5,0,0,1,30,1,1,0,0,0,31,33,3,4,2,0,32,31,
  	1,0,0,0,33,36,1,0,0,0,34,32,1,0,0,0,34,35,1,0,0,0,35,3,1,0,0,0,36,34,
  	1,0,0,0,37,40,3,6,3,0,38,40,3,12,6,0,39,37,1,0,0,0,39,38,1,0,0,0,40,5,
  	1,0,0,0,41,42,3,8,4,0,42,43,3,10,5,0,43,44,5,14,0,0,44,7,1,0,0,0,45,46,
  	7,0,0,0,46,9,1,0,0,0,47,50,5,20,0,0,48,49,5,15,0,0,49,51,3,10,5,0,50,
  	48,1,0,0,0,50,51,1,0,0,0,51,11,1,0,0,0,52,53,3,14,7,0,53,54,5,20,0,0,
  	54,56,5,10,0,0,55,57,3,16,8,0,56,55,1,0,0,0,56,57,1,0,0,0,57,58,1,0,0,
  	0,58,59,5,11,0,0,59,63,5,12,0,0,60,62,3,18,9,0,61,60,1,0,0,0,62,65,1,
  	0,0,0,63,61,1,0,0,0,63,64,1,0,0,0,64,66,1,0,0,0,65,63,1,0,0,0,66,67,5,
  	13,0,0,67,13,1,0,0,0,68,71,3,8,4,0,69,71,5,9,0,0,70,68,1,0,0,0,70,69,
  	1,0,0,0,71,15,1,0,0,0,72,73,3,8,4,0,73,76,5,20,0,0,74,75,5,15,0,0,75,
  	77,3,16,8,0,76,74,1,0,0,0,76,77,1,0,0,0,77,17,1,0,0,0,78,79,5,4,0,0,79,
  	80,3,18,9,0,80,81,5,3,0,0,81,82,5,10,0,0,82,83,3,26,13,0,83,84,5,11,0,
  	0,84,85,5,14,0,0,85,116,1,0,0,0,86,87,5,12,0,0,87,116,3,22,11,0,88,89,
  	3,26,13,0,89,90,5,14,0,0,90,116,1,0,0,0,91,92,5,1,0,0,92,93,5,10,0,0,
  	93,94,3,26,13,0,94,95,5,11,0,0,95,96,3,18,9,0,96,97,5,2,0,0,97,98,3,18,
  	9,0,98,116,1,0,0,0,99,100,5,1,0,0,100,101,5,10,0,0,101,102,3,26,13,0,
  	102,103,5,11,0,0,103,104,3,18,9,0,104,116,1,0,0,0,105,106,5,12,0,0,106,
  	116,5,13,0,0,107,116,5,14,0,0,108,109,5,3,0,0,109,110,5,10,0,0,110,111,
  	3,26,13,0,111,112,5,11,0,0,112,113,3,18,9,0,113,116,1,0,0,0,114,116,3,
  	6,3,0,115,78,1,0,0,0,115,86,1,0,0,0,115,88,1,0,0,0,115,91,1,0,0,0,115,
  	99,1,0,0,0,115,105,1,0,0,0,115,107,1,0,0,0,115,108,1,0,0,0,115,114,1,
  	0,0,0,116,19,1,0,0,0,117,120,3,26,13,0,118,119,5,15,0,0,119,121,3,20,
  	10,0,120,118,1,0,0,0,120,121,1,0,0,0,121,21,1,0,0,0,122,127,5,13,0,0,
  	123,124,3,18,9,0,124,125,3,22,11,0,125,127,1,0,0,0,126,122,1,0,0,0,126,
  	123,1,0,0,0,127,23,1,0,0,0,128,129,6,12,-1,0,129,130,5,10,0,0,130,131,
  	3,26,13,0,131,132,5,11,0,0,132,142,1,0,0,0,133,142,5,21,0,0,134,142,5,
  	20,0,0,135,136,5,20,0,0,136,138,5,10,0,0,137,139,3,20,10,0,138,137,1,
  	0,0,0,138,139,1,0,0,0,139,140,1,0,0,0,140,142,5,11,0,0,141,128,1,0,0,
  	0,141,133,1,0,0,0,141,134,1,0,0,0,141,135,1,0,0,0,142,151,1,0,0,0,143,
  	144,10,4,0,0,144,145,5,17,0,0,145,150,3,24,12,5,146,147,10,3,0,0,147,
  	148,5,18,0,0,148,150,3,24,12,4,149,143,1,0,0,0,149,146,1,0,0,0,150,153,
  	1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,25,1,0,0,0,153,151,1,0,0,
  	0,154,163,3,24,12,0,155,156,5,20,0,0,156,157,5,16,0,0,157,163,3,26,13,
  	0,158,159,3,24,12,0,159,160,5,19,0,0,160,161,3,24,12,0,161,163,1,0,0,
  	0,162,154,1,0,0,0,162,155,1,0,0,0,162,158,1,0,0,0,163,27,1,0,0,0,15,34,
  	39,50,56,63,70,76,115,120,126,138,141,149,151,162
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  minicParserStaticData = std::move(staticData);
}

}

minicParser::minicParser(TokenStream *input) : minicParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

minicParser::minicParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  minicParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *minicParserStaticData->atn, minicParserStaticData->decisionToDFA, minicParserStaticData->sharedContextCache, options);
}

minicParser::~minicParser() {
  delete _interpreter;
}

const atn::ATN& minicParser::getATN() const {
  return *minicParserStaticData->atn;
}

std::string minicParser::getGrammarFileName() const {
  return "minic.g4";
}

const std::vector<std::string>& minicParser::getRuleNames() const {
  return minicParserStaticData->ruleNames;
}

const dfa::Vocabulary& minicParser::getVocabulary() const {
  return minicParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView minicParser::getSerializedATN() const {
  return minicParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

minicParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

minicParser::N2Context* minicParser::StartContext::n2() {
  return getRuleContext<minicParser::N2Context>(0);
}

tree::TerminalNode* minicParser::StartContext::EOF() {
  return getToken(minicParser::EOF, 0);
}


size_t minicParser::StartContext::getRuleIndex() const {
  return minicParser::RuleStart;
}


minicParser::StartContext* minicParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, minicParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    n2();
    setState(29);
    match(minicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- N2Context ------------------------------------------------------------------

minicParser::N2Context::N2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<minicParser::DeclContext *> minicParser::N2Context::decl() {
  return getRuleContexts<minicParser::DeclContext>();
}

minicParser::DeclContext* minicParser::N2Context::decl(size_t i) {
  return getRuleContext<minicParser::DeclContext>(i);
}


size_t minicParser::N2Context::getRuleIndex() const {
  return minicParser::RuleN2;
}


minicParser::N2Context* minicParser::n2() {
  N2Context *_localctx = _tracker.createInstance<N2Context>(_ctx, getState());
  enterRule(_localctx, 2, minicParser::RuleN2);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 992) != 0)) {
      setState(31);
      decl();
      setState(36);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

minicParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

minicParser::Var_declContext* minicParser::DeclContext::var_decl() {
  return getRuleContext<minicParser::Var_declContext>(0);
}

minicParser::Func_declContext* minicParser::DeclContext::func_decl() {
  return getRuleContext<minicParser::Func_declContext>(0);
}


size_t minicParser::DeclContext::getRuleIndex() const {
  return minicParser::RuleDecl;
}


minicParser::DeclContext* minicParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, minicParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(37);
      var_decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(38);
      func_decl();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

minicParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

minicParser::TypeContext* minicParser::Var_declContext::type() {
  return getRuleContext<minicParser::TypeContext>(0);
}

minicParser::IdentsContext* minicParser::Var_declContext::idents() {
  return getRuleContext<minicParser::IdentsContext>(0);
}

tree::TerminalNode* minicParser::Var_declContext::SEMI() {
  return getToken(minicParser::SEMI, 0);
}


size_t minicParser::Var_declContext::getRuleIndex() const {
  return minicParser::RuleVar_decl;
}


minicParser::Var_declContext* minicParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 6, minicParser::RuleVar_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    type();
    setState(42);
    idents();
    setState(43);
    match(minicParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

minicParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* minicParser::TypeContext::INT_T() {
  return getToken(minicParser::INT_T, 0);
}

tree::TerminalNode* minicParser::TypeContext::FLOAT_T() {
  return getToken(minicParser::FLOAT_T, 0);
}

tree::TerminalNode* minicParser::TypeContext::BOOL_T() {
  return getToken(minicParser::BOOL_T, 0);
}

tree::TerminalNode* minicParser::TypeContext::CHAR_T() {
  return getToken(minicParser::CHAR_T, 0);
}


size_t minicParser::TypeContext::getRuleIndex() const {
  return minicParser::RuleType;
}


minicParser::TypeContext* minicParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 8, minicParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 480) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentsContext ------------------------------------------------------------------

minicParser::IdentsContext::IdentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* minicParser::IdentsContext::IDENT() {
  return getToken(minicParser::IDENT, 0);
}

tree::TerminalNode* minicParser::IdentsContext::COMMA() {
  return getToken(minicParser::COMMA, 0);
}

minicParser::IdentsContext* minicParser::IdentsContext::idents() {
  return getRuleContext<minicParser::IdentsContext>(0);
}


size_t minicParser::IdentsContext::getRuleIndex() const {
  return minicParser::RuleIdents;
}


minicParser::IdentsContext* minicParser::idents() {
  IdentsContext *_localctx = _tracker.createInstance<IdentsContext>(_ctx, getState());
  enterRule(_localctx, 10, minicParser::RuleIdents);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(minicParser::IDENT);
    setState(50);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == minicParser::COMMA) {
      setState(48);
      match(minicParser::COMMA);
      setState(49);
      idents();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_declContext ------------------------------------------------------------------

minicParser::Func_declContext::Func_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

minicParser::RtypeContext* minicParser::Func_declContext::rtype() {
  return getRuleContext<minicParser::RtypeContext>(0);
}

tree::TerminalNode* minicParser::Func_declContext::IDENT() {
  return getToken(minicParser::IDENT, 0);
}

tree::TerminalNode* minicParser::Func_declContext::LPAREN() {
  return getToken(minicParser::LPAREN, 0);
}

tree::TerminalNode* minicParser::Func_declContext::RPAREN() {
  return getToken(minicParser::RPAREN, 0);
}

tree::TerminalNode* minicParser::Func_declContext::LBRACE() {
  return getToken(minicParser::LBRACE, 0);
}

tree::TerminalNode* minicParser::Func_declContext::RBRACE() {
  return getToken(minicParser::RBRACE, 0);
}

minicParser::ArgsContext* minicParser::Func_declContext::args() {
  return getRuleContext<minicParser::ArgsContext>(0);
}

std::vector<minicParser::N0Context *> minicParser::Func_declContext::n0() {
  return getRuleContexts<minicParser::N0Context>();
}

minicParser::N0Context* minicParser::Func_declContext::n0(size_t i) {
  return getRuleContext<minicParser::N0Context>(i);
}


size_t minicParser::Func_declContext::getRuleIndex() const {
  return minicParser::RuleFunc_decl;
}


minicParser::Func_declContext* minicParser::func_decl() {
  Func_declContext *_localctx = _tracker.createInstance<Func_declContext>(_ctx, getState());
  enterRule(_localctx, 12, minicParser::RuleFunc_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    rtype();
    setState(53);
    match(minicParser::IDENT);
    setState(54);
    match(minicParser::LPAREN);
    setState(56);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 480) != 0)) {
      setState(55);
      args();
    }
    setState(58);
    match(minicParser::RPAREN);
    setState(59);
    match(minicParser::LBRACE);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3167738) != 0)) {
      setState(60);
      n0();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
    match(minicParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RtypeContext ------------------------------------------------------------------

minicParser::RtypeContext::RtypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

minicParser::TypeContext* minicParser::RtypeContext::type() {
  return getRuleContext<minicParser::TypeContext>(0);
}

tree::TerminalNode* minicParser::RtypeContext::VOID_T() {
  return getToken(minicParser::VOID_T, 0);
}


size_t minicParser::RtypeContext::getRuleIndex() const {
  return minicParser::RuleRtype;
}


minicParser::RtypeContext* minicParser::rtype() {
  RtypeContext *_localctx = _tracker.createInstance<RtypeContext>(_ctx, getState());
  enterRule(_localctx, 14, minicParser::RuleRtype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case minicParser::INT_T:
      case minicParser::FLOAT_T:
      case minicParser::BOOL_T:
      case minicParser::CHAR_T: {
        enterOuterAlt(_localctx, 1);
        setState(68);
        type();
        break;
      }

      case minicParser::VOID_T: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        match(minicParser::VOID_T);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

minicParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

minicParser::TypeContext* minicParser::ArgsContext::type() {
  return getRuleContext<minicParser::TypeContext>(0);
}

tree::TerminalNode* minicParser::ArgsContext::IDENT() {
  return getToken(minicParser::IDENT, 0);
}

tree::TerminalNode* minicParser::ArgsContext::COMMA() {
  return getToken(minicParser::COMMA, 0);
}

minicParser::ArgsContext* minicParser::ArgsContext::args() {
  return getRuleContext<minicParser::ArgsContext>(0);
}


size_t minicParser::ArgsContext::getRuleIndex() const {
  return minicParser::RuleArgs;
}


minicParser::ArgsContext* minicParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 16, minicParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    type();
    setState(73);
    match(minicParser::IDENT);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == minicParser::COMMA) {
      setState(74);
      match(minicParser::COMMA);
      setState(75);
      args();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- N0Context ------------------------------------------------------------------

minicParser::N0Context::N0Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* minicParser::N0Context::DO() {
  return getToken(minicParser::DO, 0);
}

std::vector<minicParser::N0Context *> minicParser::N0Context::n0() {
  return getRuleContexts<minicParser::N0Context>();
}

minicParser::N0Context* minicParser::N0Context::n0(size_t i) {
  return getRuleContext<minicParser::N0Context>(i);
}

tree::TerminalNode* minicParser::N0Context::WHILE() {
  return getToken(minicParser::WHILE, 0);
}

tree::TerminalNode* minicParser::N0Context::LPAREN() {
  return getToken(minicParser::LPAREN, 0);
}

minicParser::N4Context* minicParser::N0Context::n4() {
  return getRuleContext<minicParser::N4Context>(0);
}

tree::TerminalNode* minicParser::N0Context::RPAREN() {
  return getToken(minicParser::RPAREN, 0);
}

tree::TerminalNode* minicParser::N0Context::SEMI() {
  return getToken(minicParser::SEMI, 0);
}

tree::TerminalNode* minicParser::N0Context::LBRACE() {
  return getToken(minicParser::LBRACE, 0);
}

minicParser::N1Context* minicParser::N0Context::n1() {
  return getRuleContext<minicParser::N1Context>(0);
}

tree::TerminalNode* minicParser::N0Context::IF() {
  return getToken(minicParser::IF, 0);
}

tree::TerminalNode* minicParser::N0Context::ELSE() {
  return getToken(minicParser::ELSE, 0);
}

tree::TerminalNode* minicParser::N0Context::RBRACE() {
  return getToken(minicParser::RBRACE, 0);
}

minicParser::Var_declContext* minicParser::N0Context::var_decl() {
  return getRuleContext<minicParser::Var_declContext>(0);
}


size_t minicParser::N0Context::getRuleIndex() const {
  return minicParser::RuleN0;
}


minicParser::N0Context* minicParser::n0() {
  N0Context *_localctx = _tracker.createInstance<N0Context>(_ctx, getState());
  enterRule(_localctx, 18, minicParser::RuleN0);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      match(minicParser::DO);
      setState(79);
      n0();
      setState(80);
      match(minicParser::WHILE);
      setState(81);
      match(minicParser::LPAREN);
      setState(82);
      n4();
      setState(83);
      match(minicParser::RPAREN);
      setState(84);
      match(minicParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(86);
      match(minicParser::LBRACE);
      setState(87);
      n1();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(88);
      n4();
      setState(89);
      match(minicParser::SEMI);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(91);
      match(minicParser::IF);
      setState(92);
      match(minicParser::LPAREN);
      setState(93);
      n4();
      setState(94);
      match(minicParser::RPAREN);
      setState(95);
      n0();
      setState(96);
      match(minicParser::ELSE);
      setState(97);
      n0();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(99);
      match(minicParser::IF);
      setState(100);
      match(minicParser::LPAREN);
      setState(101);
      n4();
      setState(102);
      match(minicParser::RPAREN);
      setState(103);
      n0();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(105);
      match(minicParser::LBRACE);
      setState(106);
      match(minicParser::RBRACE);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(107);
      match(minicParser::SEMI);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(108);
      match(minicParser::WHILE);
      setState(109);
      match(minicParser::LPAREN);
      setState(110);
      n4();
      setState(111);
      match(minicParser::RPAREN);
      setState(112);
      n0();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(114);
      var_decl();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

minicParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

minicParser::N4Context* minicParser::ParamsContext::n4() {
  return getRuleContext<minicParser::N4Context>(0);
}

tree::TerminalNode* minicParser::ParamsContext::COMMA() {
  return getToken(minicParser::COMMA, 0);
}

minicParser::ParamsContext* minicParser::ParamsContext::params() {
  return getRuleContext<minicParser::ParamsContext>(0);
}


size_t minicParser::ParamsContext::getRuleIndex() const {
  return minicParser::RuleParams;
}


minicParser::ParamsContext* minicParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 20, minicParser::RuleParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    n4();
    setState(120);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == minicParser::COMMA) {
      setState(118);
      match(minicParser::COMMA);
      setState(119);
      params();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- N1Context ------------------------------------------------------------------

minicParser::N1Context::N1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* minicParser::N1Context::RBRACE() {
  return getToken(minicParser::RBRACE, 0);
}

minicParser::N0Context* minicParser::N1Context::n0() {
  return getRuleContext<minicParser::N0Context>(0);
}

minicParser::N1Context* minicParser::N1Context::n1() {
  return getRuleContext<minicParser::N1Context>(0);
}


size_t minicParser::N1Context::getRuleIndex() const {
  return minicParser::RuleN1;
}


minicParser::N1Context* minicParser::n1() {
  N1Context *_localctx = _tracker.createInstance<N1Context>(_ctx, getState());
  enterRule(_localctx, 22, minicParser::RuleN1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case minicParser::RBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(122);
        match(minicParser::RBRACE);
        break;
      }

      case minicParser::IF:
      case minicParser::WHILE:
      case minicParser::DO:
      case minicParser::INT_T:
      case minicParser::FLOAT_T:
      case minicParser::BOOL_T:
      case minicParser::CHAR_T:
      case minicParser::LPAREN:
      case minicParser::LBRACE:
      case minicParser::SEMI:
      case minicParser::IDENT:
      case minicParser::NUM: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        n0();
        setState(124);
        n1();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- N3Context ------------------------------------------------------------------

minicParser::N3Context::N3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* minicParser::N3Context::LPAREN() {
  return getToken(minicParser::LPAREN, 0);
}

minicParser::N4Context* minicParser::N3Context::n4() {
  return getRuleContext<minicParser::N4Context>(0);
}

tree::TerminalNode* minicParser::N3Context::RPAREN() {
  return getToken(minicParser::RPAREN, 0);
}

tree::TerminalNode* minicParser::N3Context::NUM() {
  return getToken(minicParser::NUM, 0);
}

tree::TerminalNode* minicParser::N3Context::IDENT() {
  return getToken(minicParser::IDENT, 0);
}

minicParser::ParamsContext* minicParser::N3Context::params() {
  return getRuleContext<minicParser::ParamsContext>(0);
}

std::vector<minicParser::N3Context *> minicParser::N3Context::n3() {
  return getRuleContexts<minicParser::N3Context>();
}

minicParser::N3Context* minicParser::N3Context::n3(size_t i) {
  return getRuleContext<minicParser::N3Context>(i);
}

tree::TerminalNode* minicParser::N3Context::PLUS() {
  return getToken(minicParser::PLUS, 0);
}

tree::TerminalNode* minicParser::N3Context::MINUS() {
  return getToken(minicParser::MINUS, 0);
}


size_t minicParser::N3Context::getRuleIndex() const {
  return minicParser::RuleN3;
}



minicParser::N3Context* minicParser::n3() {
   return n3(0);
}

minicParser::N3Context* minicParser::n3(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  minicParser::N3Context *_localctx = _tracker.createInstance<N3Context>(_ctx, parentState);
  minicParser::N3Context *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, minicParser::RuleN3, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(141);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(129);
      match(minicParser::LPAREN);
      setState(130);
      n4();
      setState(131);
      match(minicParser::RPAREN);
      break;
    }

    case 2: {
      setState(133);
      match(minicParser::NUM);
      break;
    }

    case 3: {
      setState(134);
      match(minicParser::IDENT);
      break;
    }

    case 4: {
      setState(135);
      match(minicParser::IDENT);
      setState(136);
      match(minicParser::LPAREN);
      setState(138);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3146752) != 0)) {
        setState(137);
        params();
      }
      setState(140);
      match(minicParser::RPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(151);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(149);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<N3Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleN3);
          setState(143);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(144);
          match(minicParser::PLUS);
          setState(145);
          n3(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<N3Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleN3);
          setState(146);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(147);
          match(minicParser::MINUS);
          setState(148);
          n3(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(153);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- N4Context ------------------------------------------------------------------

minicParser::N4Context::N4Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<minicParser::N3Context *> minicParser::N4Context::n3() {
  return getRuleContexts<minicParser::N3Context>();
}

minicParser::N3Context* minicParser::N4Context::n3(size_t i) {
  return getRuleContext<minicParser::N3Context>(i);
}

tree::TerminalNode* minicParser::N4Context::IDENT() {
  return getToken(minicParser::IDENT, 0);
}

tree::TerminalNode* minicParser::N4Context::ASSIGN() {
  return getToken(minicParser::ASSIGN, 0);
}

minicParser::N4Context* minicParser::N4Context::n4() {
  return getRuleContext<minicParser::N4Context>(0);
}

tree::TerminalNode* minicParser::N4Context::LT() {
  return getToken(minicParser::LT, 0);
}


size_t minicParser::N4Context::getRuleIndex() const {
  return minicParser::RuleN4;
}


minicParser::N4Context* minicParser::n4() {
  N4Context *_localctx = _tracker.createInstance<N4Context>(_ctx, getState());
  enterRule(_localctx, 26, minicParser::RuleN4);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(154);
      n3(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(155);
      match(minicParser::IDENT);
      setState(156);
      match(minicParser::ASSIGN);
      setState(157);
      n4();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(158);
      n3(0);
      setState(159);
      match(minicParser::LT);
      setState(160);
      n3(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool minicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return n3Sempred(antlrcpp::downCast<N3Context *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool minicParser::n3Sempred(N3Context *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void minicParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  minicParserInitialize();
#else
  ::antlr4::internal::call_once(minicParserOnceFlag, minicParserInitialize);
#endif
}
