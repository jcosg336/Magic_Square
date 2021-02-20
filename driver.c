/*
Name: JCosg336
Date: 9/30/16
Filename: driver.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "square.h"
#include "funct.c"

int main(int argc, char** argv){

  int size, verify = 0, temp = 0;

  if(argc == 2){
    temp = atoi(argv[1]);
  }

  if(temp%2 == 0){
    do{
      printf("Error...Even or No number read from command line!\n");
      printf("Please try again.\n");
      printf("Please enter the size of the square:\n");
      printf("Must be odd and between 1 and 17: ");
      scanf("%d", &size);

      if(size < 1){
        printf("Error...Number entered out of range!\n");
        printf("Please try again.\n");
      }
      if(size > 17){
        printf("Error...Number entered out of range!\n");
        printf("Please try again.\n");
      }
      if(size%2 == 0 ){
        printf("Error...Even number entered!\n");
        printf("Please try again.\n");
      }
      else{
        verify = 1;
      }
     }while(verify != 1);
    }

    else if(argc != 2){
      do{
        printf("Please enter the size of the square:\n");
        printf("Must be odd and between 1 and 17: ");
        scanf("%d", &size);

        if(size < 1){
          printf("Error...Number entered out of range!\n");
          printf("Please try again.\n");
        }
        if(size > 17){
          printf("Error...Number entered out of range!\n");
          printf("Please try again.\n");
        }
        if(size%2 == 0 ){
          printf("Error...Even number entered!\n");
          printf("Please try again.\n");
        }
        else{
          verify = 1;
        }
      }while(verify != 1);

    }else{
      size = atoi(argv[1]);
    }

  printf("Magic Square size: %d\n\n", size);
  makeSqr(size);

  return(0);
}
