// ConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"

#include <iostream>
using namespace std;

// function declaration:
double getAverage(int arr[], int size);
//double getAverage(int *pArray);

int main() 
{
	// an int array with 5 elements.
	int balance[5] = { 1000, 2, 3, 17, 50 };
	double avg;
	char x;
	// pass pointer to the array as an argument.
	avg = getAverage(balance, 5);

	// output the returned value 
	cout << "Average value is: " << avg << endl;
	cin >> x;
	return 0;
}

double getAverage(int arr[], int size) 
{
	int    i, sum = 0;
	double avg;

	for (i = 0; i < size; ++i) {
		sum += arr[i];
	}

	avg = double(sum) / size;

	return avg;
}