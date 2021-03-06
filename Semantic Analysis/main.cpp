//
//  main.cpp
//  Semantic Analysis
//

#include <iostream>
#include "globals.h"
#include <iterator>
#include <iomanip>

TreeNode * declarations();
SymbolTable* analyze(TreeNode * p);
void printST(SymbolTable *st);

int main(int argc, const char * argv[]) {
    TreeNode * program = declarations();
    if (program == NULL) {
        cerr << "no top-level expression\n";
        exit(1);
    }
    SymbolTable* st = analyze(program);
    printST(st);
}
