/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigarcia <nigarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:40:09 by nigarcia          #+#    #+#             */
/*   Updated: 2024/01/31 14:19:08 by nigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <deque>
#include <ctime>
#include <sys/time.h>

// 		MERGE-INSERT SORT
template <typename T>
void 	insertionSort(T& container, int p, int q);

template <typename T>
void 	merge(T& container, int p, int q, int r);

template <typename T>
void 	sort(T& container, int p, int r, int K);


// 		DISPLAY
template <typename T>
void	printContainer(T & container, const char name[]);

void 	printElapsedTime(double elapsedTime, int nbElements, const char containerName[]);

template <typename T>
double	getSortTime(T & container);


// 		PARSING
void 	parseAndStoreNumbers(const char* str, std::vector<int>& numbersVector, std::deque<int>& numbersDeque);

// 		UTILS
template <typename T>
void 	isSorted(const T & container, const char name[]);
