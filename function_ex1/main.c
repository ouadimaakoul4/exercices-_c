#include <stdio.h>
#include <stdlib.h>

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  myFunction("jim", 18);
  myFunction("alfred", 26);
  myFunction("jems", 22);
  return 0;
}
