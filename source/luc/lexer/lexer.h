#ifndef __LEXER_LEXER_H
#define __LEXER_LEXER_H

#include <string>
#include "luc/token/token.h"

namespace luc {

class Lexer {
public:
    void Init(const char *program);

    Token NextToken();

private:
    std::string program_;
    int current_index_ = 0;
};


}
#endif