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
 * @brief Program to get statistics from array.
 *
 * This program was created for the "Introduction to Embedded Systems Software
 * and Development Environments" at Coursera.
 *
 * @author Diego Hinojosa Cordova
 * @date 16-Apr-19
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/*
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test,SIZE);

}
*/

void print_statistics(unsigned char * arr, unsigned int len) {
  printf("YOUR ARRAY:");
  print_array(arr,len);
  printf("MEDIAN:%d\r\n",find_median(arr,len));
  printf("MEAN:%d\r\n",find_mean(arr,len));
  printf("MAXIMUM:%d\r\n",find_maximum(arr,len));
  printf("MINIMUM:%d\r\n",find_minimum(arr,len));
  sort_array(arr,len);
  printf("YOUR SORTED ARRAY:");
  print_array(arr,len);
}

void print_array(unsigned char * array, unsigned int len) {
    #ifdef VERBOSE
    for(unsigned int i=0; i<len; i ++){
        printf("%d ",array[i]);
    }
    printf("\r\n");
    #endif
}

unsigned char find_median(unsigned char * array, unsigned int len) {
    //sort
    unsigned char * a = malloc(sizeof(unsigned char)*len);
    for(unsigned int k=0; k<len;k++){
       a[k]=array[k];
    }
    int i = 0, j = 0, tmp;
    for (i = 0; i < len; i++) {
       for (j = 0; j < len - i - 1; j++) {
            if (a[j] > a[j + 1]) {
               tmp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = tmp;
           }
       }
    }
    unsigned int res;
    if(len%2!=0) res = a[len/2];
    else res = (a[len/2]+a[(len/2)-1])/2;
    free(a);
    return res;
}

unsigned char find_mean(unsigned char * array, unsigned int len) {
    unsigned int sum = 0;
    for(unsigned int i = 0; i < len; i++){
        sum+=array[i];
    }
    return sum/len;
}

unsigned char find_maximum(unsigned char * array, unsigned int len) {

    unsigned int max = 0;
    for(unsigned int i = 0; i < len; i++){
        if(array[i]>max) max=array[i];
    }

    return max;
}

unsigned char find_minimum(unsigned char * array, unsigned int len) {

    unsigned int min = array[0];
    for(unsigned int i = 0; i < len; i++){
        if(array[i]<min) min=array[i];
    }

    return min;
}

void sort_array(unsigned char * a, unsigned int len) {
    //Implement Bubble sort
    int i = 0, j = 0, tmp;
    for (i = 0; i < len; i++) {
       for (j = 0; j < len - i - 1; j++) {
            if (a[j] < a[j + 1]) { 
               tmp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = tmp;
           }
       }
    }
}

