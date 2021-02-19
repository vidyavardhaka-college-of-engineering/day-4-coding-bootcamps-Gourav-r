//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
int main()
{
  //Declare all the variables[N, array a(1D array), i, sum=0] used in the code
 int N, i, j, sum=0;
  
  //Read the Value of array size N using scanf statement
    printf("Enter the size of an array\n"); 
   scanf("%d", &N);
  int array[N];
  //Read the array elements using for loop and scanf statment
  for(i=0;i<N;i++){
     scanf("%d",&array[i]);
   }
  // DO the addition of array elements and store the final result in variable sum
  for(i=0;i<N;i++){
    sum=sum+array[i];


  }
  //Print the sum of array elements which is stored in variable sum using printf statement
  printf("The sum of elements in array is %d",sum);
  return 0;
}
