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
 * @brief implementation file for statistical functions
 *
 * 
 *
 * @author Abdurrahman Moghram
 * @date 04/14/2024
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_array(test,SIZE);

  // Stat information about array "Max, Min, Mean & Median"
  print_statistics(test,SIZE);
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *arr, unsigned int len)
{
    printf("Array Statistical Information: \n");
    printf("Minimum: %u\n", find_minimum(arr, len));
    printf("Maximum: %u\n", find_maximum(arr, len));
    printf("Mean: %u\n", find_mean(arr, len));
    printf("Median: %u\n", find_median(arr, len));
}

void print_array(unsigned char *arr, unsigned int len)
{
  printf("Array: ");
  for (unsigned int i = 0; i < len; i++){
    printf("%u ", arr[i]);
  }
  printf("\n");
}

unsigned char find_median(unsigned char *arr, unsigned int len)
{
  sort_array(arr, len);

  if (len % 2 == 0) {
      return (arr[len / 2 - 1] + arr[len / 2]) / 2;
  } else {
      return arr[len / 2];
  } 
}

unsigned char find_mean(unsigned char *arr, unsigned int len)
{
  unsigned int sum = 0;
  for(unsigned int i = 0; i < len; i++) {
      sum += arr[i];
  }
  return sum / len;
}

unsigned char find_maximum(unsigned char *arr, unsigned int len)
{
  unsigned char min = arr[0];
  for(unsigned int i = 1; i < len; i++) {
      if (arr[i] < min) {
          min = arr[i];
      }
  }
  return min;
}

unsigned char find_minimum(unsigned char *arr, unsigned int len)
{
  unsigned char max = arr[0];
  for(unsigned int i = 1; i < len; i++) {
      if (arr[i] > max) {
          max = arr[i];
      }
  }
  return max;
}

void sort_array(unsigned char *arr, unsigned int len)
{
  int i, j;
  for (i = 0; i < len-1; i++) {        
        // Last i elements are already in place
        for (j = 0; j < len-i-1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap the elements
                unsigned char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
  }
}
