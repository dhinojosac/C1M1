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
 * @file stats.h
 * @brief Library to get statistics from array.
 *
 * <Add Extended Description Here>
 *
 * @author Diego Hinojosa Cordova
 * @date 16-Apr-19
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statics of an array maximum, minimum, mean and median.
 * */
void print_statistics(void);

/**
 * @brief Prints the array to the screen.
 *
 * This function prints the array of unsigned char to the screen.
 *
 * @param array The array of unsigned char to print
 * @param len Length of array to print
 * */
void print_array(unsigned char * array, unsigned int len);

/**
 * @brief Returns the median from an array.
 *
 * This function find the median value from array of unsigned char.
 *
 * @param array The array of unsigned char
 * @param len Length of array
 * @return The median value from array
 * */
unsigned char find_median(unsigned char * array, unsigned int len);

/**
 * @brief Returns the mean from an array.
 *
 * This function find the mean value from array of unsigned char.
 *
 * @param array The array of unsigned char
 * @param len Length of array
 * @return The median value from array
 * */
unsigned char find_mean(unsigned char * array, unsigned int len);

/**
 * @brief Returns the maximum from an array.
 *
 * This function finds the maximum values from the array of unsigned char.
 *
 * @param array The array of unsigned char
 * @param len Length of array
 * @return The median value from array
 * */
unsigned char find_maximum(unsigned char * array, unsigned int len);

/**
 * @brief Returns the minimum from an array.
 *
 * This function finds the minimum values from the array of unsigned char.
 *
 * @param array The array of unsigned char
 * @param len Length of array
 * @return The median value from array
 * */
unsigned char find_minimum(unsigned char * array, unsigned int len);

/**
 * @brief Sorts an array from largest to smallest.
 *
 * This sorts the array of unsigned char from largest to smallest values.
 *
 * @param array The array of unsigned char
 * @param len Length of array
 * */
void sort_array(unsigned char * array, unsigned int len);


#endif /* __STATS_H__ */
