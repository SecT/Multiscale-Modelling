/*
 * Space.cpp
 *
 *  Created on: 19 mar 2014
 *      Author: Grzesiek
 */

#include "Space.h"

#include <stdio.h>


unsigned int Space::getNumberOfColumns() const
{
    return NumberOfColumns;
}

void Space::setNumberOfColumns(unsigned int value)
{
    NumberOfColumns = value;
}
Space::Space() {
    // TODO Auto-generated constructor stub
    matrix = NULL;
    size = 0;
}

Space::Space(unsigned int MatrixSize) {
    size = MatrixSize;

    //initialize matrix
	matrix = new unsigned short[size];

	ClearSpace();
}

void Space::ClearSpace() {

	for (unsigned short i = 0; i < size; i++) {
		matrix[i] = 0;
	}
}

int Space::GetSize()
{
    return size;
}

short Space::GetValue(int position)
{
    return matrix[position];
}

void Space::SetValue(short value, int position)
{
    matrix[position] = value;
}


short Space::GetLeftNeighbourVal(int position)
{
    if(position%getNumberOfColumns()-1>0)
       { return GetValue(position-1);}
    else
    {
        //TODO: implement different boundary conditions
        //depending on boundary conditions
        return 0;  //temp
    }
}

short Space::GetRightNeighbourVal(int position)
{

    if(position%getNumberOfColumns()+1<getNumberOfColumns())
       { return GetValue(position+1);}
    else
    {
        //TODO: implement different boundary conditions
        //depending on boundary conditions
        return 0;  //temp
    }

}

short Space::GetTopNeighbourVal(int position)
{
    if(position/getNumberOfColumns()-1>0)
       { return GetValue(position-getNumberOfColumns());}
    else
    {
        //TODO: implement different boundary conditions
        //depending on boundary conditions
        return 0;  //temp
    }
}

short Space::GetDownNeighbourVal(int position)
{
    unsigned int NumberOfRows = GetSize()/getNumberOfColumns();

    if(position/getNumberOfColumns()+1< NumberOfRows)
       { return GetValue(position+getNumberOfColumns());}
    else
    {
        //TODO: implement different boundary conditions
        //depending on boundary conditions
        return 0;  //temp
    }

}

short Space::GetTopLeftNeighbourVal(int position)
{
    if(position/getNumberOfColumns()-1>0 && position%getNumberOfColumns()-1>0)
       { return GetValue(position-getNumberOfColumns()-1);}
    else
    {
        //TODO: implement different boundary conditions
        //depending on boundary conditions
        return 0;  //temp
    }
}

short Space::GetTopRightNeighbourVal(int position)
{
    if(position/getNumberOfColumns()-1>0 && position%getNumberOfColumns()+1<getNumberOfColumns())
       { return GetValue(position-getNumberOfColumns()+1);}
    else
    {
        //TODO: implement different boundary conditions
        //depending on boundary conditions
        return 0;  //temp
    }
}

short Space::GetDownLeftNeighbourVal(int position)
{
    unsigned int NumberOfRows = GetSize()/getNumberOfColumns();

    if(position/getNumberOfColumns()+1< NumberOfRows && position%getNumberOfColumns()-1>0)
       { return GetValue(position+getNumberOfColumns()-1);}
    else
    {
        //TODO: implement different boundary conditions
        //depending on boundary conditions
        return 0;  //temp
    }
}

short Space::GetDownRightNeighbourVal(int position)
{
    unsigned int NumberOfRows = GetSize()/getNumberOfColumns();

    if(position/getNumberOfColumns()+1< NumberOfRows && position%getNumberOfColumns()+1<getNumberOfColumns())
       { return GetValue(position+getNumberOfColumns()+1);}
    else
    {
        //TODO: implement different boundary conditions
        //depending on boundary conditions
        return 0;  //temp
    }

}


Space::~Space() {
	// TODO Auto-generated destructor stub

	delete matrix;
}

