#include "lexer.h"
#include <iostream>

namespace luc {

void Lexer::Init(const char *program) {
    program_ = std::string(program);
}

Token Lexer::NextToken() {
    std::cout << program_.substr(current_index_) << std::endl;
    current_index_++;

    return Token();
}

}