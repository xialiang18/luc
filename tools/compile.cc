#include "luc/lexer/lexer.h"
#include <iostream>

int main() {
    std::cout << "hello" << std::endl;
    luc::Lexer lex;
    lex.Init("world");
    lex.NextToken();
    lex.NextToken();
    lex.NextToken();
}