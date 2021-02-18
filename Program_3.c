//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  //Declare all the variables[row, col, array a(2D array), i] used in the code
  int row, col, array[M][N],i ;
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   scanf("%d",M);
   scanf("%d",N); 
   //Read the elements of matrix a using nested for loop and scanf statment
   for(i=0;i<M;i++){
     scanf("%d",&array[M])
     for(i=0;M<N:i++){
       scanf("%d",&array[N])
     }
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
  
  return 0;
}
