#include <stdio.h>
#include <stdlib.h>

void myFunction( int myNumbers[], int n) {
    myNumbers[n];
  for (int i = 0; i < n; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[11] = {10,20,30,40,50,60,87,75,94,56,58};

  myFunction(myNumbers,11);

  return 0;
}
