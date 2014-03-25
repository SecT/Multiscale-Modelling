#ifndef RULEMOOR_H
#define RULEMOOR_H

#include "rule.h"
#include "Space.h"

class RuleMoor : public Rule
{
public:
    RuleMoor();

    void Apply(unsigned int CellId, Space* space);

};

#endif // RULEMOOR_H
