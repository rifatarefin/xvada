
// Generated from Lua.g4 by ANTLR 4.13.2



#include "LuaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LuaParserStaticData final {
  LuaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LuaParserStaticData(const LuaParserStaticData&) = delete;
  LuaParserStaticData(LuaParserStaticData&&) = delete;
  LuaParserStaticData& operator=(const LuaParserStaticData&) = delete;
  LuaParserStaticData& operator=(LuaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag luaParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<LuaParserStaticData> luaParserStaticData = nullptr;

void luaParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (luaParserStaticData != nullptr) {
    return;
  }
#else
  assert(luaParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LuaParserStaticData>(
    std::vector<std::string>{
      "chunk", "block", "stat", "attnamelist", "attrib", "retstat", "label", 
      "funcname", "varlist", "namelist", "explist", "exp", "prefixexp", 
      "functioncall", "varOrExp", "var_", "varSuffix", "nameAndArgs", "args", 
      "functiondef", "funcbody", "parlist", "tableconstructor", "fieldlist", 
      "field", "fieldsep", "operatorOr", "operatorAnd", "operatorComparison", 
      "operatorStrcat", "operatorAddSub", "operatorMulDivMod", "operatorBitwise", 
      "operatorUnary", "operatorPower", "number", "string"
    },
    std::vector<std::string>{
      "", "';'", "'='", "'break'", "'goto'", "'do'", "'end'", "'while'", 
      "'repeat'", "'until'", "'if'", "'then'", "'elseif'", "'else'", "'for'", 
      "','", "'in'", "'function'", "'local'", "'<'", "'>'", "'return'", 
      "'::'", "'.'", "':'", "'nil'", "'false'", "'true'", "'...'", "'('", 
      "')'", "'['", "']'", "'{'", "'}'", "'or'", "'and'", "'<='", "'>='", 
      "'~='", "'=='", "'..'", "'+'", "'-'", "'*'", "'/'", "'%'", "'//'", 
      "'&'", "'|'", "'~'", "'<<'", "'>>'", "'not'", "'#'", "'^'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "NAME", "NORMALSTRING", "CHARSTRING", "LONGSTRING", 
      "INT", "HEX", "FLOAT", "HEX_FLOAT", "COMMENT", "LINE_COMMENT", "WS", 
      "SHEBANG"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,67,420,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,1,0,1,0,1,0,1,1,5,1,79,8,1,10,1,12,1,82,9,1,1,1,3,1,85,8,
  	1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,
  	2,121,8,2,10,2,12,2,124,9,2,1,2,1,2,3,2,128,8,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,3,2,140,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,166,8,2,3,
  	2,168,8,2,1,3,1,3,1,3,1,3,1,3,5,3,175,8,3,10,3,12,3,178,9,3,1,4,1,4,1,
  	4,3,4,183,8,4,1,5,1,5,3,5,187,8,5,1,5,3,5,190,8,5,1,6,1,6,1,6,1,6,1,7,
  	1,7,1,7,5,7,199,8,7,10,7,12,7,202,9,7,1,7,1,7,3,7,206,8,7,1,8,1,8,1,8,
  	5,8,211,8,8,10,8,12,8,214,9,8,1,9,1,9,1,9,5,9,219,8,9,10,9,12,9,222,9,
  	9,1,10,1,10,1,10,5,10,227,8,10,10,10,12,10,230,9,10,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,245,8,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,5,11,279,8,11,10,11,12,11,282,9,11,1,12,1,12,5,12,286,8,
  	12,10,12,12,12,289,9,12,1,13,1,13,4,13,293,8,13,11,13,12,13,294,1,14,
  	1,14,1,14,1,14,1,14,3,14,302,8,14,1,15,1,15,1,15,1,15,1,15,1,15,3,15,
  	310,8,15,1,15,5,15,313,8,15,10,15,12,15,316,9,15,1,16,5,16,319,8,16,10,
  	16,12,16,322,9,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,330,8,16,1,17,1,
  	17,3,17,334,8,17,1,17,1,17,1,18,1,18,3,18,340,8,18,1,18,1,18,1,18,3,18,
  	345,8,18,1,19,1,19,1,19,1,20,1,20,3,20,352,8,20,1,20,1,20,1,20,1,20,1,
  	21,1,21,1,21,3,21,361,8,21,1,21,3,21,364,8,21,1,22,1,22,3,22,368,8,22,
  	1,22,1,22,1,23,1,23,1,23,1,23,5,23,376,8,23,10,23,12,23,379,9,23,1,23,
  	3,23,382,8,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,
  	394,8,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,
  	1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,36,0,1,
  	22,37,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,64,66,68,70,72,0,8,2,0,1,1,15,15,2,0,19,20,
  	37,40,1,0,42,43,1,0,44,47,1,0,48,52,3,0,43,43,50,50,53,54,1,0,60,63,1,
  	0,57,59,447,0,74,1,0,0,0,2,80,1,0,0,0,4,167,1,0,0,0,6,169,1,0,0,0,8,182,
  	1,0,0,0,10,184,1,0,0,0,12,191,1,0,0,0,14,195,1,0,0,0,16,207,1,0,0,0,18,
  	215,1,0,0,0,20,223,1,0,0,0,22,244,1,0,0,0,24,283,1,0,0,0,26,290,1,0,0,
  	0,28,301,1,0,0,0,30,309,1,0,0,0,32,320,1,0,0,0,34,333,1,0,0,0,36,344,
  	1,0,0,0,38,346,1,0,0,0,40,349,1,0,0,0,42,363,1,0,0,0,44,365,1,0,0,0,46,
  	371,1,0,0,0,48,393,1,0,0,0,50,395,1,0,0,0,52,397,1,0,0,0,54,399,1,0,0,
  	0,56,401,1,0,0,0,58,403,1,0,0,0,60,405,1,0,0,0,62,407,1,0,0,0,64,409,
  	1,0,0,0,66,411,1,0,0,0,68,413,1,0,0,0,70,415,1,0,0,0,72,417,1,0,0,0,74,
  	75,3,2,1,0,75,76,5,0,0,1,76,1,1,0,0,0,77,79,3,4,2,0,78,77,1,0,0,0,79,
  	82,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,84,1,0,0,0,82,80,1,0,0,0,83,
  	85,3,10,5,0,84,83,1,0,0,0,84,85,1,0,0,0,85,3,1,0,0,0,86,168,5,1,0,0,87,
  	88,3,16,8,0,88,89,5,2,0,0,89,90,3,20,10,0,90,168,1,0,0,0,91,168,3,26,
  	13,0,92,168,3,12,6,0,93,168,5,3,0,0,94,95,5,4,0,0,95,168,5,56,0,0,96,
  	97,5,5,0,0,97,98,3,2,1,0,98,99,5,6,0,0,99,168,1,0,0,0,100,101,5,7,0,0,
  	101,102,3,22,11,0,102,103,5,5,0,0,103,104,3,2,1,0,104,105,5,6,0,0,105,
  	168,1,0,0,0,106,107,5,8,0,0,107,108,3,2,1,0,108,109,5,9,0,0,109,110,3,
  	22,11,0,110,168,1,0,0,0,111,112,5,10,0,0,112,113,3,22,11,0,113,114,5,
  	11,0,0,114,122,3,2,1,0,115,116,5,12,0,0,116,117,3,22,11,0,117,118,5,11,
  	0,0,118,119,3,2,1,0,119,121,1,0,0,0,120,115,1,0,0,0,121,124,1,0,0,0,122,
  	120,1,0,0,0,122,123,1,0,0,0,123,127,1,0,0,0,124,122,1,0,0,0,125,126,5,
  	13,0,0,126,128,3,2,1,0,127,125,1,0,0,0,127,128,1,0,0,0,128,129,1,0,0,
  	0,129,130,5,6,0,0,130,168,1,0,0,0,131,132,5,14,0,0,132,133,5,56,0,0,133,
  	134,5,2,0,0,134,135,3,22,11,0,135,136,5,15,0,0,136,139,3,22,11,0,137,
  	138,5,15,0,0,138,140,3,22,11,0,139,137,1,0,0,0,139,140,1,0,0,0,140,141,
  	1,0,0,0,141,142,5,5,0,0,142,143,3,2,1,0,143,144,5,6,0,0,144,168,1,0,0,
  	0,145,146,5,14,0,0,146,147,3,18,9,0,147,148,5,16,0,0,148,149,3,20,10,
  	0,149,150,5,5,0,0,150,151,3,2,1,0,151,152,5,6,0,0,152,168,1,0,0,0,153,
  	154,5,17,0,0,154,155,3,14,7,0,155,156,3,40,20,0,156,168,1,0,0,0,157,158,
  	5,18,0,0,158,159,5,17,0,0,159,160,5,56,0,0,160,168,3,40,20,0,161,162,
  	5,18,0,0,162,165,3,6,3,0,163,164,5,2,0,0,164,166,3,20,10,0,165,163,1,
  	0,0,0,165,166,1,0,0,0,166,168,1,0,0,0,167,86,1,0,0,0,167,87,1,0,0,0,167,
  	91,1,0,0,0,167,92,1,0,0,0,167,93,1,0,0,0,167,94,1,0,0,0,167,96,1,0,0,
  	0,167,100,1,0,0,0,167,106,1,0,0,0,167,111,1,0,0,0,167,131,1,0,0,0,167,
  	145,1,0,0,0,167,153,1,0,0,0,167,157,1,0,0,0,167,161,1,0,0,0,168,5,1,0,
  	0,0,169,170,5,56,0,0,170,176,3,8,4,0,171,172,5,15,0,0,172,173,5,56,0,
  	0,173,175,3,8,4,0,174,171,1,0,0,0,175,178,1,0,0,0,176,174,1,0,0,0,176,
  	177,1,0,0,0,177,7,1,0,0,0,178,176,1,0,0,0,179,180,5,19,0,0,180,181,5,
  	56,0,0,181,183,5,20,0,0,182,179,1,0,0,0,182,183,1,0,0,0,183,9,1,0,0,0,
  	184,186,5,21,0,0,185,187,3,20,10,0,186,185,1,0,0,0,186,187,1,0,0,0,187,
  	189,1,0,0,0,188,190,5,1,0,0,189,188,1,0,0,0,189,190,1,0,0,0,190,11,1,
  	0,0,0,191,192,5,22,0,0,192,193,5,56,0,0,193,194,5,22,0,0,194,13,1,0,0,
  	0,195,200,5,56,0,0,196,197,5,23,0,0,197,199,5,56,0,0,198,196,1,0,0,0,
  	199,202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,205,1,0,0,0,202,200,
  	1,0,0,0,203,204,5,24,0,0,204,206,5,56,0,0,205,203,1,0,0,0,205,206,1,0,
  	0,0,206,15,1,0,0,0,207,212,3,30,15,0,208,209,5,15,0,0,209,211,3,30,15,
  	0,210,208,1,0,0,0,211,214,1,0,0,0,212,210,1,0,0,0,212,213,1,0,0,0,213,
  	17,1,0,0,0,214,212,1,0,0,0,215,220,5,56,0,0,216,217,5,15,0,0,217,219,
  	5,56,0,0,218,216,1,0,0,0,219,222,1,0,0,0,220,218,1,0,0,0,220,221,1,0,
  	0,0,221,19,1,0,0,0,222,220,1,0,0,0,223,228,3,22,11,0,224,225,5,15,0,0,
  	225,227,3,22,11,0,226,224,1,0,0,0,227,230,1,0,0,0,228,226,1,0,0,0,228,
  	229,1,0,0,0,229,21,1,0,0,0,230,228,1,0,0,0,231,232,6,11,-1,0,232,245,
  	5,25,0,0,233,245,5,26,0,0,234,245,5,27,0,0,235,245,3,70,35,0,236,245,
  	3,72,36,0,237,245,5,28,0,0,238,245,3,38,19,0,239,245,3,24,12,0,240,245,
  	3,44,22,0,241,242,3,66,33,0,242,243,3,22,11,8,243,245,1,0,0,0,244,231,
  	1,0,0,0,244,233,1,0,0,0,244,234,1,0,0,0,244,235,1,0,0,0,244,236,1,0,0,
  	0,244,237,1,0,0,0,244,238,1,0,0,0,244,239,1,0,0,0,244,240,1,0,0,0,244,
  	241,1,0,0,0,245,280,1,0,0,0,246,247,10,9,0,0,247,248,3,68,34,0,248,249,
  	3,22,11,9,249,279,1,0,0,0,250,251,10,7,0,0,251,252,3,62,31,0,252,253,
  	3,22,11,8,253,279,1,0,0,0,254,255,10,6,0,0,255,256,3,60,30,0,256,257,
  	3,22,11,7,257,279,1,0,0,0,258,259,10,5,0,0,259,260,3,58,29,0,260,261,
  	3,22,11,5,261,279,1,0,0,0,262,263,10,4,0,0,263,264,3,56,28,0,264,265,
  	3,22,11,5,265,279,1,0,0,0,266,267,10,3,0,0,267,268,3,54,27,0,268,269,
  	3,22,11,4,269,279,1,0,0,0,270,271,10,2,0,0,271,272,3,52,26,0,272,273,
  	3,22,11,3,273,279,1,0,0,0,274,275,10,1,0,0,275,276,3,64,32,0,276,277,
  	3,22,11,2,277,279,1,0,0,0,278,246,1,0,0,0,278,250,1,0,0,0,278,254,1,0,
  	0,0,278,258,1,0,0,0,278,262,1,0,0,0,278,266,1,0,0,0,278,270,1,0,0,0,278,
  	274,1,0,0,0,279,282,1,0,0,0,280,278,1,0,0,0,280,281,1,0,0,0,281,23,1,
  	0,0,0,282,280,1,0,0,0,283,287,3,28,14,0,284,286,3,34,17,0,285,284,1,0,
  	0,0,286,289,1,0,0,0,287,285,1,0,0,0,287,288,1,0,0,0,288,25,1,0,0,0,289,
  	287,1,0,0,0,290,292,3,28,14,0,291,293,3,34,17,0,292,291,1,0,0,0,293,294,
  	1,0,0,0,294,292,1,0,0,0,294,295,1,0,0,0,295,27,1,0,0,0,296,302,3,30,15,
  	0,297,298,5,29,0,0,298,299,3,22,11,0,299,300,5,30,0,0,300,302,1,0,0,0,
  	301,296,1,0,0,0,301,297,1,0,0,0,302,29,1,0,0,0,303,310,5,56,0,0,304,305,
  	5,29,0,0,305,306,3,22,11,0,306,307,5,30,0,0,307,308,3,32,16,0,308,310,
  	1,0,0,0,309,303,1,0,0,0,309,304,1,0,0,0,310,314,1,0,0,0,311,313,3,32,
  	16,0,312,311,1,0,0,0,313,316,1,0,0,0,314,312,1,0,0,0,314,315,1,0,0,0,
  	315,31,1,0,0,0,316,314,1,0,0,0,317,319,3,34,17,0,318,317,1,0,0,0,319,
  	322,1,0,0,0,320,318,1,0,0,0,320,321,1,0,0,0,321,329,1,0,0,0,322,320,1,
  	0,0,0,323,324,5,31,0,0,324,325,3,22,11,0,325,326,5,32,0,0,326,330,1,0,
  	0,0,327,328,5,23,0,0,328,330,5,56,0,0,329,323,1,0,0,0,329,327,1,0,0,0,
  	330,33,1,0,0,0,331,332,5,24,0,0,332,334,5,56,0,0,333,331,1,0,0,0,333,
  	334,1,0,0,0,334,335,1,0,0,0,335,336,3,36,18,0,336,35,1,0,0,0,337,339,
  	5,29,0,0,338,340,3,20,10,0,339,338,1,0,0,0,339,340,1,0,0,0,340,341,1,
  	0,0,0,341,345,5,30,0,0,342,345,3,44,22,0,343,345,3,72,36,0,344,337,1,
  	0,0,0,344,342,1,0,0,0,344,343,1,0,0,0,345,37,1,0,0,0,346,347,5,17,0,0,
  	347,348,3,40,20,0,348,39,1,0,0,0,349,351,5,29,0,0,350,352,3,42,21,0,351,
  	350,1,0,0,0,351,352,1,0,0,0,352,353,1,0,0,0,353,354,5,30,0,0,354,355,
  	3,2,1,0,355,356,5,6,0,0,356,41,1,0,0,0,357,360,3,18,9,0,358,359,5,15,
  	0,0,359,361,5,28,0,0,360,358,1,0,0,0,360,361,1,0,0,0,361,364,1,0,0,0,
  	362,364,5,28,0,0,363,357,1,0,0,0,363,362,1,0,0,0,364,43,1,0,0,0,365,367,
  	5,33,0,0,366,368,3,46,23,0,367,366,1,0,0,0,367,368,1,0,0,0,368,369,1,
  	0,0,0,369,370,5,34,0,0,370,45,1,0,0,0,371,377,3,48,24,0,372,373,3,50,
  	25,0,373,374,3,48,24,0,374,376,1,0,0,0,375,372,1,0,0,0,376,379,1,0,0,
  	0,377,375,1,0,0,0,377,378,1,0,0,0,378,381,1,0,0,0,379,377,1,0,0,0,380,
  	382,3,50,25,0,381,380,1,0,0,0,381,382,1,0,0,0,382,47,1,0,0,0,383,384,
  	5,31,0,0,384,385,3,22,11,0,385,386,5,32,0,0,386,387,5,2,0,0,387,388,3,
  	22,11,0,388,394,1,0,0,0,389,390,5,56,0,0,390,391,5,2,0,0,391,394,3,22,
  	11,0,392,394,3,22,11,0,393,383,1,0,0,0,393,389,1,0,0,0,393,392,1,0,0,
  	0,394,49,1,0,0,0,395,396,7,0,0,0,396,51,1,0,0,0,397,398,5,35,0,0,398,
  	53,1,0,0,0,399,400,5,36,0,0,400,55,1,0,0,0,401,402,7,1,0,0,402,57,1,0,
  	0,0,403,404,5,41,0,0,404,59,1,0,0,0,405,406,7,2,0,0,406,61,1,0,0,0,407,
  	408,7,3,0,0,408,63,1,0,0,0,409,410,7,4,0,0,410,65,1,0,0,0,411,412,7,5,
  	0,0,412,67,1,0,0,0,413,414,5,55,0,0,414,69,1,0,0,0,415,416,7,6,0,0,416,
  	71,1,0,0,0,417,418,7,7,0,0,418,73,1,0,0,0,36,80,84,122,127,139,165,167,
  	176,182,186,189,200,205,212,220,228,244,278,280,287,294,301,309,314,320,
  	329,333,339,344,351,360,363,367,377,381,393
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  luaParserStaticData = std::move(staticData);
}

}

LuaParser::LuaParser(TokenStream *input) : LuaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LuaParser::LuaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LuaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *luaParserStaticData->atn, luaParserStaticData->decisionToDFA, luaParserStaticData->sharedContextCache, options);
}

