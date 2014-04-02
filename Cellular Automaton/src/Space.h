/*
 * Space.h
 *
 *  Created on: 19 mar 2014
 *      Author: Grzesiek
 */

#ifndef SPACE_H_
#define SPACE_H_

class Space {
private:
        unsigned short* matrix; //representation of automaton space
        unsigned int size;
        unsigned int NumberOfColumns;



public:
	Space();
	Space(unsigned int MatrixSize);
	virtual ~Space();

        int GetSize();
        short GetValue(int position);
        void SetValue(short value, int position);
        void ClearSpace(); //fill the space with zeroes

        short GetLeftNeighbourVal(int position);
        short GetRightNeighbourVal(int position);
        short GetTopNeighbourVal(int position);
        short GetDownNeighbourVal(int position);
        short GetTopLeftNeighbourVal(int position);
        short GetTopRightNeighbourVal(int position);
        short GetDownLeftNeighbourVal(int position);
        short GetDownRightNeighbourVal(int position);
        unsigned int getNumberOfColumns() const;
        void setNumberOfColumns(unsigned int value);
};

#endif /* SPACE_H_ */
