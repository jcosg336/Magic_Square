/*
Name: JCosg336
Date: 9/30/16
Filename: funct.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "square.h"

void makeSqr(int s){

                    //variable declarations and intializations
  int magic[s][s];  //two dimensional array to hold calculations
  int max = s*s;    //calculate maximum number of cells
  int row, col, next_row, next_col, i, j;   //initialize varibles for calculation handling

  for (row = 0; row < s; row++){
    for (col = 0; col < s; col++){
      magic[row][col] = 0;
    }
  }

  // starting position
  row = 0;
  col = s/2;

  //Calculate Magic Square values using collumn and row numbers as well as the user supplied
  //variable s which represents square size
  for (i=1; i<=max; i++) {
    magic[row][col] = i;

    next_row = (row - 1 + s)%s;
    next_col = (col + 1)%s;

    if (magic[next_row][next_col] > 0) {
      row = (row+1)%s;
    }
    else {
      row = next_row;
      col = next_col;
    }
  }

  //build Magic Square top boarder
  printf("**");
  for(i=0; i<s; i++){
    printf("*****");
  }

  //build Magic Square right and left boarder as each row is created
  //build Magic Square body with previous calculations as well as display row toals to the right side of square
  printf("*\n*");
  for (i = 0; i < s; i++) {
    for (j = 0; j < s; j++) {
      printf("%5d", magic[i][j]);
    }
    printf(" *%5d", s*(s*s+1)/2);
    printf("\n*");
  }

  //print Magic Square bottom boarder
  printf("*");
  for(i=0; i<s; i++){
    printf("*****");
  }

  //print collumn totals
  printf("*\n ");
  for(i=0; i<s; i++){
    printf("%5d", s*(s*s+1)/2);
  }

  printf("\n");
}
