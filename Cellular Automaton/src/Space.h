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
	unsigned short int* matrix; //representation of automaton space
	unsigned int size;


	void ClearSpace(); //fill the space with zeroes

public:
	Space();
	Space(unsigned int MatrixSize);
	virtual ~Space();
};

#endif /* SPACE_H_ */
