#include "Quadratic.h"
#include <iostream>
#include <cmath>
using namespace std;


int getQuadraticFormula();
int initialPopulation();
int fitnessFunction();
int selection();
int mutation();

int main() {
	int fitness = getQuadraticFormula();
	initialPopulation();
	fitnessFunction();
	while (1) {
		getQuadraticFormula();
		fitnessFunction();
		selection();
		mutation();
	}
	cin.get();
	return 0;
}

int getQuadraticFormula() {
	int a = 1;
	int b = 1;
	int c = 3;
	int x = 2;
	int formulaResult = a * pow(x, 2) + b * x + c;
	if (formulaResult > 0) {
		x--;
	}
	if (formulaResult < 0) {
		x++;
	}
	return formulaResult;
}

int initialPopulation()
{
	return 0;
}

int fitnessFunction()
{
	return 0;
}

int selection()
{
	return 0;
}

int mutation()
{
	return 0;
}
