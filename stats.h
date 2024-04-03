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
 * @brief This file contains function that can perform statistics operations such as
 *                  - mean
 *                  - median
 *                  - maximum
 *                  - Minimum
 *                  - Sort 
 * 
 * @author Abdurrahman Moghram
 * @date 04/02/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function takes an unsigned char array as an input and prints out the 
 * listed statistics information to terminal
 *
 * @param arr unsigned char pointer to an n- element data array
 * @return no return "Print stats to Termianl"
 */
void print_statistics(unsigned char* arr);

/**
 * @brief Print the input array to terminal.
 *
 * This function takes 2 inputs an unsigned char array and unsigned integer length of an array and prints out the 
 * array to terminal
 *
 * @param arr unsigned char pointer to an n- element data array
 * @param len unsigned int Integer the length of arr
 * 
 * @return no return "Print arr to Termianl"
 */
void print_array(unsigned char* arr, unsigned int len);

/**
 * @brief Return median value of an array.
 *
 * This function takes 2 inputs an unsigned char array and unsigned integer length of an array, 
 * it returns the median value as unsigned char. 
 *
 * @param arr unsigned char pointer to an n- element data array
 * @param len unsigned int Integer the length of arr
 * 
 * @return median value "unsigned char"
 */
void find_median(unsigned char* arr, unsigned int len);

/**
 * @brief Return mean of an array.
 *
 * This function takes 2 inputs an unsigned char array and unsigned integer length of an array, 
 * it returns the mean as unsigned char. 
 *
 * @param arr unsigned char pointer to an n- element data array
 * @param len unsigned int Integer the length of arr
 * 
 * @return mean value "unsigned char"
 */
void find_mean(unsigned char* arr, unsigned int len);

/**
 * @brief Return maximum value element of an array.
 *
 * This function takes 2 inputs an unsigned char array and unsigned integer length of an array, 
 * it returns the maximum value element as unsigned char. 
 *
 * @param arr unsigned char pointer to an n- element data array
 * @param len unsigned int Integer the length of arr
 * 
 * @return maximum value element "unsigned char"
 */
void find_maximum(unsigned char* arr, unsigned int len);

/**
 * @brief Return minimum value element of an array.
 *
 * This function takes 2 inputs an unsigned char array and unsigned integer length of an array, 
 * it returns the minimum value element as unsigned char. 
 *
 * @param arr unsigned char pointer to an n- element data array
 * @param len unsigned int Integer the length of arr
 * 
 * @return minimum value element "unsigned char"
 */
void find_minimum(unsigned char* arr, unsigned int len);

/**
 * @brief sort elements of an array from largest to smallest.
 *
 * This function takes 2 inputs an unsigned char array and unsigned integer length of an array, 
 * it returns a sorted array from largest to smallest elements as unsigned char. 
 *
 * @param arr unsigned char pointer to an n- element data array
 * @param len unsigned int Integer the length of arr
 * 
 * @return Sorted array "unsigned char"
 */
void sort_array(unsigned char* arr, unsigned int len);
#endif /* __STATS_H__ */
