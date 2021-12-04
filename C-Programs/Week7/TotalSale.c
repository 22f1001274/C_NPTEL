#include<stdio.h>

// Calculating total sale of different items

void main()
{
  int itemSold[5], i;
  float itemCost[5], sale = 0;
  printf("Enter No of items sold of particular (5) item and its price\n"); 
  for (i=0;i<5;i++)
  {
    scanf("%d %f", &itemSold[i], &itemCost[i]);
    sale += itemSold[i] * itemCost[i];
  }
  for (i=0;i<5;i++)
    printf("%d\t%f\n", itemSold[i], itemCost[i]);
  printf("%f is the Total Sale\n", sale);
} 
    
  
