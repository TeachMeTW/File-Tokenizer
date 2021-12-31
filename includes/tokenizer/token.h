#ifndef TOKEN_H
#define TOKEN_H

using namespace std;
#include "../../includes/tokenizer/constants.h"
#include <iostream>
#include <string>

class Token
{
public:
    Token();
    Token(string str, int type);
    friend ostream& operator <<(ostream& outs, const Token& t) {
        outs << "|" << t.token_str() << "|";
        return outs;
    }
    int type() const;
    string type_string() const;
    string token_str() const;
private:
    string _token;
    int _type;
};

#endif //TOKEN_H