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




public:
	Space();
	Space(unsigned int MatrixSize);
	virtual ~Space();

        int GetSize();
        short GetValue(int position);
        void SetValue(short value, int position);
        void ClearSpace(); //fill the space with zeroes
};

#endif /* SPACE_H_ */
