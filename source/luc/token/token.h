#ifndef __TOKEN_TOKEN_H
#define __TOKEN_TOKEN_H

namespace luc {

    enum {
        TOK_Number,
        TOK_Add,
        TOK_Sub,
        TOK_Mul,
        TOK_Div,
    };

    struct Token
    {
        int type;
        int value;
    };
}


#endif