#pragma warning disable 3021

// Generated from .\ExpressionAntlrLexer.g4 by ANTLR 4.8


#include "ExpressionAntlrLexer.h"


using namespace antlr4;


ExpressionAntlrLexer::ExpressionAntlrLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExpressionAntlrLexer::~ExpressionAntlrLexer() {
  delete _interpreter;
}

std::string ExpressionAntlrLexer::getGrammarFileName() const {
  return "ExpressionAntlrLexer.g4";
}

const std::vector<std::string>& ExpressionAntlrLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ExpressionAntlrLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& ExpressionAntlrLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ExpressionAntlrLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ExpressionAntlrLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ExpressionAntlrLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ExpressionAntlrLexer::getATN() const {
  return _atn;
}


void ExpressionAntlrLexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 3: STRING_INTERPOLATION_STARTAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;
    case 36: STRING_INTERPOLATION_ENDAction(dynamic_cast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

bool ExpressionAntlrLexer::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 31: return WHITESPACESempred(dynamic_cast<antlr4::RuleContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

void ExpressionAntlrLexer::STRING_INTERPOLATION_STARTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0:  ignoreWS = false; break;

  default:
    break;
  }
}

void ExpressionAntlrLexer::STRING_INTERPOLATION_ENDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 1: ignoreWS = true; break;

  default:
    break;
  }
}


bool ExpressionAntlrLexer::WHITESPACESempred(antlr4::RuleContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return ignoreWS;

  default:
    break;
  }
  return true;
}


// Static vars and initialization.
std::vector<dfa::DFA> ExpressionAntlrLexer::_decisionToDFA;
atn::PredictionContextCache ExpressionAntlrLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExpressionAntlrLexer::_atn;
std::vector<uint16_t> ExpressionAntlrLexer::_serializedATN;

std::vector<std::string> ExpressionAntlrLexer::_ruleNames = {
  u8"LETTER", u8"DIGIT", u8"OBJECT_DEFINITION", u8"STRING_INTERPOLATION_START", 
  u8"PLUS", u8"SUBSTRACT", u8"NON", u8"XOR", u8"ASTERISK", u8"SLASH", u8"PERCENT", 
  u8"DOUBLE_EQUAL", u8"NOT_EQUAL", u8"SINGLE_AND", u8"DOUBLE_AND", u8"DOUBLE_VERTICAL_CYLINDER", 
  u8"LESS_THAN", u8"MORE_THAN", u8"LESS_OR_EQUAl", u8"MORE_OR_EQUAL", u8"OPEN_BRACKET", 
  u8"CLOSE_BRACKET", u8"DOT", u8"OPEN_SQUARE_BRACKET", u8"CLOSE_SQUARE_BRACKET", 
  u8"OPEN_CURLY_BRACKET", u8"CLOSE_CURLY_BRACKET", u8"COMMA", u8"COLON", 
  u8"ARROW", u8"NUMBER", u8"WHITESPACE", u8"IDENTIFIER", u8"NEWLINE", u8"STRING", 
  u8"INVALID_TOKEN_DEFAULT_MODE", u8"STRING_INTERPOLATION_END", u8"TEMPLATE", 
  u8"ESCAPE_CHARACTER", u8"TEXT_CONTENT"
};

std::vector<std::string> ExpressionAntlrLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> ExpressionAntlrLexer::_modeNames = {
  u8"DEFAULT_MODE", u8"STRING_INTERPOLATION_MODE"
};

std::vector<std::string> ExpressionAntlrLexer::_literalNames = {
  "", "", u8"'+'", u8"'-'", u8"'!'", u8"'^'", u8"'*'", u8"'/'", u8"'%'", 
  u8"'=='", "", u8"'&'", u8"'&&'", u8"'||'", u8"'<'", u8"'>'", u8"'<='", 
  u8"'>='", u8"'('", u8"')'", u8"'.'", u8"'['", u8"']'", u8"'{'", u8"'}'", 
  u8"','", u8"':'", u8"'=>'"
};

