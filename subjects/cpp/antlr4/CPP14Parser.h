#include "CPP14ParserBase.h"

// Generated from CPP14Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  CPP14Parser : public CPP14ParserBase {
public:
  enum {
    IntegerLiteral = 1, CharacterLiteral = 2, FloatingLiteral = 3, StringLiteral = 4, 
    BooleanLiteral = 5, PointerLiteral = 6, UserDefinedLiteral = 7, MultiLineMacro = 8, 
    Directive = 9, Alignas = 10, Alignof = 11, Asm = 12, Auto = 13, Bool = 14, 
    Break = 15, Case = 16, Catch = 17, Char = 18, Char16 = 19, Char32 = 20, 
    Class = 21, Const = 22, Constexpr = 23, Const_cast = 24, Continue = 25, 
    Decltype = 26, Default = 27, Delete = 28, Do = 29, Double = 30, Dynamic_cast = 31, 
    Else = 32, Enum = 33, Explicit = 34, Export = 35, Extern = 36, False_ = 37, 
    Final = 38, Float = 39, For = 40, Friend = 41, Goto = 42, If = 43, Inline = 44, 
    Int = 45, Long = 46, Mutable = 47, Namespace = 48, New = 49, Noexcept = 50, 
    Nullptr = 51, Operator = 52, Override = 53, Private = 54, Protected = 55, 
    Public = 56, Register = 57, Reinterpret_cast = 58, Return = 59, Short = 60, 
    Signed = 61, Sizeof = 62, Static = 63, Static_assert = 64, Static_cast = 65, 
    Struct = 66, Switch = 67, Template = 68, This = 69, Thread_local = 70, 
    Throw = 71, True_ = 72, Try = 73, Typedef = 74, Typeid_ = 75, Typename_ = 76, 
    Union = 77, Unsigned = 78, Using = 79, Virtual = 80, Void = 81, Volatile = 82, 
    Wchar = 83, While = 84, LeftParen = 85, RightParen = 86, LeftBracket = 87, 
    RightBracket = 88, LeftBrace = 89, RightBrace = 90, Plus = 91, Minus = 92, 
    Star = 93, Div = 94, Mod = 95, Caret = 96, And = 97, Or = 98, Tilde = 99, 
    Not = 100, Assign = 101, Less = 102, Greater = 103, PlusAssign = 104, 
    MinusAssign = 105, StarAssign = 106, DivAssign = 107, ModAssign = 108, 
    XorAssign = 109, AndAssign = 110, OrAssign = 111, LeftShiftAssign = 112, 
    RightShiftAssign = 113, Equal = 114, NotEqual = 115, LessEqual = 116, 
    GreaterEqual = 117, AndAnd = 118, OrOr = 119, PlusPlus = 120, MinusMinus = 121, 
    Comma = 122, ArrowStar = 123, Arrow = 124, Question = 125, Colon = 126, 
    Doublecolon = 127, Semi = 128, Dot = 129, DotStar = 130, Ellipsis = 131, 
    Identifier = 132, DecimalLiteral = 133, OctalLiteral = 134, HexadecimalLiteral = 135, 
    BinaryLiteral = 136, Integersuffix = 137, UserDefinedIntegerLiteral = 138, 
    UserDefinedFloatingLiteral = 139, UserDefinedStringLiteral = 140, UserDefinedCharacterLiteral = 141, 
    Whitespace = 142, Newline = 143, BlockComment = 144, LineComment = 145
  };

  enum {
    RuleTranslationUnit = 0, RuleIdExpression = 1, RuleUnqualifiedId = 2, 
    RuleQualifiedId = 3, RuleNestedNameSpecifier = 4, RuleLambdaExpression = 5, 
    RuleLambdaIntroducer = 6, RuleLambdaCapture = 7, RuleCaptureDefault = 8, 
    RuleCaptureList = 9, RuleCapture = 10, RuleSimpleCapture = 11, RuleInitcapture = 12, 
    RuleLambdaDeclarator = 13, RulePostfixExpression = 14, RuleTmp3 = 15, 
    RuleTmp1 = 16, RuleTmp2 = 17, RulePostfixPrimary = 18, RulePostfixPrimary1 = 19, 
    RulePostfixSuffix = 20, RuleTypeIdOfTheTypeId = 21, RuleExpressionList = 22, 
    RulePseudoDestructorName = 23, RuleUnaryExpression = 24, RuleUnaryOperator = 25, 
    RuleNewExpression_ = 26, RuleNewPlacement = 27, RuleNewTypeId = 28, 
    RuleNewDeclarator_ = 29, RuleNoPointerNewDeclarator = 30, RuleNewInitializer_ = 31, 
    RuleNoExceptExpression = 32, RuleCastExpression = 33, RuleLogicalOrExpression = 34, 
    RuleConditionalExpression = 35, RuleAssignmentExpression = 36, RuleAssignmentOperator = 37, 
    RuleExpression = 38, RuleStatement = 39, RuleLabeledStatement = 40, 
    RuleExpressionStatement = 41, RuleCompoundStatement = 42, RuleStatementSeq = 43, 
    RuleSelectionStatement = 44, RuleCondition = 45, RuleIterationStatement = 46, 
    RuleForInitStatement = 47, RuleForRangeDeclaration = 48, RuleForRangeInitializer = 49, 
    RuleJumpStatement = 50, RuleDeclarationStatement = 51, RuleDeclarationseq = 52, 
    RuleDeclaration = 53, RuleBlockDeclaration = 54, RuleAliasDeclaration = 55, 
    RuleSimpleDeclaration = 56, RuleStaticAssertDeclaration = 57, RuleEmptyDeclaration_ = 58, 
    RuleAttributeDeclaration = 59, RuleDeclSpecifier = 60, RuleDeclSpecifierSeq = 61, 
    RuleStorageClassSpecifier = 62, RuleFunctionSpecifier = 63, RuleTypeSpecifier = 64, 
    RuleTrailingTypeSpecifier = 65, RuleTypeSpecifierSeq = 66, RuleTrailingTypeSpecifierSeq = 67, 
    RuleSimpleTypeLengthModifier = 68, RuleSimpleTypeSignednessModifier = 69, 
    RuleSimpleTypeSpecifier = 70, RuleTheTypeName = 71, RuleDecltypeSpecifier = 72, 
    RuleElaboratedTypeSpecifier = 73, RuleEnumSpecifier = 74, RuleEnumHead = 75, 
    RuleOpaqueEnumDeclaration = 76, RuleEnumkey = 77, RuleEnumbase = 78, 
    RuleEnumeratorList = 79, RuleEnumeratorDefinition = 80, RuleNamespaceDefinition = 81, 
    RuleNamespaceAliasDefinition = 82, RuleQualifiednamespacespecifier = 83, 
    RuleUsingDeclaration = 84, RuleUsingDirective = 85, RuleAsmDefinition = 86, 
    RuleLinkageSpecification = 87, RuleAttributeSpecifierSeq = 88, RuleAttributeSpecifier = 89, 
    RuleAlignmentspecifier = 90, RuleAttributeList = 91, RuleAttribute = 92, 
    RuleAttributeArgumentClause = 93, RuleBalancedTokenSeq = 94, RuleBalancedtoken = 95, 
    RuleInitDeclaratorList = 96, RuleInitDeclarator = 97, RuleDeclarator = 98, 
    RulePointerDeclarator = 99, RuleNoPointerDeclarator = 100, RuleParametersAndQualifiers = 101, 
    RuleTrailingReturnType = 102, RulePointerOperator = 103, RuleCvqualifierseq = 104, 
    RuleCvQualifier = 105, RuleRefqualifier = 106, RuleDeclaratorid = 107, 
    RuleTheTypeId = 108, RuleAbstractDeclarator = 109, RulePointerAbstractDeclarator = 110, 
    RuleNoPointerAbstractDeclarator = 111, RuleAbstractPackDeclarator = 112, 
    RuleNoPointerAbstractPackDeclarator = 113, RuleParameterDeclarationClause = 114, 
    RuleParameterDeclarationList = 115, RuleParameterDeclaration = 116, 
    RuleFunctionDefinition = 117, RuleFunctionBody = 118, RuleInitializer = 119, 
    RuleBraceOrEqualInitializer = 120, RuleInitializerClause = 121, RuleInitializerList = 122, 
    RuleBracedInitList = 123, RuleClassName = 124, RuleClassSpecifier = 125, 
    RuleClassHead = 126, RuleClassHeadName = 127, RuleClassVirtSpecifier = 128, 
    RuleClassKey = 129, RuleMemberSpecification = 130, RuleMemberdeclaration = 131, 
    RuleMemberDeclaratorList = 132, RuleMemberDeclarator = 133, RuleVirtualSpecifierSeq = 134, 
    RuleVirtualSpecifier = 135, RulePureSpecifier = 136, RuleBaseClause = 137, 
    RuleBaseSpecifierList = 138, RuleBaseSpecifier = 139, RuleClassOrDeclType = 140, 
    RuleBaseTypeSpecifier = 141, RuleAccessSpecifier = 142, RuleConversionFunctionId = 143, 
    RuleConversionTypeId = 144, RuleConversionDeclarator = 145, RuleConstructorInitializer = 146, 
    RuleMemInitializerList = 147, RuleMemInitializer = 148, RuleMeminitializerid = 149, 
    RuleOperatorFunctionId = 150, RuleLiteralOperatorId = 151, RuleTemplateDeclaration = 152, 
    RuleTemplateparameterList = 153, RuleTemplateParameter = 154, RuleTypeParameter = 155, 
    RuleTemplateId = 156, RuleTemplateArgumentList = 157, RuleTemplateArgument = 158, 
    RuleTypeNameSpecifier = 159, RuleExplicitInstantiation = 160, RuleExplicitSpecialization = 161, 
    RuleTryBlock = 162, RuleFunctionTryBlock = 163, RuleHandlerSeq = 164, 
    RuleHandler = 165, RuleExceptionDeclaration = 166, RuleThrowExpression = 167, 
    RuleExceptionSpecification = 168, RuleDynamicExceptionSpecification = 169, 
    RuleTypeIdList = 170, RuleNoeExceptSpecification = 171, RuleTheOperator = 172, 
    RuleLiteral = 173
  };

  explicit CPP14Parser(antlr4::TokenStream *input);

  CPP14Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CPP14Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class TranslationUnitContext;
  class IdExpressionContext;
  class UnqualifiedIdContext;
  class QualifiedIdContext;
  class NestedNameSpecifierContext;
  class LambdaExpressionContext;
  class LambdaIntroducerContext;
  class LambdaCaptureContext;
  class CaptureDefaultContext;
  class CaptureListContext;
  class CaptureContext;
  class SimpleCaptureContext;
  class InitcaptureContext;
  class LambdaDeclaratorContext;
  class PostfixExpressionContext;
  class Tmp3Context;
  class Tmp1Context;
  class Tmp2Context;
  class PostfixPrimaryContext;
  class PostfixPrimary1Context;
  class PostfixSuffixContext;
  class TypeIdOfTheTypeIdContext;
  class ExpressionListContext;
  class PseudoDestructorNameContext;
  class UnaryExpressionContext;
  class UnaryOperatorContext;
  class NewExpression_Context;
  class NewPlacementContext;
  class NewTypeIdContext;
  class NewDeclarator_Context;
  class NoPointerNewDeclaratorContext;
  class NewInitializer_Context;
  class NoExceptExpressionContext;
  class CastExpressionContext;
  class LogicalOrExpressionContext;
  class ConditionalExpressionContext;
  class AssignmentExpressionContext;
  class AssignmentOperatorContext;
  class ExpressionContext;
  class StatementContext;
  class LabeledStatementContext;
  class ExpressionStatementContext;
  class CompoundStatementContext;
  class StatementSeqContext;
  class SelectionStatementContext;
  class ConditionContext;
  class IterationStatementContext;
  class ForInitStatementContext;
  class ForRangeDeclarationContext;
  class ForRangeInitializerContext;
  class JumpStatementContext;
  class DeclarationStatementContext;
  class DeclarationseqContext;
  class DeclarationContext;
  class BlockDeclarationContext;
  class AliasDeclarationContext;
  class SimpleDeclarationContext;
  class StaticAssertDeclarationContext;
  class EmptyDeclaration_Context;
  class AttributeDeclarationContext;
  class DeclSpecifierContext;
  class DeclSpecifierSeqContext;
  class StorageClassSpecifierContext;
  class FunctionSpecifierContext;
  class TypeSpecifierContext;
  class TrailingTypeSpecifierContext;
  class TypeSpecifierSeqContext;
  class TrailingTypeSpecifierSeqContext;
  class SimpleTypeLengthModifierContext;
  class SimpleTypeSignednessModifierContext;
  class SimpleTypeSpecifierContext;
  class TheTypeNameContext;
  class DecltypeSpecifierContext;
  class ElaboratedTypeSpecifierContext;
  class EnumSpecifierContext;
  class EnumHeadContext;
  class OpaqueEnumDeclarationContext;
  class EnumkeyContext;
  class EnumbaseContext;
  class EnumeratorListContext;
  class EnumeratorDefinitionContext;
  class NamespaceDefinitionContext;
  class NamespaceAliasDefinitionContext;
  class QualifiednamespacespecifierContext;
  class UsingDeclarationContext;
  class UsingDirectiveContext;
  class AsmDefinitionContext;
  class LinkageSpecificationContext;
  class AttributeSpecifierSeqContext;
  class AttributeSpecifierContext;
  class AlignmentspecifierContext;
  class AttributeListContext;
  class AttributeContext;
  class AttributeArgumentClauseContext;
  class BalancedTokenSeqContext;
  class BalancedtokenContext;
  class InitDeclaratorListContext;
  class InitDeclaratorContext;
  class DeclaratorContext;
  class PointerDeclaratorContext;
  class NoPointerDeclaratorContext;
  class ParametersAndQualifiersContext;
  class TrailingReturnTypeContext;
  class PointerOperatorContext;
  class CvqualifierseqContext;
  class CvQualifierContext;
  class RefqualifierContext;
  class DeclaratoridContext;
  class TheTypeIdContext;
  class AbstractDeclaratorContext;
  class PointerAbstractDeclaratorContext;
  class NoPointerAbstractDeclaratorContext;
  class AbstractPackDeclaratorContext;
  class NoPointerAbstractPackDeclaratorContext;
  class ParameterDeclarationClauseContext;
  class ParameterDeclarationListContext;
  class ParameterDeclarationContext;
  class FunctionDefinitionContext;
  class FunctionBodyContext;
  class InitializerContext;
  class BraceOrEqualInitializerContext;
  class InitializerClauseContext;
  class InitializerListContext;
  class BracedInitListContext;
  class ClassNameContext;
  class ClassSpecifierContext;
  class ClassHeadContext;
  class ClassHeadNameContext;
  class ClassVirtSpecifierContext;
  class ClassKeyContext;
  class MemberSpecificationContext;
  class MemberdeclarationContext;
  class MemberDeclaratorListContext;
  class MemberDeclaratorContext;
  class VirtualSpecifierSeqContext;
  class VirtualSpecifierContext;
  class PureSpecifierContext;
  class BaseClauseContext;
  class BaseSpecifierListContext;
  class BaseSpecifierContext;
  class ClassOrDeclTypeContext;
  class BaseTypeSpecifierContext;
  class AccessSpecifierContext;
  class ConversionFunctionIdContext;
  class ConversionTypeIdContext;
  class ConversionDeclaratorContext;
  class ConstructorInitializerContext;
  class MemInitializerListContext;
  class MemInitializerContext;
  class MeminitializeridContext;
  class OperatorFunctionIdContext;
  class LiteralOperatorIdContext;
  class TemplateDeclarationContext;
  class TemplateparameterListContext;
  class TemplateParameterContext;
  class TypeParameterContext;
  class TemplateIdContext;
  class TemplateArgumentListContext;
  class TemplateArgumentContext;
  class TypeNameSpecifierContext;
  class ExplicitInstantiationContext;
  class ExplicitSpecializationContext;
  class TryBlockContext;
  class FunctionTryBlockContext;
  class HandlerSeqContext;
  class HandlerContext;
  class ExceptionDeclarationContext;
  class ThrowExpressionContext;
  class ExceptionSpecificationContext;
  class DynamicExceptionSpecificationContext;
  class TypeIdListContext;
  class NoeExceptSpecificationContext;
  class TheOperatorContext;
  class LiteralContext; 

  class  TranslationUnitContext : public antlr4::ParserRuleContext {
  public:
    TranslationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    DeclarationseqContext *declarationseq();

   
  };

  TranslationUnitContext* translationUnit();

  class  IdExpressionContext : public antlr4::ParserRuleContext {
  public:
    IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedIdContext *unqualifiedId();
    QualifiedIdContext *qualifiedId();

   
  };

  IdExpressionContext* idExpression();

  class  UnqualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    OperatorFunctionIdContext *operatorFunctionId();
    ConversionFunctionIdContext *conversionFunctionId();
    LiteralOperatorIdContext *literalOperatorId();
    antlr4::tree::TerminalNode *Tilde();
    ClassNameContext *className();
    DecltypeSpecifierContext *decltypeSpecifier();
    TemplateIdContext *templateId();

   
  };

  UnqualifiedIdContext* unqualifiedId();

  class  QualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestedNameSpecifierContext *nestedNameSpecifier();
    UnqualifiedIdContext *unqualifiedId();
    antlr4::tree::TerminalNode *Template();

   
  };

  QualifiedIdContext* qualifiedId();

  class  NestedNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    NestedNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Doublecolon();
    TheTypeNameContext *theTypeName();
    DecltypeSpecifierContext *decltypeSpecifier();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *Template();
    TemplateArgumentListContext *templateArgumentList();

   
  };

  NestedNameSpecifierContext* nestedNameSpecifier();
  NestedNameSpecifierContext* nestedNameSpecifier(int precedence);
  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaIntroducerContext *lambdaIntroducer();
    CompoundStatementContext *compoundStatement();
    LambdaDeclaratorContext *lambdaDeclarator();

   
  };

  LambdaExpressionContext* lambdaExpression();

  class  LambdaIntroducerContext : public antlr4::ParserRuleContext {
  public:
    LambdaIntroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    LambdaCaptureContext *lambdaCapture();

   
  };

  LambdaIntroducerContext* lambdaIntroducer();

  class  LambdaCaptureContext : public antlr4::ParserRuleContext {
  public:
    LambdaCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaptureListContext *captureList();
    CaptureDefaultContext *captureDefault();
    antlr4::tree::TerminalNode *Comma();

   
  };

  LambdaCaptureContext* lambdaCapture();

  class  CaptureDefaultContext : public antlr4::ParserRuleContext {
  public:
    CaptureDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Assign();

   
  };

  CaptureDefaultContext* captureDefault();

  class  CaptureListContext : public antlr4::ParserRuleContext {
  public:
    CaptureListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaptureContext *> capture();
    CaptureContext* capture(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();

   
  };

  CaptureListContext* captureList();

  class  CaptureContext : public antlr4::ParserRuleContext {
  public:
    CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleCaptureContext *simpleCapture();
    InitcaptureContext *initcapture();

   
  };

  CaptureContext* capture();

  class  SimpleCaptureContext : public antlr4::ParserRuleContext {
  public:
    SimpleCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *This();

   
  };

  SimpleCaptureContext* simpleCapture();

  class  InitcaptureContext : public antlr4::ParserRuleContext {
  public:
    InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *And();

   
  };

  InitcaptureContext* initcapture();

  class  LambdaDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdaDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    antlr4::tree::TerminalNode *Mutable();
    ExceptionSpecificationContext *exceptionSpecification();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    TrailingReturnTypeContext *trailingReturnType();

   
  };

  LambdaDeclaratorContext* lambdaDeclarator();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixPrimaryContext *postfixPrimary();
    std::vector<PostfixSuffixContext *> postfixSuffix();
    PostfixSuffixContext* postfixSuffix(size_t i);

   
  };

  PostfixExpressionContext* postfixExpression();

  class  Tmp3Context : public antlr4::ParserRuleContext {
  public:
    Tmp3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Char16();
    antlr4::tree::TerminalNode *Char32();
    antlr4::tree::TerminalNode *Wchar();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Signed();
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Auto();
    DecltypeSpecifierContext *decltypeSpecifier();
    TheTypeNameContext *theTypeName();

   
  };

  Tmp3Context* tmp3();

  class  Tmp1Context : public antlr4::ParserRuleContext {
  public:
    Tmp1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tmp3Context *tmp3();
    Tmp2Context *tmp2();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();
    TheTypeNameContext *theTypeName();

   
  };

  Tmp1Context* tmp1();

  class  Tmp2Context : public antlr4::ParserRuleContext {
  public:
    Tmp2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionListContext *expressionList();
    BracedInitListContext *bracedInitList();

   
  };

  Tmp2Context* tmp2();

  class  PostfixPrimaryContext : public antlr4::ParserRuleContext {
  public:
    PostfixPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    antlr4::tree::TerminalNode *This();
    PostfixPrimary1Context *postfixPrimary1();
    antlr4::tree::TerminalNode *Tilde();
    ClassNameContext *className();
    DecltypeSpecifierContext *decltypeSpecifier();
    NestedNameSpecifierContext *nestedNameSpecifier();
    UnqualifiedIdContext *unqualifiedId();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    CompoundStatementContext *compoundStatement();
    LambdaCaptureContext *lambdaCapture();
    LambdaDeclaratorContext *lambdaDeclarator();
    Tmp1Context *tmp1();
    TypeNameSpecifierContext *typeNameSpecifier();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    BracedInitListContext *bracedInitList();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *Less();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Greater();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Dynamic_cast();
    antlr4::tree::TerminalNode *Static_cast();
    antlr4::tree::TerminalNode *Reinterpret_cast();
    antlr4::tree::TerminalNode *Const_cast();
    antlr4::tree::TerminalNode *Typeid_();

   
  };

  PostfixPrimaryContext* postfixPrimary();

  class  PostfixPrimary1Context : public antlr4::ParserRuleContext {
  public:
    PostfixPrimary1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    std::vector<TypeSpecifierContext *> typeSpecifier();
    TypeSpecifierContext* typeSpecifier(size_t i);
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    ConversionDeclaratorContext *conversionDeclarator();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TheOperatorContext *theOperator();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *UserDefinedStringLiteral();
    TemplateArgumentListContext *templateArgumentList();

   
  };

  PostfixPrimary1Context* postfixPrimary1();

  class  PostfixSuffixContext : public antlr4::ParserRuleContext {
  public:
    PostfixSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ExpressionContext *expression();
    BracedInitListContext *bracedInitList();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Arrow();
    IdExpressionContext *idExpression();
    PseudoDestructorNameContext *pseudoDestructorName();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();

   
  };

  PostfixSuffixContext* postfixSuffix();

  class  TypeIdOfTheTypeIdContext : public antlr4::ParserRuleContext {
  public:
    TypeIdOfTheTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typeid_();

   
  };

  TypeIdOfTheTypeIdContext* typeIdOfTheTypeId();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerListContext *initializerList();

   
  };

  ExpressionListContext* expressionList();

  class  PseudoDestructorNameContext : public antlr4::ParserRuleContext {
  public:
    PseudoDestructorNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tilde();
    std::vector<TheTypeNameContext *> theTypeName();
    TheTypeNameContext* theTypeName(size_t i);
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Doublecolon();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();
    DecltypeSpecifierContext *decltypeSpecifier();

   
  };

  PseudoDestructorNameContext* pseudoDestructorName();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    UnaryOperatorContext *unaryOperator();
    antlr4::tree::TerminalNode *Sizeof();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Alignof();
    NoExceptExpressionContext *noExceptExpression();
    NewExpression_Context *newExpression_();
    antlr4::tree::TerminalNode *Delete();
    CastExpressionContext *castExpression();
    antlr4::tree::TerminalNode *Doublecolon();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();

   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Not();

   
  };

  UnaryOperatorContext* unaryOperator();

  class  NewExpression_Context : public antlr4::ParserRuleContext {
  public:
    NewExpression_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    NewTypeIdContext *newTypeId();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Doublecolon();
    NewPlacementContext *newPlacement();
    NewInitializer_Context *newInitializer_();

   
  };

  NewExpression_Context* newExpression_();

  class  NewPlacementContext : public antlr4::ParserRuleContext {
  public:
    NewPlacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();

   
  };

  NewPlacementContext* newPlacement();

  class  NewTypeIdContext : public antlr4::ParserRuleContext {
  public:
    NewTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    NewDeclarator_Context *newDeclarator_();

   
  };

  NewTypeIdContext* newTypeId();

  class  NewDeclarator_Context : public antlr4::ParserRuleContext {
  public:
    NewDeclarator_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerOperatorContext *pointerOperator();
    NewDeclarator_Context *newDeclarator_();
    NoPointerNewDeclaratorContext *noPointerNewDeclarator();

   
  };

  NewDeclarator_Context* newDeclarator_();

  class  NoPointerNewDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerNewDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightBracket();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    NoPointerNewDeclaratorContext *noPointerNewDeclarator();
    ConditionalExpressionContext *conditionalExpression();

   
  };

  NoPointerNewDeclaratorContext* noPointerNewDeclarator();
  NoPointerNewDeclaratorContext* noPointerNewDeclarator(int precedence);
  class  NewInitializer_Context : public antlr4::ParserRuleContext {
  public:
    NewInitializer_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionListContext *expressionList();
    BracedInitListContext *bracedInitList();

   
  };

  NewInitializer_Context* newInitializer_();

  class  NoExceptExpressionContext : public antlr4::ParserRuleContext {
  public:
    NoExceptExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();

   
  };

  NoExceptExpressionContext* noExceptExpression();

  class  CastExpressionContext : public antlr4::ParserRuleContext {
  public:
    CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();
    CastExpressionContext *castExpression();

   
  };

  CastExpressionContext* castExpression();

  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CastExpressionContext *> castExpression();
    CastExpressionContext* castExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LessEqual();
    antlr4::tree::TerminalNode* LessEqual(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GreaterEqual();
    antlr4::tree::TerminalNode* GreaterEqual(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Caret();
    antlr4::tree::TerminalNode* Caret(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Equal();
    antlr4::tree::TerminalNode* Equal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NotEqual();
    antlr4::tree::TerminalNode* NotEqual(size_t i);
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AndAnd();
    antlr4::tree::TerminalNode* AndAnd(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OrOr();
    antlr4::tree::TerminalNode* OrOr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Plus();
    antlr4::tree::TerminalNode* Plus(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Minus();
    antlr4::tree::TerminalNode* Minus(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Star();
    antlr4::tree::TerminalNode* Star(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Div();
    antlr4::tree::TerminalNode* Div(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Mod();
    antlr4::tree::TerminalNode* Mod(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DotStar();
    antlr4::tree::TerminalNode* DotStar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ArrowStar();
    antlr4::tree::TerminalNode* ArrowStar(size_t i);

   
  };

  LogicalOrExpressionContext* logicalOrExpression();

  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *Question();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Colon();
    AssignmentExpressionContext *assignmentExpression();

   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    LogicalOrExpressionContext *logicalOrExpression();
    AssignmentOperatorContext *assignmentOperator();
    InitializerClauseContext *initializerClause();
    ThrowExpressionContext *throwExpression();

   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();

   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentExpressionContext *> assignmentExpression();
    AssignmentExpressionContext* assignmentExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  ExpressionContext* expression();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledStatementContext *labeledStatement();
    DeclarationStatementContext *declarationStatement();
    ExpressionStatementContext *expressionStatement();
    CompoundStatementContext *compoundStatement();
    SelectionStatementContext *selectionStatement();
    IterationStatementContext *iterationStatement();
    JumpStatementContext *jumpStatement();
    TryBlockContext *tryBlock();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  StatementContext* statement();

  class  LabeledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Case();
    ConditionalExpressionContext *conditionalExpression();
    antlr4::tree::TerminalNode *Default();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  LabeledStatementContext* labeledStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    ExpressionContext *expression();

   
  };

  ExpressionStatementContext* expressionStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StatementSeqContext *statementSeq();

   
  };

  CompoundStatementContext* compoundStatement();

  class  StatementSeqContext : public antlr4::ParserRuleContext {
  public:
    StatementSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

   
  };

  StatementSeqContext* statementSeq();

  class  SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Switch();

   
  };

  SelectionStatementContext* selectionStatement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    DeclSpecifierSeqContext *declSpecifierSeq();
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    BracedInitListContext *bracedInitList();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  ConditionContext* condition();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Do();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *For();
    ForInitStatementContext *forInitStatement();
    ForRangeDeclarationContext *forRangeDeclaration();
    antlr4::tree::TerminalNode *Colon();
    ForRangeInitializerContext *forRangeInitializer();

   
  };

  IterationStatementContext* iterationStatement();

  class  ForInitStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionStatementContext *expressionStatement();
    SimpleDeclarationContext *simpleDeclaration();

   
  };

  ForInitStatementContext* forInitStatement();

  class  ForRangeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForRangeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclSpecifierSeqContext *declSpecifierSeq();
    DeclaratorContext *declarator();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  ForRangeDeclarationContext* forRangeDeclaration();

  class  ForRangeInitializerContext : public antlr4::ParserRuleContext {
  public:
    ForRangeInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BracedInitListContext *bracedInitList();

   
  };

  ForRangeInitializerContext* forRangeInitializer();

  class  JumpStatementContext : public antlr4::ParserRuleContext {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Goto();
    antlr4::tree::TerminalNode *Identifier();
    ExpressionContext *expression();
    BracedInitListContext *bracedInitList();

   
  };

  JumpStatementContext* jumpStatement();

  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();

   
  };

  DeclarationStatementContext* declarationStatement();

  class  DeclarationseqContext : public antlr4::ParserRuleContext {
  public:
    DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

   
  };

  DeclarationseqContext* declarationseq();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();
    FunctionDefinitionContext *functionDefinition();
    TemplateDeclarationContext *templateDeclaration();
    ExplicitInstantiationContext *explicitInstantiation();
    ExplicitSpecializationContext *explicitSpecialization();
    LinkageSpecificationContext *linkageSpecification();
    NamespaceDefinitionContext *namespaceDefinition();
    EmptyDeclaration_Context *emptyDeclaration_();
    AttributeDeclarationContext *attributeDeclaration();

   
  };

  DeclarationContext* declaration();

  class  BlockDeclarationContext : public antlr4::ParserRuleContext {
  public:
    BlockDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDeclarationContext *simpleDeclaration();
    AsmDefinitionContext *asmDefinition();
    NamespaceAliasDefinitionContext *namespaceAliasDefinition();
    UsingDeclarationContext *usingDeclaration();
    UsingDirectiveContext *usingDirective();
    StaticAssertDeclarationContext *staticAssertDeclaration();
    AliasDeclarationContext *aliasDeclaration();
    OpaqueEnumDeclarationContext *opaqueEnumDeclaration();

   
  };

  BlockDeclarationContext* blockDeclaration();

  class  AliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Semi();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  AliasDeclarationContext* aliasDeclaration();

  class  SimpleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SimpleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    DeclSpecifierSeqContext *declSpecifierSeq();
    InitDeclaratorListContext *initDeclaratorList();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  SimpleDeclarationContext* simpleDeclaration();

  class  StaticAssertDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StaticAssertDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static_assert();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionalExpressionContext *conditionalExpression();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();

   
  };

  StaticAssertDeclarationContext* staticAssertDeclaration();

  class  EmptyDeclaration_Context : public antlr4::ParserRuleContext {
  public:
    EmptyDeclaration_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();

   
  };

  EmptyDeclaration_Context* emptyDeclaration_();

  class  AttributeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AttributeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Semi();

   
  };

  AttributeDeclarationContext* attributeDeclaration();

  class  DeclSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageClassSpecifierContext *storageClassSpecifier();
    TypeSpecifierContext *typeSpecifier();
    FunctionSpecifierContext *functionSpecifier();
    antlr4::tree::TerminalNode *Friend();
    antlr4::tree::TerminalNode *Typedef();
    antlr4::tree::TerminalNode *Constexpr();

   
  };

  DeclSpecifierContext* declSpecifier();

  class  DeclSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    DeclSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclSpecifierContext *> declSpecifier();
    DeclSpecifierContext* declSpecifier(size_t i);
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  DeclSpecifierSeqContext* declSpecifierSeq();

  class  StorageClassSpecifierContext : public antlr4::ParserRuleContext {
  public:
    StorageClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Register();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Thread_local();
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Mutable();

   
  };

  StorageClassSpecifierContext* storageClassSpecifier();

  class  FunctionSpecifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Virtual();
    antlr4::tree::TerminalNode *Explicit();

   
  };

  FunctionSpecifierContext* functionSpecifier();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingTypeSpecifierContext *trailingTypeSpecifier();
    ClassSpecifierContext *classSpecifier();
    EnumSpecifierContext *enumSpecifier();

   
  };

  TypeSpecifierContext* typeSpecifier();

  class  TrailingTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TrailingTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    ElaboratedTypeSpecifierContext *elaboratedTypeSpecifier();
    TypeNameSpecifierContext *typeNameSpecifier();
    CvQualifierContext *cvQualifier();

   
  };

  TrailingTypeSpecifierContext* trailingTypeSpecifier();

  class  TypeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeSpecifierContext *> typeSpecifier();
    TypeSpecifierContext* typeSpecifier(size_t i);
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  TypeSpecifierSeqContext* typeSpecifierSeq();

  class  TrailingTypeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    TrailingTypeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TrailingTypeSpecifierContext *> trailingTypeSpecifier();
    TrailingTypeSpecifierContext* trailingTypeSpecifier(size_t i);
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  TrailingTypeSpecifierSeqContext* trailingTypeSpecifierSeq();

  class  SimpleTypeLengthModifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeLengthModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Long();

   
  };

  SimpleTypeLengthModifierContext* simpleTypeLengthModifier();

  class  SimpleTypeSignednessModifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeSignednessModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *Signed();

   
  };

  SimpleTypeSignednessModifierContext* simpleTypeSignednessModifier();

  class  SimpleTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeNameContext *theTypeName();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Char16();
    antlr4::tree::TerminalNode *Char32();
    antlr4::tree::TerminalNode *Wchar();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Signed();
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Auto();
    DecltypeSpecifierContext *decltypeSpecifier();

   
  };

  SimpleTypeSpecifierContext* simpleTypeSpecifier();

  class  TheTypeNameContext : public antlr4::ParserRuleContext {
  public:
    TheTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();

   
  };

  TheTypeNameContext* theTypeName();

  class  DecltypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DecltypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decltype();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Auto();

   
  };

  DecltypeSpecifierContext* decltypeSpecifier();

  class  ElaboratedTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ElaboratedTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassKeyContext *classKey();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    NestedNameSpecifierContext *nestedNameSpecifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    TemplateArgumentListContext *templateArgumentList();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Enum();

   
  };

  ElaboratedTypeSpecifierContext* elaboratedTypeSpecifier();

  class  EnumSpecifierContext : public antlr4::ParserRuleContext {
  public:
    EnumSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumHeadContext *enumHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    EnumeratorListContext *enumeratorList();
    antlr4::tree::TerminalNode *Comma();

   
  };

  EnumSpecifierContext* enumSpecifier();

  class  EnumHeadContext : public antlr4::ParserRuleContext {
  public:
    EnumHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Identifier();
    EnumbaseContext *enumbase();
    NestedNameSpecifierContext *nestedNameSpecifier();

   
  };

  EnumHeadContext* enumHead();

  class  OpaqueEnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    OpaqueEnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    EnumbaseContext *enumbase();

   
  };

  OpaqueEnumDeclarationContext* opaqueEnumDeclaration();

  class  EnumkeyContext : public antlr4::ParserRuleContext {
  public:
    EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();

   
  };

  EnumkeyContext* enumkey();

  class  EnumbaseContext : public antlr4::ParserRuleContext {
  public:
    EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    TypeSpecifierSeqContext *typeSpecifierSeq();

   
  };

  EnumbaseContext* enumbase();

  class  EnumeratorListContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumeratorDefinitionContext *> enumeratorDefinition();
    EnumeratorDefinitionContext* enumeratorDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  EnumeratorListContext* enumeratorList();

  class  EnumeratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    ConditionalExpressionContext *conditionalExpression();

   
  };

  EnumeratorDefinitionContext* enumeratorDefinition();

  class  NamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    CPP14Parser::DeclarationseqContext *namespaceBody = nullptr;
    NamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Identifier();
    DeclarationseqContext *declarationseq();

   
  };

  NamespaceDefinitionContext* namespaceDefinition();

  class  NamespaceAliasDefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespaceAliasDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    QualifiednamespacespecifierContext *qualifiednamespacespecifier();
    antlr4::tree::TerminalNode *Semi();

   
  };

  NamespaceAliasDefinitionContext* namespaceAliasDefinition();

  class  QualifiednamespacespecifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NestedNameSpecifierContext *nestedNameSpecifier();

   
  };

  QualifiednamespacespecifierContext* qualifiednamespacespecifier();

  class  UsingDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UsingDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    UnqualifiedIdContext *unqualifiedId();
    antlr4::tree::TerminalNode *Semi();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Doublecolon();
    antlr4::tree::TerminalNode *Typename_();

   
  };

  UsingDeclarationContext* usingDeclaration();

  class  UsingDirectiveContext : public antlr4::ParserRuleContext {
  public:
    UsingDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    NestedNameSpecifierContext *nestedNameSpecifier();

   
  };

  UsingDirectiveContext* usingDirective();

  class  AsmDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AsmDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Asm();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();

   
  };

  AsmDefinitionContext* asmDefinition();

  class  LinkageSpecificationContext : public antlr4::ParserRuleContext {
  public:
    LinkageSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    DeclarationContext *declaration();
    DeclarationseqContext *declarationseq();

   
  };

  LinkageSpecificationContext* linkageSpecification();

  class  AttributeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);

   
  };

  AttributeSpecifierSeqContext* attributeSpecifierSeq();

  class  AttributeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    AttributeListContext *attributeList();
    AlignmentspecifierContext *alignmentspecifier();

   
  };

  AttributeSpecifierContext* attributeSpecifier();

  class  AlignmentspecifierContext : public antlr4::ParserRuleContext {
  public:
    AlignmentspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Alignas();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    TheTypeIdContext *theTypeId();
    ConditionalExpressionContext *conditionalExpression();
    antlr4::tree::TerminalNode *Ellipsis();

   
  };

  AlignmentspecifierContext* alignmentspecifier();

  class  AttributeListContext : public antlr4::ParserRuleContext {
  public:
    AttributeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();

   
  };

  AttributeListContext* attributeList();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Doublecolon();
    AttributeArgumentClauseContext *attributeArgumentClause();

   
  };

  AttributeContext* attribute();

  class  AttributeArgumentClauseContext : public antlr4::ParserRuleContext {
  public:
    AttributeArgumentClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    BalancedTokenSeqContext *balancedTokenSeq();

   
  };

  AttributeArgumentClauseContext* attributeArgumentClause();

  class  BalancedTokenSeqContext : public antlr4::ParserRuleContext {
  public:
    BalancedTokenSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BalancedtokenContext *> balancedtoken();
    BalancedtokenContext* balancedtoken(size_t i);

   
  };

  BalancedTokenSeqContext* balancedTokenSeq();

  class  BalancedtokenContext : public antlr4::ParserRuleContext {
  public:
    BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LeftParen();
    antlr4::tree::TerminalNode* LeftParen(size_t i);
    BalancedTokenSeqContext *balancedTokenSeq();
    std::vector<antlr4::tree::TerminalNode *> RightParen();
    antlr4::tree::TerminalNode* RightParen(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LeftBrace();
    antlr4::tree::TerminalNode* LeftBrace(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBrace();
    antlr4::tree::TerminalNode* RightBrace(size_t i);

   
  };

  BalancedtokenContext* balancedtoken();

  class  InitDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitDeclaratorContext *> initDeclarator();
    InitDeclaratorContext* initDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  InitDeclaratorListContext* initDeclaratorList();

  class  InitDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    InitDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    InitializerContext *initializer();

   
  };

  InitDeclaratorContext* initDeclarator();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerDeclaratorContext *pointerDeclarator();
    NoPointerDeclaratorContext *noPointerDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    TrailingReturnTypeContext *trailingReturnType();

   
  };

  DeclaratorContext* declarator();

  class  PointerDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PointerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoPointerDeclaratorContext *noPointerDeclarator();
    std::vector<PointerOperatorContext *> pointerOperator();
    PointerOperatorContext* pointerOperator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Const();
    antlr4::tree::TerminalNode* Const(size_t i);

   
  };

  PointerDeclaratorContext* pointerDeclarator();

  class  NoPointerDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratoridContext *declaratorid();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *LeftParen();
    PointerDeclaratorContext *pointerDeclarator();
    antlr4::tree::TerminalNode *RightParen();
    NoPointerDeclaratorContext *noPointerDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConditionalExpressionContext *conditionalExpression();

   
  };

  NoPointerDeclaratorContext* noPointerDeclarator();
  NoPointerDeclaratorContext* noPointerDeclarator(int precedence);
  class  ParametersAndQualifiersContext : public antlr4::ParserRuleContext {
  public:
    ParametersAndQualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    CvqualifierseqContext *cvqualifierseq();
    RefqualifierContext *refqualifier();
    ExceptionSpecificationContext *exceptionSpecification();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  ParametersAndQualifiersContext* parametersAndQualifiers();

  class  TrailingReturnTypeContext : public antlr4::ParserRuleContext {
  public:
    TrailingReturnTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Arrow();
    TrailingTypeSpecifierSeqContext *trailingTypeSpecifierSeq();
    AbstractDeclaratorContext *abstractDeclarator();

   
  };

  TrailingReturnTypeContext* trailingReturnType();

  class  PointerOperatorContext : public antlr4::ParserRuleContext {
  public:
    PointerOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *AndAnd();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Star();
    NestedNameSpecifierContext *nestedNameSpecifier();
    CvqualifierseqContext *cvqualifierseq();

   
  };

  PointerOperatorContext* pointerOperator();

  class  CvqualifierseqContext : public antlr4::ParserRuleContext {
  public:
    CvqualifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CvQualifierContext *> cvQualifier();
    CvQualifierContext* cvQualifier(size_t i);

   
  };

  CvqualifierseqContext* cvqualifierseq();

  class  CvQualifierContext : public antlr4::ParserRuleContext {
  public:
    CvQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();

   
  };

  CvQualifierContext* cvQualifier();

  class  RefqualifierContext : public antlr4::ParserRuleContext {
  public:
    RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *AndAnd();

   
  };

  RefqualifierContext* refqualifier();

  class  DeclaratoridContext : public antlr4::ParserRuleContext {
  public:
    DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdExpressionContext *idExpression();
    antlr4::tree::TerminalNode *Ellipsis();

   
  };

  DeclaratoridContext* declaratorid();

  class  TheTypeIdContext : public antlr4::ParserRuleContext {
  public:
    TheTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    AbstractDeclaratorContext *abstractDeclarator();

   
  };

  TheTypeIdContext* theTypeId();

  class  AbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    TrailingReturnTypeContext *trailingReturnType();
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();
    AbstractPackDeclaratorContext *abstractPackDeclarator();

   
  };

  AbstractDeclaratorContext* abstractDeclarator();

  class  PointerAbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PointerAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();
    std::vector<PointerOperatorContext *> pointerOperator();
    PointerOperatorContext* pointerOperator(size_t i);

   
  };

  PointerAbstractDeclaratorContext* pointerAbstractDeclarator();

  class  NoPointerAbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParametersAndQualifiersContext *> parametersAndQualifiers();
    ParametersAndQualifiersContext* parametersAndQualifiers(size_t i);
    antlr4::tree::TerminalNode *LeftParen();
    PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    std::vector<ConditionalExpressionContext *> conditionalExpression();
    ConditionalExpressionContext* conditionalExpression(size_t i);
    std::vector<AttributeSpecifierSeqContext *> attributeSpecifierSeq();
    AttributeSpecifierSeqContext* attributeSpecifierSeq(size_t i);

   
  };

  NoPointerAbstractDeclaratorContext* noPointerAbstractDeclarator();

  class  AbstractPackDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractPackDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator();
    std::vector<PointerOperatorContext *> pointerOperator();
    PointerOperatorContext* pointerOperator(size_t i);

   
  };

  AbstractPackDeclaratorContext* abstractPackDeclarator();

  class  NoPointerAbstractPackDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerAbstractPackDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    std::vector<ParametersAndQualifiersContext *> parametersAndQualifiers();
    ParametersAndQualifiersContext* parametersAndQualifiers(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    std::vector<ConditionalExpressionContext *> conditionalExpression();
    ConditionalExpressionContext* conditionalExpression(size_t i);
    std::vector<AttributeSpecifierSeqContext *> attributeSpecifierSeq();
    AttributeSpecifierSeqContext* attributeSpecifierSeq(size_t i);

   
  };

  NoPointerAbstractPackDeclaratorContext* noPointerAbstractPackDeclarator();

  class  ParameterDeclarationClauseContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterDeclarationListContext *parameterDeclarationList();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Comma();

   
  };

  ParameterDeclarationClauseContext* parameterDeclarationClause();

  class  ParameterDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterDeclarationContext *> parameterDeclaration();
    ParameterDeclarationContext* parameterDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  ParameterDeclarationListContext* parameterDeclarationList();

  class  ParameterDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclSpecifierSeqContext *declSpecifierSeq();
    DeclaratorContext *declarator();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    AbstractDeclaratorContext *abstractDeclarator();

   
  };

  ParameterDeclarationContext* parameterDeclaration();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    FunctionBodyContext *functionBody();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    DeclSpecifierSeqContext *declSpecifierSeq();
    VirtualSpecifierSeqContext *virtualSpecifierSeq();

   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    ConstructorInitializerContext *constructorInitializer();
    FunctionTryBlockContext *functionTryBlock();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Delete();

   
  };

  FunctionBodyContext* functionBody();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();

   
  };

  InitializerContext* initializer();

  class  BraceOrEqualInitializerContext : public antlr4::ParserRuleContext {
  public:
    BraceOrEqualInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    BracedInitListContext *bracedInitList();

   
  };

  BraceOrEqualInitializerContext* braceOrEqualInitializer();

  class  InitializerClauseContext : public antlr4::ParserRuleContext {
  public:
    InitializerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    BracedInitListContext *bracedInitList();

   
  };

  InitializerClauseContext* initializerClause();

  class  InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitializerClauseContext *> initializerClause();
    InitializerClauseContext* initializerClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  InitializerListContext* initializerList();

  class  BracedInitListContext : public antlr4::ParserRuleContext {
  public:
    BracedInitListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *Comma();

   
  };

  BracedInitListContext* bracedInitList();

  class  ClassNameContext : public antlr4::ParserRuleContext {
  public:
    ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();

   
  };

  ClassNameContext* className();

  class  ClassSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassHeadContext *classHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    MemberSpecificationContext *memberSpecification();

   
  };

  ClassSpecifierContext* classSpecifier();

  class  ClassHeadContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassKeyContext *classKey();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    ClassHeadNameContext *classHeadName();
    BaseClauseContext *baseClause();
    ClassVirtSpecifierContext *classVirtSpecifier();
    antlr4::tree::TerminalNode *Union();

   
  };

  ClassHeadContext* classHead();

  class  ClassHeadNameContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();

   
  };

  ClassHeadNameContext* classHeadName();

  class  ClassVirtSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassVirtSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Final();

   
  };

  ClassVirtSpecifierContext* classVirtSpecifier();

  class  ClassKeyContext : public antlr4::ParserRuleContext {
  public:
    ClassKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();

   
  };

  ClassKeyContext* classKey();

  class  MemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    MemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberdeclarationContext *> memberdeclaration();
    MemberdeclarationContext* memberdeclaration(size_t i);
    std::vector<AccessSpecifierContext *> accessSpecifier();
    AccessSpecifierContext* accessSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);

   
  };

  MemberSpecificationContext* memberSpecification();

  class  MemberdeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    DeclSpecifierSeqContext *declSpecifierSeq();
    MemberDeclaratorListContext *memberDeclaratorList();
    FunctionDefinitionContext *functionDefinition();
    UsingDeclarationContext *usingDeclaration();
    StaticAssertDeclarationContext *staticAssertDeclaration();
    TemplateDeclarationContext *templateDeclaration();
    AliasDeclarationContext *aliasDeclaration();
    EmptyDeclaration_Context *emptyDeclaration_();

   
  };

  MemberdeclarationContext* memberdeclaration();

  class  MemberDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberDeclaratorContext *> memberDeclarator();
    MemberDeclaratorContext* memberDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  MemberDeclaratorListContext* memberDeclaratorList();

  class  MemberDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    VirtualSpecifierSeqContext *virtualSpecifierSeq();
    PureSpecifierContext *pureSpecifier();
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    antlr4::tree::TerminalNode *Colon();
    ConditionalExpressionContext *conditionalExpression();
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  MemberDeclaratorContext* memberDeclarator();

  class  VirtualSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    VirtualSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VirtualSpecifierContext *> virtualSpecifier();
    VirtualSpecifierContext* virtualSpecifier(size_t i);

   
  };

  VirtualSpecifierSeqContext* virtualSpecifierSeq();

  class  VirtualSpecifierContext : public antlr4::ParserRuleContext {
  public:
    VirtualSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Final();

   
  };

  VirtualSpecifierContext* virtualSpecifier();

  class  PureSpecifierContext : public antlr4::ParserRuleContext {
  public:
    PureSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *IntegerLiteral();

   
  };

  PureSpecifierContext* pureSpecifier();

  class  BaseClauseContext : public antlr4::ParserRuleContext {
  public:
    BaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    BaseSpecifierListContext *baseSpecifierList();

   
  };

  BaseClauseContext* baseClause();

  class  BaseSpecifierListContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BaseSpecifierContext *> baseSpecifier();
    BaseSpecifierContext* baseSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  BaseSpecifierListContext* baseSpecifierList();

  class  BaseSpecifierContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BaseTypeSpecifierContext *baseTypeSpecifier();
    antlr4::tree::TerminalNode *Virtual();
    AccessSpecifierContext *accessSpecifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

   
  };

  BaseSpecifierContext* baseSpecifier();

  class  ClassOrDeclTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassOrDeclTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();
    DecltypeSpecifierContext *decltypeSpecifier();

   
  };

  ClassOrDeclTypeContext* classOrDeclType();

  class  BaseTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    BaseTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrDeclTypeContext *classOrDeclType();

   
  };

  BaseTypeSpecifierContext* baseTypeSpecifier();

  class  AccessSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();

   
  };

  AccessSpecifierContext* accessSpecifier();

  class  ConversionFunctionIdContext : public antlr4::ParserRuleContext {
  public:
    ConversionFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    ConversionTypeIdContext *conversionTypeId();

   
  };

  ConversionFunctionIdContext* conversionFunctionId();

  class  ConversionTypeIdContext : public antlr4::ParserRuleContext {
  public:
    ConversionTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    ConversionDeclaratorContext *conversionDeclarator();

   
  };

  ConversionTypeIdContext* conversionTypeId();

  class  ConversionDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ConversionDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerOperatorContext *pointerOperator();
    ConversionDeclaratorContext *conversionDeclarator();

   
  };

  ConversionDeclaratorContext* conversionDeclarator();

  class  ConstructorInitializerContext : public antlr4::ParserRuleContext {
  public:
    ConstructorInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    MemInitializerListContext *memInitializerList();

   
  };

  ConstructorInitializerContext* constructorInitializer();

  class  MemInitializerListContext : public antlr4::ParserRuleContext {
  public:
    MemInitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemInitializerContext *> memInitializer();
    MemInitializerContext* memInitializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  MemInitializerListContext* memInitializerList();

  class  MemInitializerContext : public antlr4::ParserRuleContext {
  public:
    MemInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializeridContext *meminitializerid();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    BracedInitListContext *bracedInitList();
    ExpressionListContext *expressionList();

   
  };

  MemInitializerContext* memInitializer();

  class  MeminitializeridContext : public antlr4::ParserRuleContext {
  public:
    MeminitializeridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrDeclTypeContext *classOrDeclType();
    antlr4::tree::TerminalNode *Identifier();

   
  };

  MeminitializeridContext* meminitializerid();

  class  OperatorFunctionIdContext : public antlr4::ParserRuleContext {
  public:
    OperatorFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    TheOperatorContext *theOperator();

   
  };

  OperatorFunctionIdContext* operatorFunctionId();

  class  LiteralOperatorIdContext : public antlr4::ParserRuleContext {
  public:
    LiteralOperatorIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *UserDefinedStringLiteral();

   
  };

  LiteralOperatorIdContext* literalOperatorId();

  class  TemplateDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TemplateDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Less();
    TemplateparameterListContext *templateparameterList();
    antlr4::tree::TerminalNode *Greater();
    DeclarationContext *declaration();

   
  };

  TemplateDeclarationContext* templateDeclaration();

  class  TemplateparameterListContext : public antlr4::ParserRuleContext {
  public:
    TemplateparameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TemplateParameterContext *> templateParameter();
    TemplateParameterContext* templateParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  TemplateparameterListContext* templateparameterList();

  class  TemplateParameterContext : public antlr4::ParserRuleContext {
  public:
    TemplateParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeParameterContext *typeParameter();
    ParameterDeclarationContext *parameterDeclaration();

   
  };

  TemplateParameterContext* templateParameter();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Typename_();
    antlr4::tree::TerminalNode *Assign();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Less();
    TemplateparameterListContext *templateparameterList();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();

   
  };

  TypeParameterContext* typeParameter();

  class  TemplateIdContext : public antlr4::ParserRuleContext {
  public:
    TemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();
    OperatorFunctionIdContext *operatorFunctionId();
    LiteralOperatorIdContext *literalOperatorId();

   
  };

  TemplateIdContext* templateId();

  class  TemplateArgumentListContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TemplateArgumentContext *> templateArgument();
    TemplateArgumentContext* templateArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  TemplateArgumentListContext* templateArgumentList();

  class  TemplateArgumentContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeIdContext *theTypeId();
    ConditionalExpressionContext *conditionalExpression();
    IdExpressionContext *idExpression();

   
  };

  TemplateArgumentContext* templateArgument();

  class  TypeNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typename_();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *Template();
    TemplateArgumentListContext *templateArgumentList();

   
  };

  TypeNameSpecifierContext* typeNameSpecifier();

  class  ExplicitInstantiationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitInstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *Extern();

   
  };

  ExplicitInstantiationContext* explicitInstantiation();

  class  ExplicitSpecializationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitSpecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    DeclarationContext *declaration();

   
  };

  ExplicitSpecializationContext* explicitSpecialization();

  class  TryBlockContext : public antlr4::ParserRuleContext {
  public:
    TryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundStatementContext *compoundStatement();
    HandlerSeqContext *handlerSeq();

   
  };

  TryBlockContext* tryBlock();

  class  FunctionTryBlockContext : public antlr4::ParserRuleContext {
  public:
    FunctionTryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundStatementContext *compoundStatement();
    HandlerSeqContext *handlerSeq();
    ConstructorInitializerContext *constructorInitializer();

   
  };

  FunctionTryBlockContext* functionTryBlock();

  class  HandlerSeqContext : public antlr4::ParserRuleContext {
  public:
    HandlerSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HandlerContext *> handler();
    HandlerContext* handler(size_t i);

   
  };

  HandlerSeqContext* handlerSeq();

  class  HandlerContext : public antlr4::ParserRuleContext {
  public:
    HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *LeftParen();
    ExceptionDeclarationContext *exceptionDeclaration();
    antlr4::tree::TerminalNode *RightParen();
    CompoundStatementContext *compoundStatement();

   
  };

  HandlerContext* handler();

  class  ExceptionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    DeclaratorContext *declarator();
    AbstractDeclaratorContext *abstractDeclarator();
    antlr4::tree::TerminalNode *Ellipsis();

   
  };

  ExceptionDeclarationContext* exceptionDeclaration();

  class  ThrowExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThrowExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    AssignmentExpressionContext *assignmentExpression();

   
  };

  ThrowExpressionContext* throwExpression();

  class  ExceptionSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DynamicExceptionSpecificationContext *dynamicExceptionSpecification();
    NoeExceptSpecificationContext *noeExceptSpecification();

   
  };

  ExceptionSpecificationContext* exceptionSpecification();

  class  DynamicExceptionSpecificationContext : public antlr4::ParserRuleContext {
  public:
    DynamicExceptionSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    TypeIdListContext *typeIdList();

   
  };

  DynamicExceptionSpecificationContext* dynamicExceptionSpecification();

  class  TypeIdListContext : public antlr4::ParserRuleContext {
  public:
    TypeIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TheTypeIdContext *> theTypeId();
    TheTypeIdContext* theTypeId(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ellipsis();
    antlr4::tree::TerminalNode* Ellipsis(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

   
  };

  TypeIdListContext* typeIdList();

  class  NoeExceptSpecificationContext : public antlr4::ParserRuleContext {
  public:
    NoeExceptSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionalExpressionContext *conditionalExpression();
    antlr4::tree::TerminalNode *RightParen();

   
  };

  NoeExceptSpecificationContext* noeExceptSpecification();

  class  TheOperatorContext : public antlr4::ParserRuleContext {
  public:
    TheOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Assign();
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *AndAnd();
    antlr4::tree::TerminalNode *OrOr();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *ArrowStar();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();

   
  };

  TheOperatorContext* theOperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *FloatingLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *PointerLiteral();
    antlr4::tree::TerminalNode *UserDefinedLiteral();

   
  };

  LiteralContext* literal();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex);
  bool noPointerNewDeclaratorSempred(NoPointerNewDeclaratorContext *_localctx, size_t predicateIndex);
  bool noPointerDeclaratorSempred(NoPointerDeclaratorContext *_localctx, size_t predicateIndex);
  bool memberDeclaratorSempred(MemberDeclaratorContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