LuaParser::~LuaParser() {
  delete _interpreter;
}

const atn::ATN& LuaParser::getATN() const {
  return *luaParserStaticData->atn;
}

std::string LuaParser::getGrammarFileName() const {
  return "Lua.g4";
}

const std::vector<std::string>& LuaParser::getRuleNames() const {
  return luaParserStaticData->ruleNames;
}

const dfa::Vocabulary& LuaParser::getVocabulary() const {
  return luaParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LuaParser::getSerializedATN() const {
  return luaParserStaticData->serializedATN;
}


//----------------- ChunkContext ------------------------------------------------------------------

LuaParser::ChunkContext::ChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::BlockContext* LuaParser::ChunkContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

tree::TerminalNode* LuaParser::ChunkContext::EOF() {
  return getToken(LuaParser::EOF, 0);
}


size_t LuaParser::ChunkContext::getRuleIndex() const {
  return LuaParser::RuleChunk;
}


LuaParser::ChunkContext* LuaParser::chunk() {
  ChunkContext *_localctx = _tracker.createInstance<ChunkContext>(_ctx, getState());
  enterRule(_localctx, 0, LuaParser::RuleChunk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    block();
    setState(75);
    match(LuaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

LuaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::StatContext *> LuaParser::BlockContext::stat() {
  return getRuleContexts<LuaParser::StatContext>();
}

LuaParser::StatContext* LuaParser::BlockContext::stat(size_t i) {
  return getRuleContext<LuaParser::StatContext>(i);
}

LuaParser::RetstatContext* LuaParser::BlockContext::retstat() {
  return getRuleContext<LuaParser::RetstatContext>(0);
}


size_t LuaParser::BlockContext::getRuleIndex() const {
  return LuaParser::RuleBlock;
}


LuaParser::BlockContext* LuaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, LuaParser::RuleBlock);
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
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 72057594579404218) != 0)) {
      setState(77);
      stat();
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__20) {
      setState(83);
      retstat();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

LuaParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarlistContext* LuaParser::StatContext::varlist() {
  return getRuleContext<LuaParser::VarlistContext>(0);
}

LuaParser::ExplistContext* LuaParser::StatContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::FunctioncallContext* LuaParser::StatContext::functioncall() {
  return getRuleContext<LuaParser::FunctioncallContext>(0);
}

LuaParser::LabelContext* LuaParser::StatContext::label() {
  return getRuleContext<LuaParser::LabelContext>(0);
}

tree::TerminalNode* LuaParser::StatContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

std::vector<LuaParser::BlockContext *> LuaParser::StatContext::block() {
  return getRuleContexts<LuaParser::BlockContext>();
}

LuaParser::BlockContext* LuaParser::StatContext::block(size_t i) {
  return getRuleContext<LuaParser::BlockContext>(i);
}

std::vector<LuaParser::ExpContext *> LuaParser::StatContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::StatContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::NamelistContext* LuaParser::StatContext::namelist() {
  return getRuleContext<LuaParser::NamelistContext>(0);
}

LuaParser::FuncnameContext* LuaParser::StatContext::funcname() {
  return getRuleContext<LuaParser::FuncnameContext>(0);
}

LuaParser::FuncbodyContext* LuaParser::StatContext::funcbody() {
  return getRuleContext<LuaParser::FuncbodyContext>(0);
}

LuaParser::AttnamelistContext* LuaParser::StatContext::attnamelist() {
  return getRuleContext<LuaParser::AttnamelistContext>(0);
}


size_t LuaParser::StatContext::getRuleIndex() const {
  return LuaParser::RuleStat;
}


LuaParser::StatContext* LuaParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 4, LuaParser::RuleStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(86);
      match(LuaParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
      varlist();
      setState(88);
      match(LuaParser::T__1);
      setState(89);
      explist();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(91);
      functioncall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(92);
      label();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(93);
      match(LuaParser::T__2);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(94);
      match(LuaParser::T__3);
      setState(95);
      match(LuaParser::NAME);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(96);
      match(LuaParser::T__4);
      setState(97);
      block();
      setState(98);
      match(LuaParser::T__5);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(100);
      match(LuaParser::T__6);
      setState(101);
      exp(0);
      setState(102);
      match(LuaParser::T__4);
      setState(103);
      block();
      setState(104);
      match(LuaParser::T__5);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(106);
      match(LuaParser::T__7);
      setState(107);
      block();
      setState(108);
      match(LuaParser::T__8);
      setState(109);
      exp(0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(111);
      match(LuaParser::T__9);
      setState(112);
      exp(0);
      setState(113);
      match(LuaParser::T__10);
      setState(114);
      block();
      setState(122);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LuaParser::T__11) {
        setState(115);
        match(LuaParser::T__11);
        setState(116);
        exp(0);
        setState(117);
        match(LuaParser::T__10);
        setState(118);
        block();
        setState(124);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(127);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuaParser::T__12) {
        setState(125);
        match(LuaParser::T__12);
        setState(126);
        block();
      }
      setState(129);
      match(LuaParser::T__5);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(131);
      match(LuaParser::T__13);
      setState(132);
      match(LuaParser::NAME);
      setState(133);
      match(LuaParser::T__1);
      setState(134);
      exp(0);
      setState(135);
      match(LuaParser::T__14);
      setState(136);
      exp(0);
      setState(139);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuaParser::T__14) {
        setState(137);
        match(LuaParser::T__14);
        setState(138);
        exp(0);
      }
      setState(141);
      match(LuaParser::T__4);
      setState(142);
      block();
      setState(143);
      match(LuaParser::T__5);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(145);
      match(LuaParser::T__13);
      setState(146);
      namelist();
      setState(147);
      match(LuaParser::T__15);
      setState(148);
      explist();
      setState(149);
      match(LuaParser::T__4);
      setState(150);
      block();
      setState(151);
      match(LuaParser::T__5);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(153);
      match(LuaParser::T__16);
      setState(154);
      funcname();
      setState(155);
      funcbody();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(157);
      match(LuaParser::T__17);
      setState(158);
      match(LuaParser::T__16);
      setState(159);
      match(LuaParser::NAME);
      setState(160);
      funcbody();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(161);
      match(LuaParser::T__17);
      setState(162);
      attnamelist();
      setState(165);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LuaParser::T__1) {
        setState(163);
        match(LuaParser::T__1);
        setState(164);
        explist();
      }
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

