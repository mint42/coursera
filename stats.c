/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief getting and printing stats on an array
 *
 * 	Functions to get various stats on an unsigned char array. Also a function
 *	to obtain these stats and print them.
 *
 * @author Ari Reedy
 * @date 6/23/2020
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int	 main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
  return (0);
}

/* Add other Implementation File Code Here */

void			print_statistics(unsigned char *data, unsigned int len)
{
	print_array(data, len);
	sort_array(data, len);
	print_array(data, len);
	printf("median: %u\n", find_median(data, len));
	printf("mean: %u\n", find_mean(data, len));
	printf("maximum: %u\n", find_maximum(data, len));
	printf("minimum: %u\n", find_minimum(data, len));
}

void			print_array(unsigned char *data, unsigned int len)
{
	for (unsigned int i = 0; i < len; i++)
	{
		if (i != 0)
			printf(" ");
		printf("%u", data[i]);
	}
	printf("\n");
}

unsigned char	find_median(unsigned char *data, unsigned int len)
{
	unsigned char	median;

	if (len == 0)
		median = 0;
	else if (len == 1)
		median = data[0];
	else if (len % 2)
		median = data[len / 2];
	else
		median = data[(len / 2) - 1] + data[len / 2];
	return (median);
}

unsigned char	find_mean(unsigned char *data, unsigned int len)
{
	unsigned char	mean;
	unsigned int	total;

	if (len == 0)
		return (0);
	total = 0;
	for (unsigned int i = 0; i < len; i++)
		total = total + data[i];
	mean = total / len;
	return (mean);
}

unsigned char	find_maximum(unsigned char *data, unsigned int len)
{
	unsigned char	max;

	if (len == 0)
		return (0);
	max = data[0];
	for (unsigned int i = 1; i < len; i++)
	{
		if (data[i] > max)
			max = data[i];
	}
	return (max);
}

unsigned char	find_minimum(unsigned char *data, unsigned int len)
{
	unsigned char	min;

	if (len == 0)
		return (0);
	min = data[0];
	for (unsigned int i = 1; i < len; i++)
	{
		if (data[i] < min)
			min = data[i];
	}
	return (min);
}

void			sort_array(unsigned char *data, unsigned int len)
{
	unsigned char 	key;
	int				j;

	for (unsigned int i = 1; i < len; i++)
	{
		key = data[i];
		j = i - 1;
		while (j >= 0 && data[j] > key)
		{
			data[j + 1] = data[j];
			--j;
		}
		data[j + 1] = key;
	}
}
