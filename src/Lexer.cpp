#include <Lexer.hpp>
#include <string>

bool Lexer::isAtEnd()
{
    return current >= source.length();
}

char Lexer::advance()
{
   
    return source[current++];
}

char Lexer::peek()
{
    return source[current+1];
}

char Lexer::peekNext()
{
    return source[current + 2];
}

bool Lexer::match(char expected)
{
    if(source[current + 1] == expected)
    {
        return true;
    }
    return false;
}