//----------------- AttnamelistContext ------------------------------------------------------------------

LuaParser::AttnamelistContext::AttnamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::AttnamelistContext::NAME() {
  return getTokens(LuaParser::NAME);
}

tree::TerminalNode* LuaParser::AttnamelistContext::NAME(size_t i) {
  return getToken(LuaParser::NAME, i);
}

std::vector<LuaParser::AttribContext *> LuaParser::AttnamelistContext::attrib() {
  return getRuleContexts<LuaParser::AttribContext>();
}

LuaParser::AttribContext* LuaParser::AttnamelistContext::attrib(size_t i) {
  return getRuleContext<LuaParser::AttribContext>(i);
}


size_t LuaParser::AttnamelistContext::getRuleIndex() const {
  return LuaParser::RuleAttnamelist;
}


LuaParser::AttnamelistContext* LuaParser::attnamelist() {
  AttnamelistContext *_localctx = _tracker.createInstance<AttnamelistContext>(_ctx, getState());
  enterRule(_localctx, 6, LuaParser::RuleAttnamelist);
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
    setState(169);
    match(LuaParser::NAME);
    setState(170);
    attrib();
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__14) {
      setState(171);
      match(LuaParser::T__14);
      setState(172);
      match(LuaParser::NAME);
      setState(173);
      attrib();
      setState(178);
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

//----------------- AttribContext ------------------------------------------------------------------

LuaParser::AttribContext::AttribContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::AttribContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::AttribContext::getRuleIndex() const {
  return LuaParser::RuleAttrib;
}


LuaParser::AttribContext* LuaParser::attrib() {
  AttribContext *_localctx = _tracker.createInstance<AttribContext>(_ctx, getState());
  enterRule(_localctx, 8, LuaParser::RuleAttrib);
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
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__18) {
      setState(179);
      match(LuaParser::T__18);
      setState(180);
      match(LuaParser::NAME);
      setState(181);
      match(LuaParser::T__19);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetstatContext ------------------------------------------------------------------

LuaParser::RetstatContext::RetstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ExplistContext* LuaParser::RetstatContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}


size_t LuaParser::RetstatContext::getRuleIndex() const {
  return LuaParser::RuleRetstat;
}


LuaParser::RetstatContext* LuaParser::retstat() {
  RetstatContext *_localctx = _tracker.createInstance<RetstatContext>(_ctx, getState());
  enterRule(_localctx, 10, LuaParser::RuleRetstat);
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
    setState(184);
    match(LuaParser::T__20);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -43901290643587072) != 0)) {
      setState(185);
      explist();
    }
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__0) {
      setState(188);
      match(LuaParser::T__0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

LuaParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::LabelContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::LabelContext::getRuleIndex() const {
  return LuaParser::RuleLabel;
}


LuaParser::LabelContext* LuaParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 12, LuaParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(LuaParser::T__21);
    setState(192);
    match(LuaParser::NAME);
    setState(193);
    match(LuaParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncnameContext ------------------------------------------------------------------

LuaParser::FuncnameContext::FuncnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::FuncnameContext::NAME() {
  return getTokens(LuaParser::NAME);
}

tree::TerminalNode* LuaParser::FuncnameContext::NAME(size_t i) {
  return getToken(LuaParser::NAME, i);
}


size_t LuaParser::FuncnameContext::getRuleIndex() const {
  return LuaParser::RuleFuncname;
}


LuaParser::FuncnameContext* LuaParser::funcname() {
  FuncnameContext *_localctx = _tracker.createInstance<FuncnameContext>(_ctx, getState());
  enterRule(_localctx, 14, LuaParser::RuleFuncname);
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
    setState(195);
    match(LuaParser::NAME);
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__22) {
      setState(196);
      match(LuaParser::T__22);
      setState(197);
      match(LuaParser::NAME);
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__23) {
      setState(203);
      match(LuaParser::T__23);
      setState(204);
      match(LuaParser::NAME);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarlistContext ------------------------------------------------------------------

LuaParser::VarlistContext::VarlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::Var_Context *> LuaParser::VarlistContext::var_() {
  return getRuleContexts<LuaParser::Var_Context>();
}

LuaParser::Var_Context* LuaParser::VarlistContext::var_(size_t i) {
  return getRuleContext<LuaParser::Var_Context>(i);
}


size_t LuaParser::VarlistContext::getRuleIndex() const {
  return LuaParser::RuleVarlist;
}


LuaParser::VarlistContext* LuaParser::varlist() {
  VarlistContext *_localctx = _tracker.createInstance<VarlistContext>(_ctx, getState());
  enterRule(_localctx, 16, LuaParser::RuleVarlist);
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
    setState(207);
    var_();
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__14) {
      setState(208);
      match(LuaParser::T__14);
      setState(209);
      var_();
      setState(214);
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

//----------------- NamelistContext ------------------------------------------------------------------

LuaParser::NamelistContext::NamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::NamelistContext::NAME() {
  return getTokens(LuaParser::NAME);
}

tree::TerminalNode* LuaParser::NamelistContext::NAME(size_t i) {
  return getToken(LuaParser::NAME, i);
}


size_t LuaParser::NamelistContext::getRuleIndex() const {
  return LuaParser::RuleNamelist;
}


LuaParser::NamelistContext* LuaParser::namelist() {
  NamelistContext *_localctx = _tracker.createInstance<NamelistContext>(_ctx, getState());
  enterRule(_localctx, 18, LuaParser::RuleNamelist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(LuaParser::NAME);
    setState(220);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(216);
        match(LuaParser::T__14);
        setState(217);
        match(LuaParser::NAME); 
      }
      setState(222);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplistContext ------------------------------------------------------------------

LuaParser::ExplistContext::ExplistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::ExpContext *> LuaParser::ExplistContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExplistContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}


size_t LuaParser::ExplistContext::getRuleIndex() const {
  return LuaParser::RuleExplist;
}


LuaParser::ExplistContext* LuaParser::explist() {
  ExplistContext *_localctx = _tracker.createInstance<ExplistContext>(_ctx, getState());
  enterRule(_localctx, 20, LuaParser::RuleExplist);
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
    setState(223);
    exp(0);
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::T__14) {
      setState(224);
      match(LuaParser::T__14);
      setState(225);
      exp(0);
      setState(230);
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

//----------------- ExpContext ------------------------------------------------------------------

LuaParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::NumberContext* LuaParser::ExpContext::number() {
  return getRuleContext<LuaParser::NumberContext>(0);
}

LuaParser::StringContext* LuaParser::ExpContext::string() {
  return getRuleContext<LuaParser::StringContext>(0);
}

LuaParser::FunctiondefContext* LuaParser::ExpContext::functiondef() {
  return getRuleContext<LuaParser::FunctiondefContext>(0);
}

LuaParser::PrefixexpContext* LuaParser::ExpContext::prefixexp() {
  return getRuleContext<LuaParser::PrefixexpContext>(0);
}

LuaParser::TableconstructorContext* LuaParser::ExpContext::tableconstructor() {
  return getRuleContext<LuaParser::TableconstructorContext>(0);
}

LuaParser::OperatorUnaryContext* LuaParser::ExpContext::operatorUnary() {
  return getRuleContext<LuaParser::OperatorUnaryContext>(0);
}

std::vector<LuaParser::ExpContext *> LuaParser::ExpContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorPowerContext* LuaParser::ExpContext::operatorPower() {
  return getRuleContext<LuaParser::OperatorPowerContext>(0);
}

LuaParser::OperatorMulDivModContext* LuaParser::ExpContext::operatorMulDivMod() {
  return getRuleContext<LuaParser::OperatorMulDivModContext>(0);
}

LuaParser::OperatorAddSubContext* LuaParser::ExpContext::operatorAddSub() {
  return getRuleContext<LuaParser::OperatorAddSubContext>(0);
}

LuaParser::OperatorStrcatContext* LuaParser::ExpContext::operatorStrcat() {
  return getRuleContext<LuaParser::OperatorStrcatContext>(0);
}

LuaParser::OperatorComparisonContext* LuaParser::ExpContext::operatorComparison() {
  return getRuleContext<LuaParser::OperatorComparisonContext>(0);
}

LuaParser::OperatorAndContext* LuaParser::ExpContext::operatorAnd() {
  return getRuleContext<LuaParser::OperatorAndContext>(0);
}

LuaParser::OperatorOrContext* LuaParser::ExpContext::operatorOr() {
  return getRuleContext<LuaParser::OperatorOrContext>(0);
}

LuaParser::OperatorBitwiseContext* LuaParser::ExpContext::operatorBitwise() {
  return getRuleContext<LuaParser::OperatorBitwiseContext>(0);
}


size_t LuaParser::ExpContext::getRuleIndex() const {
  return LuaParser::RuleExp;
}



LuaParser::ExpContext* LuaParser::exp() {
   return exp(0);
}

LuaParser::ExpContext* LuaParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LuaParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  LuaParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, LuaParser::RuleExp, precedence);

    

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
    setState(244);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__24: {
        setState(232);
        match(LuaParser::T__24);
        break;
      }

      case LuaParser::T__25: {
        setState(233);
        match(LuaParser::T__25);
        break;
      }

      case LuaParser::T__26: {
        setState(234);
        match(LuaParser::T__26);
        break;
      }

      case LuaParser::INT:
      case LuaParser::HEX:
      case LuaParser::FLOAT:
      case LuaParser::HEX_FLOAT: {
        setState(235);
        number();
        break;
      }

      case LuaParser::NORMALSTRING:
      case LuaParser::CHARSTRING:
      case LuaParser::LONGSTRING: {
        setState(236);
        string();
        break;
      }

      case LuaParser::T__27: {
        setState(237);
        match(LuaParser::T__27);
        break;
      }

      case LuaParser::T__16: {
        setState(238);
        functiondef();
        break;
      }

      case LuaParser::T__28:
      case LuaParser::NAME: {
        setState(239);
        prefixexp();
        break;
      }

      case LuaParser::T__32: {
        setState(240);
        tableconstructor();
        break;
      }

      case LuaParser::T__42:
      case LuaParser::T__49:
      case LuaParser::T__52:
      case LuaParser::T__53: {
        setState(241);
        operatorUnary();
        setState(242);
        exp(8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(280);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(278);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(246);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(247);
          operatorPower();
          setState(248);
          exp(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(250);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(251);
          operatorMulDivMod();
          setState(252);
          exp(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(254);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(255);
          operatorAddSub();
          setState(256);
          exp(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(258);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(259);
          operatorStrcat();
          setState(260);
          exp(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(262);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(263);
          operatorComparison();
          setState(264);
          exp(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(266);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(267);
          operatorAnd();
          setState(268);
          exp(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(270);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(271);
          operatorOr();
          setState(272);
          exp(3);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(274);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(275);
          operatorBitwise();
          setState(276);
          exp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(282);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrefixexpContext ------------------------------------------------------------------

LuaParser::PrefixexpContext::PrefixexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarOrExpContext* LuaParser::PrefixexpContext::varOrExp() {
  return getRuleContext<LuaParser::VarOrExpContext>(0);
}

std::vector<LuaParser::NameAndArgsContext *> LuaParser::PrefixexpContext::nameAndArgs() {
  return getRuleContexts<LuaParser::NameAndArgsContext>();
}

LuaParser::NameAndArgsContext* LuaParser::PrefixexpContext::nameAndArgs(size_t i) {
  return getRuleContext<LuaParser::NameAndArgsContext>(i);
}


size_t LuaParser::PrefixexpContext::getRuleIndex() const {
  return LuaParser::RulePrefixexp;
}


LuaParser::PrefixexpContext* LuaParser::prefixexp() {
  PrefixexpContext *_localctx = _tracker.createInstance<PrefixexpContext>(_ctx, getState());
  enterRule(_localctx, 24, LuaParser::RulePrefixexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(283);
    varOrExp();
    setState(287);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(284);
        nameAndArgs(); 
      }
      setState(289);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctioncallContext ------------------------------------------------------------------

LuaParser::FunctioncallContext::FunctioncallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarOrExpContext* LuaParser::FunctioncallContext::varOrExp() {
  return getRuleContext<LuaParser::VarOrExpContext>(0);
}

std::vector<LuaParser::NameAndArgsContext *> LuaParser::FunctioncallContext::nameAndArgs() {
  return getRuleContexts<LuaParser::NameAndArgsContext>();
}

LuaParser::NameAndArgsContext* LuaParser::FunctioncallContext::nameAndArgs(size_t i) {
  return getRuleContext<LuaParser::NameAndArgsContext>(i);
}


size_t LuaParser::FunctioncallContext::getRuleIndex() const {
  return LuaParser::RuleFunctioncall;
}


LuaParser::FunctioncallContext* LuaParser::functioncall() {
  FunctioncallContext *_localctx = _tracker.createInstance<FunctioncallContext>(_ctx, getState());
  enterRule(_localctx, 26, LuaParser::RuleFunctioncall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(290);
    varOrExp();
    setState(292); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(291);
              nameAndArgs();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(294); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarOrExpContext ------------------------------------------------------------------

LuaParser::VarOrExpContext::VarOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::Var_Context* LuaParser::VarOrExpContext::var_() {
  return getRuleContext<LuaParser::Var_Context>(0);
}

LuaParser::ExpContext* LuaParser::VarOrExpContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}


size_t LuaParser::VarOrExpContext::getRuleIndex() const {
  return LuaParser::RuleVarOrExp;
}


LuaParser::VarOrExpContext* LuaParser::varOrExp() {
  VarOrExpContext *_localctx = _tracker.createInstance<VarOrExpContext>(_ctx, getState());
  enterRule(_localctx, 28, LuaParser::RuleVarOrExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(296);
      var_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(297);
      match(LuaParser::T__28);
      setState(298);
      exp(0);
      setState(299);
      match(LuaParser::T__29);
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

//----------------- Var_Context ------------------------------------------------------------------

LuaParser::Var_Context::Var_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::Var_Context::NAME() {
  return getToken(LuaParser::NAME, 0);
}

LuaParser::ExpContext* LuaParser::Var_Context::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

std::vector<LuaParser::VarSuffixContext *> LuaParser::Var_Context::varSuffix() {
  return getRuleContexts<LuaParser::VarSuffixContext>();
}

LuaParser::VarSuffixContext* LuaParser::Var_Context::varSuffix(size_t i) {
  return getRuleContext<LuaParser::VarSuffixContext>(i);
}


size_t LuaParser::Var_Context::getRuleIndex() const {
  return LuaParser::RuleVar_;
}


LuaParser::Var_Context* LuaParser::var_() {
  Var_Context *_localctx = _tracker.createInstance<Var_Context>(_ctx, getState());
  enterRule(_localctx, 30, LuaParser::RuleVar_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(309);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        setState(303);
        match(LuaParser::NAME);
        break;
      }

      case LuaParser::T__28: {
        setState(304);
        match(LuaParser::T__28);
        setState(305);
        exp(0);
        setState(306);
        match(LuaParser::T__29);
        setState(307);
        varSuffix();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(314);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(311);
        varSuffix(); 
      }
      setState(316);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarSuffixContext ------------------------------------------------------------------

LuaParser::VarSuffixContext::VarSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ExpContext* LuaParser::VarSuffixContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

tree::TerminalNode* LuaParser::VarSuffixContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

std::vector<LuaParser::NameAndArgsContext *> LuaParser::VarSuffixContext::nameAndArgs() {
  return getRuleContexts<LuaParser::NameAndArgsContext>();
}

LuaParser::NameAndArgsContext* LuaParser::VarSuffixContext::nameAndArgs(size_t i) {
  return getRuleContext<LuaParser::NameAndArgsContext>(i);
}


size_t LuaParser::VarSuffixContext::getRuleIndex() const {
  return LuaParser::RuleVarSuffix;
}


LuaParser::VarSuffixContext* LuaParser::varSuffix() {
  VarSuffixContext *_localctx = _tracker.createInstance<VarSuffixContext>(_ctx, getState());
  enterRule(_localctx, 32, LuaParser::RuleVarSuffix);
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
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806325674573824) != 0)) {
      setState(317);
      nameAndArgs();
      setState(322);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(329);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__30: {
        setState(323);
        match(LuaParser::T__30);
        setState(324);
        exp(0);
        setState(325);
        match(LuaParser::T__31);
        break;
      }

      case LuaParser::T__22: {
        setState(327);
        match(LuaParser::T__22);
        setState(328);
        match(LuaParser::NAME);
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

//----------------- NameAndArgsContext ------------------------------------------------------------------

LuaParser::NameAndArgsContext::NameAndArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ArgsContext* LuaParser::NameAndArgsContext::args() {
  return getRuleContext<LuaParser::ArgsContext>(0);
}

tree::TerminalNode* LuaParser::NameAndArgsContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::NameAndArgsContext::getRuleIndex() const {
  return LuaParser::RuleNameAndArgs;
}


LuaParser::NameAndArgsContext* LuaParser::nameAndArgs() {
  NameAndArgsContext *_localctx = _tracker.createInstance<NameAndArgsContext>(_ctx, getState());
  enterRule(_localctx, 34, LuaParser::RuleNameAndArgs);
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
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__23) {
      setState(331);
      match(LuaParser::T__23);
      setState(332);
      match(LuaParser::NAME);
    }
    setState(335);
    args();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

LuaParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ExplistContext* LuaParser::ArgsContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::TableconstructorContext* LuaParser::ArgsContext::tableconstructor() {
  return getRuleContext<LuaParser::TableconstructorContext>(0);
}

LuaParser::StringContext* LuaParser::ArgsContext::string() {
  return getRuleContext<LuaParser::StringContext>(0);
}


size_t LuaParser::ArgsContext::getRuleIndex() const {
  return LuaParser::RuleArgs;
}


LuaParser::ArgsContext* LuaParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 36, LuaParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(344);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::T__28: {
        enterOuterAlt(_localctx, 1);
        setState(337);
        match(LuaParser::T__28);
        setState(339);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -43901290643587072) != 0)) {
          setState(338);
          explist();
        }
        setState(341);
        match(LuaParser::T__29);
        break;
      }

      case LuaParser::T__32: {
        enterOuterAlt(_localctx, 2);
        setState(342);
        tableconstructor();
        break;
      }

      case LuaParser::NORMALSTRING:
      case LuaParser::CHARSTRING:
      case LuaParser::LONGSTRING: {
        enterOuterAlt(_localctx, 3);
        setState(343);
        string();
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

//----------------- FunctiondefContext ------------------------------------------------------------------

LuaParser::FunctiondefContext::FunctiondefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::FuncbodyContext* LuaParser::FunctiondefContext::funcbody() {
  return getRuleContext<LuaParser::FuncbodyContext>(0);
}


size_t LuaParser::FunctiondefContext::getRuleIndex() const {
  return LuaParser::RuleFunctiondef;
}


LuaParser::FunctiondefContext* LuaParser::functiondef() {
  FunctiondefContext *_localctx = _tracker.createInstance<FunctiondefContext>(_ctx, getState());
  enterRule(_localctx, 38, LuaParser::RuleFunctiondef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(LuaParser::T__16);
    setState(347);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncbodyContext ------------------------------------------------------------------

LuaParser::FuncbodyContext::FuncbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::BlockContext* LuaParser::FuncbodyContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

LuaParser::ParlistContext* LuaParser::FuncbodyContext::parlist() {
  return getRuleContext<LuaParser::ParlistContext>(0);
}


size_t LuaParser::FuncbodyContext::getRuleIndex() const {
  return LuaParser::RuleFuncbody;
}


LuaParser::FuncbodyContext* LuaParser::funcbody() {
  FuncbodyContext *_localctx = _tracker.createInstance<FuncbodyContext>(_ctx, getState());
  enterRule(_localctx, 40, LuaParser::RuleFuncbody);
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
    setState(349);
    match(LuaParser::T__28);
    setState(351);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__27

    || _la == LuaParser::NAME) {
      setState(350);
      parlist();
    }
    setState(353);
    match(LuaParser::T__29);
    setState(354);
    block();
    setState(355);
    match(LuaParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParlistContext ------------------------------------------------------------------

LuaParser::ParlistContext::ParlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::NamelistContext* LuaParser::ParlistContext::namelist() {
  return getRuleContext<LuaParser::NamelistContext>(0);
}


size_t LuaParser::ParlistContext::getRuleIndex() const {
  return LuaParser::RuleParlist;
}


LuaParser::ParlistContext* LuaParser::parlist() {
  ParlistContext *_localctx = _tracker.createInstance<ParlistContext>(_ctx, getState());
  enterRule(_localctx, 42, LuaParser::RuleParlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(363);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(357);
        namelist();
        setState(360);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LuaParser::T__14) {
          setState(358);
          match(LuaParser::T__14);
          setState(359);
          match(LuaParser::T__27);
        }
        break;
      }

      case LuaParser::T__27: {
        enterOuterAlt(_localctx, 2);
        setState(362);
        match(LuaParser::T__27);
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

//----------------- TableconstructorContext ------------------------------------------------------------------

LuaParser::TableconstructorContext::TableconstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::FieldlistContext* LuaParser::TableconstructorContext::fieldlist() {
  return getRuleContext<LuaParser::FieldlistContext>(0);
}


size_t LuaParser::TableconstructorContext::getRuleIndex() const {
  return LuaParser::RuleTableconstructor;
}


LuaParser::TableconstructorContext* LuaParser::tableconstructor() {
  TableconstructorContext *_localctx = _tracker.createInstance<TableconstructorContext>(_ctx, getState());
  enterRule(_localctx, 44, LuaParser::RuleTableconstructor);
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
    setState(365);
    match(LuaParser::T__32);
    setState(367);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -43901288496103424) != 0)) {
      setState(366);
      fieldlist();
    }
    setState(369);
    match(LuaParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldlistContext ------------------------------------------------------------------

LuaParser::FieldlistContext::FieldlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::FieldContext *> LuaParser::FieldlistContext::field() {
  return getRuleContexts<LuaParser::FieldContext>();
}

LuaParser::FieldContext* LuaParser::FieldlistContext::field(size_t i) {
  return getRuleContext<LuaParser::FieldContext>(i);
}

std::vector<LuaParser::FieldsepContext *> LuaParser::FieldlistContext::fieldsep() {
  return getRuleContexts<LuaParser::FieldsepContext>();
}

LuaParser::FieldsepContext* LuaParser::FieldlistContext::fieldsep(size_t i) {
  return getRuleContext<LuaParser::FieldsepContext>(i);
}


size_t LuaParser::FieldlistContext::getRuleIndex() const {
  return LuaParser::RuleFieldlist;
}


LuaParser::FieldlistContext* LuaParser::fieldlist() {
  FieldlistContext *_localctx = _tracker.createInstance<FieldlistContext>(_ctx, getState());
  enterRule(_localctx, 46, LuaParser::RuleFieldlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(371);
    field();
    setState(377);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(372);
        fieldsep();
        setState(373);
        field(); 
      }
      setState(379);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
    setState(381);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::T__0

    || _la == LuaParser::T__14) {
      setState(380);
      fieldsep();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

LuaParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::ExpContext *> LuaParser::FieldContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::FieldContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

tree::TerminalNode* LuaParser::FieldContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::FieldContext::getRuleIndex() const {
  return LuaParser::RuleField;
}


LuaParser::FieldContext* LuaParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 48, LuaParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(393);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(383);
      match(LuaParser::T__30);
      setState(384);
      exp(0);
      setState(385);
      match(LuaParser::T__31);
      setState(386);
      match(LuaParser::T__1);
      setState(387);
      exp(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(389);
      match(LuaParser::NAME);
      setState(390);
      match(LuaParser::T__1);
      setState(391);
      exp(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(392);
      exp(0);
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

//----------------- FieldsepContext ------------------------------------------------------------------

LuaParser::FieldsepContext::FieldsepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::FieldsepContext::getRuleIndex() const {
  return LuaParser::RuleFieldsep;
}


LuaParser::FieldsepContext* LuaParser::fieldsep() {
  FieldsepContext *_localctx = _tracker.createInstance<FieldsepContext>(_ctx, getState());
  enterRule(_localctx, 50, LuaParser::RuleFieldsep);
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
    setState(395);
    _la = _input->LA(1);
    if (!(_la == LuaParser::T__0

    || _la == LuaParser::T__14)) {
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

//----------------- OperatorOrContext ------------------------------------------------------------------

LuaParser::OperatorOrContext::OperatorOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorOrContext::getRuleIndex() const {
  return LuaParser::RuleOperatorOr;
}


LuaParser::OperatorOrContext* LuaParser::operatorOr() {
  OperatorOrContext *_localctx = _tracker.createInstance<OperatorOrContext>(_ctx, getState());
  enterRule(_localctx, 52, LuaParser::RuleOperatorOr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    match(LuaParser::T__34);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorAndContext ------------------------------------------------------------------

LuaParser::OperatorAndContext::OperatorAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorAndContext::getRuleIndex() const {
  return LuaParser::RuleOperatorAnd;
}


LuaParser::OperatorAndContext* LuaParser::operatorAnd() {
  OperatorAndContext *_localctx = _tracker.createInstance<OperatorAndContext>(_ctx, getState());
  enterRule(_localctx, 54, LuaParser::RuleOperatorAnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    match(LuaParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorComparisonContext ------------------------------------------------------------------

LuaParser::OperatorComparisonContext::OperatorComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorComparisonContext::getRuleIndex() const {
  return LuaParser::RuleOperatorComparison;
}


LuaParser::OperatorComparisonContext* LuaParser::operatorComparison() {
  OperatorComparisonContext *_localctx = _tracker.createInstance<OperatorComparisonContext>(_ctx, getState());
  enterRule(_localctx, 56, LuaParser::RuleOperatorComparison);
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
    setState(401);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2061585874944) != 0))) {
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

//----------------- OperatorStrcatContext ------------------------------------------------------------------

LuaParser::OperatorStrcatContext::OperatorStrcatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorStrcatContext::getRuleIndex() const {
  return LuaParser::RuleOperatorStrcat;
}


LuaParser::OperatorStrcatContext* LuaParser::operatorStrcat() {
  OperatorStrcatContext *_localctx = _tracker.createInstance<OperatorStrcatContext>(_ctx, getState());
  enterRule(_localctx, 58, LuaParser::RuleOperatorStrcat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(LuaParser::T__40);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorAddSubContext ------------------------------------------------------------------

LuaParser::OperatorAddSubContext::OperatorAddSubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorAddSubContext::getRuleIndex() const {
  return LuaParser::RuleOperatorAddSub;
}


LuaParser::OperatorAddSubContext* LuaParser::operatorAddSub() {
  OperatorAddSubContext *_localctx = _tracker.createInstance<OperatorAddSubContext>(_ctx, getState());
  enterRule(_localctx, 60, LuaParser::RuleOperatorAddSub);
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
    setState(405);
    _la = _input->LA(1);
    if (!(_la == LuaParser::T__41

    || _la == LuaParser::T__42)) {
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

//----------------- OperatorMulDivModContext ------------------------------------------------------------------

LuaParser::OperatorMulDivModContext::OperatorMulDivModContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorMulDivModContext::getRuleIndex() const {
  return LuaParser::RuleOperatorMulDivMod;
}


LuaParser::OperatorMulDivModContext* LuaParser::operatorMulDivMod() {
  OperatorMulDivModContext *_localctx = _tracker.createInstance<OperatorMulDivModContext>(_ctx, getState());
  enterRule(_localctx, 62, LuaParser::RuleOperatorMulDivMod);
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
    setState(407);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 263882790666240) != 0))) {
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

//----------------- OperatorBitwiseContext ------------------------------------------------------------------

LuaParser::OperatorBitwiseContext::OperatorBitwiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorBitwiseContext::getRuleIndex() const {
  return LuaParser::RuleOperatorBitwise;
}


LuaParser::OperatorBitwiseContext* LuaParser::operatorBitwise() {
  OperatorBitwiseContext *_localctx = _tracker.createInstance<OperatorBitwiseContext>(_ctx, getState());
  enterRule(_localctx, 64, LuaParser::RuleOperatorBitwise);
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
    setState(409);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8725724278030336) != 0))) {
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

//----------------- OperatorUnaryContext ------------------------------------------------------------------

LuaParser::OperatorUnaryContext::OperatorUnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorUnaryContext::getRuleIndex() const {
  return LuaParser::RuleOperatorUnary;
}


LuaParser::OperatorUnaryContext* LuaParser::operatorUnary() {
  OperatorUnaryContext *_localctx = _tracker.createInstance<OperatorUnaryContext>(_ctx, getState());
  enterRule(_localctx, 66, LuaParser::RuleOperatorUnary);
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
    setState(411);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28156293764087808) != 0))) {
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

//----------------- OperatorPowerContext ------------------------------------------------------------------

LuaParser::OperatorPowerContext::OperatorPowerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorPowerContext::getRuleIndex() const {
  return LuaParser::RuleOperatorPower;
}


LuaParser::OperatorPowerContext* LuaParser::operatorPower() {
  OperatorPowerContext *_localctx = _tracker.createInstance<OperatorPowerContext>(_ctx, getState());
  enterRule(_localctx, 68, LuaParser::RuleOperatorPower);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
    match(LuaParser::T__54);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

LuaParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::NumberContext::INT() {
  return getToken(LuaParser::INT, 0);
}

tree::TerminalNode* LuaParser::NumberContext::HEX() {
  return getToken(LuaParser::HEX, 0);
}

tree::TerminalNode* LuaParser::NumberContext::FLOAT() {
  return getToken(LuaParser::FLOAT, 0);
}

tree::TerminalNode* LuaParser::NumberContext::HEX_FLOAT() {
  return getToken(LuaParser::HEX_FLOAT, 0);
}


size_t LuaParser::NumberContext::getRuleIndex() const {
  return LuaParser::RuleNumber;
}


LuaParser::NumberContext* LuaParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 70, LuaParser::RuleNumber);
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
    setState(415);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -1152921504606846976) != 0))) {
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

//----------------- StringContext ------------------------------------------------------------------

LuaParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::StringContext::NORMALSTRING() {
  return getToken(LuaParser::NORMALSTRING, 0);
}

tree::TerminalNode* LuaParser::StringContext::CHARSTRING() {
  return getToken(LuaParser::CHARSTRING, 0);
}

tree::TerminalNode* LuaParser::StringContext::LONGSTRING() {
  return getToken(LuaParser::LONGSTRING, 0);
}


size_t LuaParser::StringContext::getRuleIndex() const {
  return LuaParser::RuleString;
}


LuaParser::StringContext* LuaParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 72, LuaParser::RuleString);
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
    setState(417);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806316530991104) != 0))) {
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

bool LuaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 11: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LuaParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void LuaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  luaParserInitialize();
#else
  ::antlr4::internal::call_once(luaParserOnceFlag, luaParserInitialize);
#endif
}
