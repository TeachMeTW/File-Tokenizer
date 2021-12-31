#include "../../includes/tokenizer/token.h"
#include "../../includes/tokenizer/constants.h"
using namespace std;

Token::Token() {
    _token = "";
    _type = -1;
}

Token::Token(string str, int type) {
    _token = str;
    _type = type;
}

int Token::type() const {
    return _type;
}

string Token::type_string() const {
    if (_type == 1) {return "NUMBER";}
    else if (_type == 2) {return "ALPHA";}
    else if (_type == 3) {return "SPACE";}
    else if (_type == 4) {return "OPERATOR";}
    else if (_type == 5) {return "PUNC";}
    else if (_type == -2) {return "END";}
    else {return "Unknown";}
}

string Token::token_str() const {
    return _token;
}
