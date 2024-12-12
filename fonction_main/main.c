
#include <stdio.h>

int main(void)   //int main()

{

    static int i = 10;

    if (--i) {

        printf("%d", i);

        main();  //  main(10);

    }

}
