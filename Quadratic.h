#pragma once
#ifndef __QUADRATIC_H_INCLUDED__
#define __QUADRATIC_H_INCLUDED__

class Quadratic
{
private:
	int calculateFitness(int x);
	int selection(int firstBestFit, int secondBestFit);
	int getQuadraticFormula(int x);
	int mutation();
	int fitness;
};

#endif // !Preston Wong
