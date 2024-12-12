
#include <stdio.h>


void permutation(int var1, int var2);


int main()
{
  int x = 45, y = 2;

  printf("\n Before swap Value of var1 and var2 is: %d, %d\n",x, y);
  permutation(x, y);
  printf("\n After swap Value of var1 and var2 is: %d, %d \n",x, y);
  return 0;
}

void permutation(int var1, int var2)
{
  int temp = var1;
  var1 = var2;
  var2 = temp;
  printf("\n voici la nouvelle valeur de nbr1 et nbr2 : %d , %d \n ",var1,var2);
}
