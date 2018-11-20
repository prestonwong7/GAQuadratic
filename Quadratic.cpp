#include "Quadratic.h"
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;


int getQuadraticFormula(int);
int* calculateFitness(int population[]);
int selection(int, int);
int* crossover(int[]);
int mutation();

// fitness can be recipriocal of the number
// Local search
 // Population stays constant
// Selection, roulette wheel
// Aneeling, e^-delta d / t, d = distance from 0, t = temp (basically mutation)


// How to get to 0?
int main() {

	int initialPopulation[4] = {1, 2, 3, 4};
	int fitness[4] = { 0,0,0,0 };
	//calculateFitness(initialPopulation[0]);
	while (1) {
		calculateFitness(initialPopulation);
		int mostFit = findMostFit(fitness);
		int secondMostFit = findSecondMostFit(fitness);
		selection(mostFit, secondMostFit);
		crossover(initialPopulation);
		mutation();
	}
	cin.get();
	return 0;
}

int* calculateFitness(int population[])
{
	int fitness = getQuadraticFormula();
	return population;
}

int getQuadraticFormula(int x) {
	int a = 1;
	int b = 2;
	int c = 1;
	int formulaResult = a * pow(x, 2) + b * x + c;
	return formulaResult;
}


int selection(int mostFit, int secondMostFit)
{
	int child = (mostFit + secondMostFit) / 2;
	return child;
}

int findMostFit(int fitness[]) {
	int mostFit = fitness[0];
	for (int i = 0; i < sizeof(fitness); i++) {
		if (fitness[i] < mostFit) {
			mostFit = fitness[i];
		}
	}
	return mostFit;
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

