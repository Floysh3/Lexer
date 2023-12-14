#include <iostream>
#include <vector>
#include "lexer.h"
#include "fsm.h"


using namespace std;


int main()
{
    Lexer lex(cin);
    Lexem generated_lexem = lex.getNextLexem();
    while (generated_lexem.first != LEX_EOF.first and generated_lexem.first != LEX_ERROR.first) {
        cout << generated_lexem.first << " " << generated_lexem.second << endl;
        generated_lexem = lex.getNextLexem();
    }

    return 0;
}