/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:40:12 by nigarcia          #+#    #+#             */
/*   Updated: 2024/01/31 14:26:15 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <climits>
#include "PmergeMe.hpp"


/* ************************************************************************** */

int main(int argc, char **argv) {

	if (argc < 2) {

		std::cerr << "PmergeMe: error: interger argument are needed" << std::endl;
		return (1);
	}

	int nbElements = argc - 1;
	
	std::vector<int> numbersVector;
	std::deque<int> numbersDeque;

	try {

		for (int i = 1; i < argc; ++i) {
			parseAndStoreNumbers(argv[i], numbersVector, numbersDeque);
		}
	}
	catch (const std::invalid_argument& e) {
		std::cerr << "PmergeMe: error: " << e.what() << std::endl;
		return (2);
	}

	printContainer(numbersDeque, "Before:	");

	double	vectorTime = getSortTime(numbersVector);
	double	dequeTime = getSortTime(numbersDeque);

	printContainer(numbersVector, "After:	");

	isSorted(numbersVector, "vector");
	isSorted(numbersDeque, "deque");

	printElapsedTime(vectorTime, nbElements, "vector");
	printElapsedTime(dequeTime, nbElements, "deque");

	return (0);
}


/* ************************************************************************** */
// 		MERGE-INSERT SORT

const int K = 5;


template <typename T>
void insertionSort(T& container, int p, int q) {

	for (int i = p; i < q; i++) {

		int tempVal = container[i + 1];
		int j = i + 1;

		while (j > p && container[j - 1] > tempVal) {
			container[j] = container[j - 1];
			j--;
		}

		container[j] = tempVal;
	}
}


template <typename T>
void merge(T& container, int p, int q, int r) {

	int n1 = q - p + 1;
	int n2 = r - q;

	T leftSub(container.begin() + p, container.begin() + q + 1);
	T rightSub(container.begin() + q + 1, container.begin() + r + 1);

	int rightId = 0;
	int leftId = 0;

	for (int i = p; i <= r; i++) {

		if (rightId == n2) {

			container[i] = leftSub[leftId];
			leftId++;
		}
		else if (leftId == n1) {

			container[i] = rightSub[rightId];
			rightId++;
		}
		else if (rightSub[rightId] > leftSub[leftId]) {

			container[i] = leftSub[leftId];
			leftId++;
		}
		else {

			container[i] = rightSub[rightId];
			rightId++;
		}
	}
}


template <typename T>
void sort(T& container, int p, int r, int K) {

	if (r - p > K) {

		int q = (p + r) / 2;
		sort(container, p, q, K);
		sort(container, q + 1, r, K);
		merge(container, p, q, r);
	}
	else {

		insertionSort(container, p, r);
	}
}


/* ************************************************************************** */
// 		DISPLAY

template <typename T>
void	printContainer(T& container, const char name[]) {

	std::cout << name;

	for (size_t i = 0; i < container.size(); i++) {

		std::cout << container[i] << " ";
	}

	std::cout << std::endl;
}


void printElapsedTime(double elapsedTime, int nbElements, const char containerName[]) {

	std::cout << "Time to process a range of	" << nbElements << " elements  with std::" << containerName << "	:	"<< elapsedTime << " us" << std::endl;
}


template <typename T>
double	getSortTime(T & container) {

	struct timespec start, end;

	clock_gettime(CLOCK_MONOTONIC, &start);
	sort(container, 0, container.size() - 1, K);
	clock_gettime(CLOCK_MONOTONIC, &end);

	long long elapsedNanoseconds = (end.tv_sec - start.tv_sec) * 1000000000LL + (end.tv_nsec - start.tv_nsec);

	return (static_cast<double>(elapsedNanoseconds) / 1000);
}


/* ************************************************************************** */
// 		PARSING

void parseAndStoreNumbers(const char* str, std::vector<int>& numbersVector, std::deque<int>& numbersDeque) {
	char *endptr;
	long number = std::strtol(str, &endptr, 10);


	if (*endptr != '\0' || number < 0 || number > INT_MAX) {
		throw std::invalid_argument("Invalid integer");
	}

	numbersVector.push_back(static_cast<int>(number));
	numbersDeque.push_back(static_cast<int>(number));
}


/* ************************************************************************** */
// 		UTILS

template <typename T>
void isSorted(const T & container, const char name[]) {
	T sortedCopy = container;
	std::sort(sortedCopy.begin(), sortedCopy.end());

	if (sortedCopy == container) {
		std::cout << name << ":	The container is sorted." << std::endl;
	} else {
		std::cout << name << ":	The container is not sorted." << std::endl;
	}
}
