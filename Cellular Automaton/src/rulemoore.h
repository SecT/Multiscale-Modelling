#ifndef RULEMOOR_H
#define RULEMOOR_H

#include "rule.h"
#include "Space.h"

class RuleMoore : public Rule
{
public:
    RuleMoore();

    void Apply(unsigned int CellId, Space* space);

};

#endif // RULEMOOR_H
