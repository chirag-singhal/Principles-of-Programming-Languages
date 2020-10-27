#ifndef TYPEEXPRESSION_H
#define TYPEEXPRESSION_H

#include "parsetree.h"


typedef struct _typeExpressionTableNode {
    typeExpressionRow* row;
    struct _typeExpressionTableNode* next;
    struct _typeExpressionTableNode* prev;
} typeExpressionTableNode;

typedef typeExpressionTableNode* typeExpressionTable;

extern void traverseParseTree( parseTree *t, typeExpressionTable T );

#endif // TYPEEXPRESSION_H