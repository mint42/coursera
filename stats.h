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

/*
** @file stats.h
** @brief function declarations/notes
**
** @author Ari Reedy
** @date 6/23/2020
**
*/

#ifndef __STATS_H__
#define __STATS_H__

/*
** @func print_statistics
** @brief gathers and prints statistics on a given array
**
** calls functions to find median, max, min, and mean values for an array.
** prints those values.
** prints array.
** calls a function to sort the array.
** prints sorted array.
**
** @param data 	array of unsigned char
** @param len	length of array
**
** @return void
*/
void			print_statistics(unsigned char *data, unsigned int len);

/*
** @func print_array
** @brief prints values of array 
**
** @param data 	array of unsigned char
** @param len	length of array
**
** @return void
*/
void			print_array(unsigned char *data, unsigned int len);

/*
** @func find_median
** @brief find the median value in the array
**
** @param data 	array of unsigned char
** @param len	length of array
**
** @return (unsigned char) median value
*/
unsigned char	find_median(unsigned char *data, unsigned int len);

/*
** @func find_mean
** @brief find the mean value in the array
**
** @param data 	array of unsigned char
** @param len	length of array
**
** @return (unsigned char) mean value
*/
unsigned char	find_mean(unsigned char *data, unsigned int len);

/*
** @func find_maximum
** @brief find the maximum value in the array
**
** @param data 	array of unsigned char
** @param len	length of array
**
** @return (unsigned char) maximum value
*/
unsigned char	find_maximum(unsigned char *data, unsigned int len);

/*
** @func find_minimum
** @brief find the minimum value in the array
**
** @param data 	array of unsigned char
** @param len	length of array
**
** @return (unsigned char) minimum value
*/
unsigned char	find_minimum(unsigned char *data, unsigned int len);

/*
** @func sort array
** @brief sorts the array
**
**	performs an insertion sort on the array
**
** @param data 	array of unsigned char
** @param len	length of array
**
** @return void
*/
void			sort_array(unsigned char *data, unsigned int len);

#endif /* __STATS_H__ */
