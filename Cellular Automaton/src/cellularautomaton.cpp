#include "cellularautomaton.h"

#include <stdio.h>

CellularAutomaton::CellularAutomaton()
{
    CASpace = NULL;
    CARule = NULL;
}

CellularAutomaton::CellularAutomaton(Space* newSpace)
{
    CASpace = newSpace;
};

CellularAutomaton::~CellularAutomaton()
{
    delete CASpace;
};

void CellularAutomaton::SetRule(Rule* rule)
{
    CARule = rule;
};

void CellularAutomaton::Step()
{

    for(int i = 0; i < CASpace->GetSize(); i++)
    {
        //apply Rule for cell i
        CARule->Apply(i, CASpace);
    }

};