std::vector<std::string> ExpressionAntlrLexer::_symbolicNames = {
  "", u8"STRING_INTERPOLATION_START", u8"PLUS", u8"SUBSTRACT", u8"NON", 
  u8"XOR", u8"ASTERISK", u8"SLASH", u8"PERCENT", u8"DOUBLE_EQUAL", u8"NOT_EQUAL", 
  u8"SINGLE_AND", u8"DOUBLE_AND", u8"DOUBLE_VERTICAL_CYLINDER", u8"LESS_THAN", 
  u8"MORE_THAN", u8"LESS_OR_EQUAl", u8"MORE_OR_EQUAL", u8"OPEN_BRACKET", 
  u8"CLOSE_BRACKET", u8"DOT", u8"OPEN_SQUARE_BRACKET", u8"CLOSE_SQUARE_BRACKET", 
  u8"OPEN_CURLY_BRACKET", u8"CLOSE_CURLY_BRACKET", u8"COMMA", u8"COLON", 
  u8"ARROW", u8"NUMBER", u8"WHITESPACE", u8"IDENTIFIER", u8"NEWLINE", u8"STRING", 
  u8"INVALID_TOKEN_DEFAULT_MODE", u8"TEMPLATE", u8"ESCAPE_CHARACTER", u8"TEXT_CONTENT"
};

dfa::Vocabulary ExpressionAntlrLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExpressionAntlrLexer::_tokenNames;

ExpressionAntlrLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x26, 0x107, 0x8, 0x1, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 
    0x9, 0x3, 0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 
    0x4, 0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 
    0x9, 0xa, 0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 
    0x4, 0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
    0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 
    0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 
    0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 
    0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 
    0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 
    0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 
    0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 
    0x28, 0x9, 0x28, 0x4, 0x29, 0x9, 0x29, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x5d, 0xa, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 0x4, 0x63, 0xa, 0x4, 
    0xd, 0x4, 0xe, 0x4, 0x64, 0x7, 0x4, 0x67, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
    0x6a, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x88, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x6, 0x20, 0xb2, 0xa, 
    0x20, 0xd, 0x20, 0xe, 0x20, 0xb3, 0x3, 0x20, 0x3, 0x20, 0x6, 0x20, 0xb8, 
    0xa, 0x20, 0xd, 0x20, 0xe, 0x20, 0xb9, 0x5, 0x20, 0xbc, 0xa, 0x20, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0xc8, 0xa, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0xcd, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 
    0xd0, 0xb, 0x22, 0x3, 0x23, 0x5, 0x23, 0xd3, 0xa, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x7, 0x24, 0xdd, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0xe0, 0xb, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0xe7, 0xa, 
    0x24, 0xc, 0x24, 0xe, 0x24, 0xea, 0xb, 0x24, 0x3, 0x24, 0x5, 0x24, 0xed, 
    0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x6, 0x27, 0xfc, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 0xfd, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x104, 0xa, 0x28, 
    0x3, 0x29, 0x3, 0x29, 0x4, 0xde, 0xe8, 0x2, 0x2a, 0x4, 0x2, 0x6, 0x2, 
    0x8, 0x2, 0xa, 0x3, 0xc, 0x4, 0xe, 0x5, 0x10, 0x6, 0x12, 0x7, 0x14, 
    0x8, 0x16, 0x9, 0x18, 0xa, 0x1a, 0xb, 0x1c, 0xc, 0x1e, 0xd, 0x20, 0xe, 
    0x22, 0xf, 0x24, 0x10, 0x26, 0x11, 0x28, 0x12, 0x2a, 0x13, 0x2c, 0x14, 
    0x2e, 0x15, 0x30, 0x16, 0x32, 0x17, 0x34, 0x18, 0x36, 0x19, 0x38, 0x1a, 
    0x3a, 0x1b, 0x3c, 0x1c, 0x3e, 0x1d, 0x40, 0x1e, 0x42, 0x1f, 0x44, 0x20, 
    0x46, 0x21, 0x48, 0x22, 0x4a, 0x23, 0x4c, 0x2, 0x4e, 0x24, 0x50, 0x25, 
    0x52, 0x26, 0x4, 0x2, 0x3, 0xc, 0x4, 0x2, 0x43, 0x5c, 0x63, 0x7c, 0x3, 
    0x2, 0x32, 0x3b, 0x9, 0x2, 0xc, 0xc, 0xf, 0xf, 0x24, 0x24, 0x29, 0x29, 
    0x62, 0x62, 0x7d, 0x7d, 0x7f, 0x7f, 0x6, 0x2, 0xb, 0xb, 0x22, 0x22, 
    0xa2, 0xa2, 0xff01, 0xff01, 0x5, 0x2, 0x25, 0x25, 0x42, 0x42, 0x61, 
    0x61, 0x4, 0x2, 0x29, 0x29, 0x5e, 0x5e, 0x3, 0x2, 0x29, 0x29, 0x4, 0x2, 
    0x24, 0x24, 0x5e, 0x5e, 0x3, 0x2, 0x24, 0x24, 0x4, 0x2, 0xc, 0xc, 0xf, 
    0xf, 0x2, 0x11c, 0x2, 0xa, 0x3, 0x2, 0x2, 0x2, 0x2, 0xc, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0xe, 0x3, 0x2, 0x2, 0x2, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0x12, 0x3, 0x2, 0x2, 0x2, 0x2, 0x14, 0x3, 0x2, 0x2, 0x2, 0x2, 0x16, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x18, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x20, 0x3, 0x2, 0x2, 0x2, 0x2, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x34, 0x3, 0x2, 0x2, 0x2, 0x2, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x38, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x2, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x42, 0x3, 0x2, 0x2, 0x2, 0x2, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x46, 0x3, 0x2, 0x2, 0x2, 0x2, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x3, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x3, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x3, 0x50, 0x3, 0x2, 0x2, 0x2, 0x3, 0x52, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x54, 0x3, 0x2, 0x2, 0x2, 0x6, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x58, 0x3, 0x2, 0x2, 0x2, 0xa, 0x6d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x74, 0x3, 0x2, 0x2, 0x2, 0x10, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x78, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x80, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x89, 0x3, 0x2, 0x2, 0x2, 0x20, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x24, 0x91, 0x3, 0x2, 0x2, 0x2, 0x26, 0x93, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x95, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x32, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x36, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0x3e, 0xad, 0x3, 0x2, 0x2, 0x2, 0x40, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x44, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x48, 0xec, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0xee, 0x3, 0x2, 0x2, 0x2, 0x4c, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x50, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x105, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x9, 0x2, 0x2, 0x2, 0x55, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x9, 0x3, 0x2, 0x2, 0x57, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x68, 0x7, 0x7d, 0x2, 0x2, 0x59, 0x67, 0x5, 
    0x42, 0x21, 0x2, 0x5a, 0x5d, 0x5, 0x44, 0x22, 0x2, 0x5b, 0x5d, 0x5, 
    0x48, 0x24, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x62, 0x7, 0x3c, 0x2, 
    0x2, 0x5f, 0x63, 0x5, 0x48, 0x24, 0x2, 0x60, 0x63, 0xa, 0x4, 0x2, 0x2, 
    0x61, 0x63, 0x5, 0x8, 0x4, 0x2, 0x62, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 0x2, 0x66, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6c, 0x7, 0x7f, 0x2, 0x2, 0x6c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 
    0x7, 0x62, 0x2, 0x2, 0x6e, 0x6f, 0x8, 0x5, 0x2, 0x2, 0x6f, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x71, 0x8, 0x5, 0x3, 0x2, 0x71, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x73, 0x7, 0x2d, 0x2, 0x2, 0x73, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x75, 0x7, 0x2f, 0x2, 0x2, 0x75, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x77, 0x7, 0x23, 0x2, 0x2, 0x77, 0x11, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x79, 0x7, 0x60, 0x2, 0x2, 0x79, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x7, 0x2c, 0x2, 0x2, 0x7b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 
    0x31, 0x2, 0x2, 0x7d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x27, 
    0x2, 0x2, 0x7f, 0x19, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x3f, 0x2, 
    0x2, 0x81, 0x82, 0x7, 0x3f, 0x2, 0x2, 0x82, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x83, 0x84, 0x7, 0x23, 0x2, 0x2, 0x84, 0x88, 0x7, 0x3f, 0x2, 0x2, 0x85, 
    0x86, 0x7, 0x3e, 0x2, 0x2, 0x86, 0x88, 0x7, 0x40, 0x2, 0x2, 0x87, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x28, 0x2, 0x2, 0x8a, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0x8c, 0x7, 0x28, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x28, 0x2, 
    0x2, 0x8d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x7e, 0x2, 0x2, 
    0x8f, 0x90, 0x7, 0x7e, 0x2, 0x2, 0x90, 0x23, 0x3, 0x2, 0x2, 0x2, 0x91, 
    0x92, 0x7, 0x3e, 0x2, 0x2, 0x92, 0x25, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 
    0x7, 0x40, 0x2, 0x2, 0x94, 0x27, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x7, 
    0x3e, 0x2, 0x2, 0x96, 0x97, 0x7, 0x3f, 0x2, 0x2, 0x97, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x99, 0x7, 0x40, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x3f, 0x2, 
    0x2, 0x9a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x2a, 0x2, 0x2, 
    0x9c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x2b, 0x2, 0x2, 0x9e, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x30, 0x2, 0x2, 0xa0, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x5d, 0x2, 0x2, 0xa2, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x5f, 0x2, 0x2, 0xa4, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0xa6, 0x7, 0x7d, 0x2, 0x2, 0xa6, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0xa8, 0x7, 0x7f, 0x2, 0x2, 0xa8, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xaa, 0x7, 0x2e, 0x2, 0x2, 0xaa, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xac, 0x7, 0x3c, 0x2, 0x2, 0xac, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 
    0x7, 0x3f, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x40, 0x2, 0x2, 0xaf, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0xb0, 0xb2, 0x5, 0x6, 0x3, 0x2, 0xb1, 0xb0, 0x3, 0x2, 
    0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0xb7, 0x7, 0x30, 0x2, 0x2, 0xb6, 0xb8, 0x5, 0x6, 0x3, 0x2, 0xb7, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbb, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0x41, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x9, 0x5, 0x2, 
    0x2, 0xbe, 0xbf, 0x6, 0x21, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0xc1, 0x8, 0x21, 0x4, 0x2, 0xc1, 0x43, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc8, 0x5, 0x4, 0x2, 0x2, 0xc3, 0xc8, 0x9, 0x6, 0x2, 0x2, 0xc4, 0xc5, 
    0x7, 0x42, 0x2, 0x2, 0xc5, 0xc8, 0x7, 0x42, 0x2, 0x2, 0xc6, 0xc8, 0x4, 
    0x26, 0x27, 0x2, 0xc7, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc3, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xce, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcd, 0x5, 0x4, 0x2, 0x2, 
    0xca, 0xcd, 0x5, 0x6, 0x3, 0x2, 0xcb, 0xcd, 0x7, 0x61, 0x2, 0x2, 0xcc, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcb, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd3, 0x7, 0xf, 0x2, 
    0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0xc, 0x2, 0x2, 0xd5, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x8, 0x23, 0x4, 0x2, 0xd7, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xde, 0x7, 0x29, 0x2, 0x2, 0xd9, 0xda, 0x7, 
    0x5e, 0x2, 0x2, 0xda, 0xdd, 0x9, 0x7, 0x2, 0x2, 0xdb, 0xdd, 0xa, 0x8, 
    0x2, 0x2, 0xdc, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdb, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xed, 0x7, 0x29, 0x2, 0x2, 0xe2, 0xe8, 
    0x7, 0x24, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x5e, 0x2, 0x2, 0xe4, 0xe7, 0x9, 
    0x9, 0x2, 0x2, 0xe5, 0xe7, 0xa, 0xa, 0x2, 0x2, 0xe6, 0xe3, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe9, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xed, 0x7, 0x24, 0x2, 0x2, 0xec, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xec, 0xe2, 
    0x3, 0x2, 0x2, 0x2, 0xed, 0x49, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0xb, 
    0x2, 0x2, 0x2, 0xef, 0x4b, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x62, 
    0x2, 0x2, 0xf1, 0xf2, 0x8, 0x26, 0x5, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf4, 0x8, 0x26, 0x6, 0x2, 0xf4, 0xf5, 0x8, 0x26, 0x7, 0x2, 
    0xf5, 0x4d, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x26, 0x2, 0x2, 0xf7, 
    0xfb, 0x7, 0x7d, 0x2, 0x2, 0xf8, 0xfc, 0x5, 0x48, 0x24, 0x2, 0xf9, 0xfc, 
    0x5, 0x8, 0x4, 0x2, 0xfa, 0xfc, 0xa, 0x4, 0x2, 0x2, 0xfb, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfa, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x100, 0x7, 0x7f, 0x2, 0x2, 0x100, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x103, 0x7, 0x5e, 0x2, 0x2, 0x102, 0x104, 0xa, 0xb, 0x2, 0x2, 0x103, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0xb, 0x2, 0x2, 0x2, 0x106, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x19, 0x2, 0x3, 0x5c, 0x62, 0x64, 0x66, 0x68, 0x87, 
    0xb3, 0xb9, 0xbb, 0xc7, 0xcc, 0xce, 0xd2, 0xdc, 0xde, 0xe6, 0xe8, 0xec, 
    0xfb, 0xfd, 0x103, 0x8, 0x3, 0x5, 0x2, 0x7, 0x3, 0x2, 0x8, 0x2, 0x2, 
    0x3, 0x26, 0x3, 0x9, 0x3, 0x2, 0x6, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExpressionAntlrLexer::Initializer ExpressionAntlrLexer::_init;
