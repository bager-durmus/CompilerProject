#pragma once
#include <string>
enum TokenType
{
    PLUS,
    MINUS,
    STAR,
    SLASH, BACKSLASH,
    LPAREN, RPAREN,
    LBRACKET, RBRACKET,
    LBRACE, RBRACE,
    DOT,
    COLON,
    SEMICOLON,
    COMMA,
    QUOTE,
    HASH,
    PERCENT,
    EQUAL, EQUAL_EQUAL,
    LESS, LESS_EQUAL,
    GREATER , GREATER_EQUAL,
    BANG, BANG_EQUAL,

    INT_LITERAL,
    FLOAT_LITERAL,
    STRING_LITERAL,
    IDENTIFIER,
    COMMENT,

    WENN,
    SONST,
    SOLANGE,
    FUER,
    COUNT,
    SEI,
    VAR,
    ZEIG,
    FUNKTION,
    WEITER,
    ABBRUCH,
    IN,
    BIS,
    WAHR,
    FALSCH,
    NULL_,
    UND,
    ODER,
    INDEX,
    SCHRITT,
    ZURUECK,

    END_OF_FILE,
    ERR

};

struct Token
{
    int line;
    std::string lexeme;
    TokenType type;
    Token(int line , std::string lexeme , TokenType type): line(line), lexeme(lexeme), type(type){}
};