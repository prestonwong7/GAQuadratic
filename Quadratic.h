#pragma once
#ifndef __QUADRATIC_H_INCLUDED__
#define __QUADRATIC_H_INCLUDED__

class Quadratic
{
private:
	int calculateFitness(int population[]);
	int selection();
	int getQuadraticFormula();
	int fitness;
};

#endif // !Preston Wong
