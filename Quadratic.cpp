#include "Quadratic.h"
#include <iostream>
#include <cmath>
using namespace std;


int getQuadraticFormula();
int initialPopulation();
int calculateFitness(int population[]);
int selection();
int mutation();

int main() {
	//int fitness = getQuadraticFormula();
	int initialPopulation[4] = {1, 2, 3, 4};
	int fitness[4] = { 0,0,0,0 };
	//initialPopulation();
	calculateFitness(initialPopulation);
	while (1) {
		getQuadraticFormula();
		calculateFitness();
		selection();
		mutation();
	}
	cin.get();
	return 0;
}

int getQuadraticFormula(int x) {
	int a = 1;
	int b = 2;
	int c = 1;
	int formulaResult = a * pow(x, 2) + b * x + c;

	return formulaResult;
}

int calculateFitness(int x)
{
	int fitness = getQuadraticFormula(x);

	return fitness;
}

int selection()
{
	return 0;
}

int mutation()
{
	return 0;
}
