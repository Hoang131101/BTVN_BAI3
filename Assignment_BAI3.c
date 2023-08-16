#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <float.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("please enter 1 type!");
        return 1;
    }

   char *type = argv[1];
   if(strcmp(type, "interger") == 0)
   {
        printf("size of %s : %d \n", type, sizeof(int));
        printf("Value range of %s: %d to %d \n",type, INT_MIN, INT_MAX);
   } else if(strcmp(type, "float") == 0)
   {
        printf("size of %s : %d \n", type, sizeof(float));
        printf("Value range of %s: %.5e to %.5e \n",type, FLT_MIN, FLT_MAX);
   } else if(strcmp(type, "double") == 0)
   {
        printf("size of %s : %d \n", type, sizeof(double));
        printf("Value range of %s: %.5e to %.5e \n",type, DBL_MIN, DBL_MAX);
   } else if(strcmp(type, "char") == 0)
   {
        printf("size of %s : %d \n", type, sizeof(char));
        printf("Value range of %s: %d to %d \n",type, CHAR_MIN, CHAR_MAX);
   } else if(strcmp(type, "all") == 0)
   {
        printf("size of int : %d \n", sizeof(int));
        printf("Value range of %d: %d to %d \n",type, INT_MIN, INT_MAX);
        printf("size of float : %d \n", sizeof(float));
        printf("Value range of float: %.5e to %.5e \n", FLT_MIN, FLT_MAX);
        printf("size of double : %d \n", type, sizeof(double));
        printf("Value range of %s: %.5e to %.5e \n",type, DBL_MIN, DBL_MAX);
        printf("size of char : %d \n", sizeof(char));
        printf("Value range of char: %.5e to %.5e \n", CHAR_MIN, CHAR_MAX);
   } else { printf("please enter true data type!");}
    return 0;
}