#ifndef __TOKEN_TOKEN_H
#define __TOKEN_TOKEN_H

namespace luc {
    struct token
    {
        int type;
        int value;
    };

    token next_token(const char *program);
}


#endif