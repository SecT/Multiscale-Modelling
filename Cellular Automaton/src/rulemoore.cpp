#include "rulemoore.h"

#include "Space.h"

RuleMoore::RuleMoore()
{
}

void RuleMoore::Apply(unsigned int CellId, Space* space)
    {
        if(space->GetValue(CellId) != 0)
            return;

        if(space->GetDownNeighbourVal(CellId) != 0)
        {
            space->SetValue(space->GetDownNeighbourVal(CellId), CellId);
        }

        if(space->GetTopNeighbourVal(CellId) != 0)
        {
            space->SetValue(space->GetTopNeighbourVal(CellId), CellId);
        }

        if(space->GetLeftNeighbourVal(CellId) != 0)
        {
            space->SetValue(space->GetLeftNeighbourVal(CellId), CellId);
        }

        if(space->GetRightNeighbourVal(CellId) != 0)
        {
            space->SetValue(space->GetRightNeighbourVal(CellId), CellId);
        }

    }

