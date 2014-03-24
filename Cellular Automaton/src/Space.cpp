/*
 * Space.cpp
 *
 *  Created on: 19 mar 2014
 *      Author: Grzesiek
 */

#include "Space.h"

#include <stdio.h>

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

Space::~Space() {
	// TODO Auto-generated destructor stub

	delete matrix;
}

