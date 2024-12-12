#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("utilisation de continue sur 4 \n");
int i = 0;

while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  printf("%d\n", i);
  i++;
}

printf("utilisation de break sur 4\n");
 i = 0;

while (i < 10) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
  i++;
}


return 0;
}
