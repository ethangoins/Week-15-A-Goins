#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <fstream>
#include <Windows.h>
#include <vector>
#include <exception>
#include <stdexcept>

using namespace std;

int endProgram() {
	cout << "\nPress enter to exit";
	cin.ignore();
	cin.get();
	return 0;
}

int getRandom(int min, int max) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distr(min, max);
	return distr(gen);
}

void dataCheck(short& variable, int num1, int num2) {
	while ((!(cin >> variable)) || cin.fail() || (!(variable >= num1 && variable <= num2))) {																		//Error traps characters
		cout << "Error\nTry again\n";
		cin.clear();
		cin.sync();
		cin.ignore();
	}
}

void dataCheckLong(long& variable, int num1, int num2) {
	while ((!(cin >> variable)) || cin.fail() || (!(variable >= num1 && variable <= num2))) {																		//Error traps characters
		cout << "Error\nTry again\n";
		cin.clear();
		cin.sync();
		cin.ignore();
	}
}

void dataCheckInt(int& variable, int num1, int num2) {
	while ((!(cin >> variable)) || cin.fail() || (!(variable >= num1 && variable <= num2))) {																		//Error traps characters
		cout << "Error\nTry again\n";
		cin.clear();
		cin.sync();
		cin.ignore();
	}
}

void dataCheckDouble(double& variable, int num1, int num2) {
	while ((!(cin >> variable)) || cin.fail() || (!(variable >= num1 && variable <= num2))) {																		//Error traps characters
		cout << "Error\nTry again\n";
		cin.clear();
		cin.sync();
		cin.ignore();
	}
}

int binarySearch(const int array[], int numElems, int value) {
	int first = 0,
		last = numElems - 1,
		middle = middle = (first + last) / 2,
		position = -1;
	bool found = false;

	while (!found && first <= last) {
		if (array[middle] == value)
		{
			found = true;;
			position = middle;
		}
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}

void selectionSort(int array[], int Numele) {
	int temp = 0;
	for (int i = 0; i < Numele - 1; i++)
	{
		int tiny = i;
		for (int j = i + 1; j < Numele; j++) {
			if (array[j] < array[tiny])
			{
				tiny = j;
			}
			temp = array[i];
			array[i] = array[tiny];
			array[tiny] = temp;
		}
	}
}

void bubbleSort(int array[], int Numele) {
	int temp = 0;
	for (int maxElement = Numele - 1; 0 < maxElement - 1; maxElement--)
	{
		if (array[maxElement] > array[maxElement + 1]) {
			temp = array[maxElement];
			array[maxElement] = array[maxElement + 1];
			array[maxElement + 1] = temp;
		}
	}
}

int linearSearch(int array[], int numele, int value) {
	int position = -1;
	for (int i = 0; i < numele - 1; i++)
	{
		if (array[i] = value)
		{
			position = i;
		}
	}
	return position;
}

void insertionSort(int array[], int numEle) {
	int temp = 0;
	for (int i = 0; i < numEle; i++)
	{
		if (array[i] < array[i - 1]) {
			temp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = temp;
		}
		i = 0;
	}
}