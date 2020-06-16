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
 * @brief It contains all the header files
 *
 * <Add It has code outline, function prototypes and documentation
 *
 * @author <Akhil Mehta>
 * @date <June 16, 2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* print_statistics() */ 

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function takes an array of 40 characters. It will print the maximum value, minimum value, mean and median.
 *
 * @param array array of 40 charcaters
 * 
 * @return maximum value
 * @return minimum value
 * @return mean
 * @return median    	
 */
int print_statistics(unsigned char test[]);
 
 /* print_array() */ 

/**
 * @brief A function that prints the array 
 *
 * This function takes an array of 40 characters. It will print the array to the screen.
 *
 * @param array array of 40 charcaters
 * 
 * @return array    	
 */
int print_array(unsigned char test[]);
 
/* find_median() */ 

/**
 * @brief A function that returns the median value 
 *
 * This function takes an array of 40 characters. It will print the median value to the screen.
 *
 * @param array array of 40 charcaters
 * 
 * @return median    	
 */   
 int find_median(unsigned char test[]);
 /* find_mean() */ 

/**
 * @brief A function that returns the mean value 
 *
 * This function takes an array of 40 characters. It will print the mean value to the screen.
 *
 * @param array array of 40 charcaters
 * 
 * @return mean    	
 */   
 int find_mean(unsigned char test[]);
 /* find_maximum() */ 

/**
 * @brief A function that returns the maximum value 
 *
 * This function takes an array of 40 characters. It will print the maximum value to the screen.
 *
 * @param array array of 40 charcaters
 * 
 * @return maximum    	
 */   
 int find_maximum(unsigned char test[]);
 
 /* find_minimum() */ 

/**
 * @brief A function that returns the minimum value 
 *
 * This function takes an array of 40 characters. It will print the minimum value to the screen.
 *
 * @param array array of 40 charcaters
 * 
 * @return minimum    	
 */   
 int find_minimum(unsigned char test[]);
 
 /* sort_array() */ 

/**
 * @brief A function that sorts the array from largest to smallest
 *
 * This function takes an array of 40 characters. It sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @param array array of 40 charcaters
 * 
 * @return sorted array    	
 */   
 int sort_array(unsigned char test[]);
#endif /* __STATS_H__ */
