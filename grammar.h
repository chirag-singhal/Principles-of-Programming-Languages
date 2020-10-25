#ifndef GRAMMAR_H
#define GRAMMAR_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct rhs_production_rule {
    char* word;
    struct rhs_production_rule* next;
    int terminal;
};

struct production_rule {
    char* lhs_nonterminal;
    struct rhs_production_rule* head; 
};

typedef struct production_rule* grammar;

extern void readGrammar(const char* filename, grammar G);

#endif // GRAMMAR_H