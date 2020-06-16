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
 * @brief It contains all the function definiton.
 *
 * <Add It has function definiton with empty function body
 *
 * @author <Akhil Mehta>
 * @date <June 16, 2020 >
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)



int print_statistics(unsigned char test[]){
	find_median(test);
	find_mean(test);
	find_maximum(test);
	find_minimum(test);
	return 0;
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test);
  print_statistics(test);
  print_array(test);
}



/* Add other Implementation File Code Here */
int print_array(unsigned char test[]){
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d ", test[i]); /* code */
	}
	printf("\n");
	return 0;
}

int find_median(unsigned char test[]){

	int n = SIZE/2;
	int m = n-1;
	printf("%f\n", ((float)test[m]+(float)test[n])/2 );
	return 0;
}

int find_mean(unsigned char test[]){
	float sum = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		/* code */
		sum+=test[i];
	}
	printf("%f\n",sum/SIZE );
	return 0;
}

int find_maximum(unsigned char test[]){
	printf("%d\n",test[0] );
	return 0;
}

int find_minimum(unsigned char test[]){
	printf("%d\n",test[SIZE-1] );
	return 0;
}

int sort_array(unsigned char test[]){

	for (int i = 0; i < SIZE; ++i) 
        {
            for (int j = i + 1; j < SIZE; ++j) 
            {
                if (test[i] < test[j]) 
                {
                    int a = test[i];
                    test[i] = test[j];
                    test[j] = a;
                }
            }
        }
    return 0;
}
