#ifndef DIRECTIONSOLVER_H
#define DIRECTIONSOLVER_H

#include "utils/utils.h"
#include "utils/Board.h"

class DirectionSolver {
public:
	DirectionSolver() {};
	virtual String get(Board board) = 0;
};

#endif