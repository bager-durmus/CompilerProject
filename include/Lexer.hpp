#pragma once
#include <string>
#include <vector>
#include <TokenList.hpp>

class Lexer
{

    private:
    std::string source;
    std::vector<Token> tokens;
    size_t start;
    size_t current;
    int line;

    public:
    bool isAtEnd();
    char advance();
    char peek();
    char peekNext();
    bool match(char expected);

    void scanToken();
    void addToken(TokenType type);
    void identifier();
    void number();
    void string();

    const std::vector<Token>& getTokens() const;
    Lexer(std::string source) : source(source){};
    std::vector<Token> scanTokens(); 
};