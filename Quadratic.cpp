#include "Quadratic.h"
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;


double getQuadraticFormula(double);
double calculateFitness(double);
int* selection(int[]);
int* crossover(int[]);
int* mutation(int[]);

// fitness can be recipriocal of the number
// Local search
// Population stays constant
// Selection, roulette wheel
// Aneeling, e^-delta d / t, d = distance from 0, t = temp (basically mutation)

// How to get to 0?
int main() {

	int population[4] = {1, 2, 3, 4}; // Random initial population
	int fitness[4] = {0}; 
	for (int i = 0; i < 4; i++) {
		fitness[i] = calculateFitness(population[i]);
	}
	//calculateFitness(initialPopulation[0]);
	while (1) {
		selection(population);
		crossover(population);
		mutation(population);
		for (int i = 0; i < sizeof(population[0]); i++) {
			calculateFitness(population[i]);
			if (population[i] == 0) { // If the goal is 0
				cout << "Answer: " << population[i] << endl;
				cin.get();
				return population[i];
			}
		}
	}
	cin.get();
	return 0;
}

double getQuadraticFormula(double x) {
	int a = 1;
	int b = 2;
	int c = 1;
	double result = a * pow(x, 2) + b * x + c;
	return result;
}

double calculateFitness(double x)
{
	double fitness = getQuadraticFormula(x);
	fitness = 1 / fitness; // Getting recripocal gets fitness score
	return fitness;
}

int* selection(int population[]) // Select individuals
{
	
}

int* crossover(int population[]) // Cross them over and produce
{

}

int* mutation(int population[]) // This is where he says to use aneeling (once you actually used to the GA)
{
	// Set random from 1-100
	// If select 1, random number
	int randomNumber = rand() % 100 + 1;
	if (randomNumber == 1) {
		// Mutation occurs
	}
	return 0;
}

int findMostFit(int fitness[]) {
	int mostFit = fitness[0];
	for (int i = 0; i < sizeof(fitness[0]); i++) {
		if (fitness[i] < mostFit) {
			mostFit = fitness[i];
		}
	}
	return mostFit;
}



