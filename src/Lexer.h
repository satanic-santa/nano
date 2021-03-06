//
// Created by danie on 4/30/2022.
//

#pragma once
#include <string>
#include <vector>
#include <map>
enum Token {
    tok_identifier = -1,
    tok_int = -2,
    tok_double = -3,
    tok_eof = -4,
    tok_string = -5
};
namespace Lexer {

    class Lexer {
    private:
        char c = ' ';
        char nextChar();
        bool jit = false;
        std::string input = "";
        int pos = -1;
    public:
        Lexer(std::string input, bool jit = false);
        int line = 1;
        std::string identifierStr = "";
        double numVal = 0;
        std::vector<std::string> keywords =
                {"print", "start", "export", "import", "from", "is", "def", "assign", "to"};
        std::map<std::string, int> kwd_index;
        int gettok();
    };

} // Lexer

