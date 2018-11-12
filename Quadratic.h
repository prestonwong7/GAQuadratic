#pragma once
#ifndef __QUADRATIC_H_INCLUDED__
#define __QUADRATIC_H_INCLUDED__

class Quadratic
{
public:
	void Population();
	int FitnessScore();
	int Selection();
	int CrossOver();
	int Mutation();

private:
	int createPopulation();
	int getFitnessScore();
	int getSelection();
	int getQuadraticFormula();
	int fitness;
};

#endif // !Preston Wong
