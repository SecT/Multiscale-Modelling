#ifndef CELLULARAUTOMATON_H
#define CELLULARAUTOMATON_H

#include "Space.h"
#include "rule.h"

class CellularAutomaton
{
public:
    CellularAutomaton();
    CellularAutomaton(Space* newSpace);
    ~CellularAutomaton();

    void SetRule(Rule* rule);
    void Step();

private:
    Space* CASpace;
    Rule*  CARule;
};

#endif // CELLULARAUTOMATON_H
