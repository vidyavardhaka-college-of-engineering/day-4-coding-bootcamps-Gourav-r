//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.



#include<stdio.h> 

int main()
{
   int i, max, min;
  int array[10];
   for(i=0;i<10;i++){
     scanf("%d",&array[i]);
   }
   for(i=0;i<10;i++){
      printf("%d\t",array[i]);}
printf("\n");
max=min=array[0];
    for(i=0;i<10;i++){
       if (max>array[i])
          max=array[i];
    
        if (min<array[i])
           min=array[i];
}
   printf("the max number is %d and min is %d", max ,min);
   return 0; 
}

