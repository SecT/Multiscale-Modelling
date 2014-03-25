#ifndef RULE_H
#define RULE_H

#include "Space.h"

class Rule
{
public:
    Rule();

    virtual void Apply(unsigned int CellId, Space* space)
    {
    }

};

#endif // RULE_H
