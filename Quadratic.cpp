#include "Quadratic.h"
#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;


int getQuadraticFormula(int);
int initialPopulation();
int calculateFitness(int);
int selection();
int mutation();

// How to get to 0?
int main() {

	int initialPopulation[4] = {1, 2, 3, 4};
	int fitness[4] = { 0,0,0,0 };
	calculateFitness(initialPopulation[0]);
	while (1) {
		getQuadraticFormula();
		calculateFitness();
		selection();
		mutation();
	}
	cin.get();
	return 0;
}


int calculateFitness(int x)
{
	int fitness = getQuadraticFormula(x);

	return fitness;
}

int Quadratic::selection(int firstBestFit, int secondBestFit)
{
	// Crossing over
	return (firstBestFit + secondBestFit) / 2;
}

int Quadratic::getQuadraticFormula(int x)
{
	int a = 1;
	int b = 2;
	int c = 1;
	int formulaResult = a * pow(x, 2) + b * x + c;

	return formulaResult;
}

int Quadratic::mutation()
{
	// Set random from 1-100
	// If select 1, random number
	int randomNumber = rand() % 100 + 1;
	if (randomNumber == 1) {
		// Mutation occurs
	}
	return 0;
}

