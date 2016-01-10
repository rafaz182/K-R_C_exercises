#include<stdio.h>
/*Output the value of  the expression getchar() !=EOF*/
main()
{
      int c, d;
      printf("Press the ENTER  key:");
      c=getchar();
      printf("The value of the Expression getchar() !=EOF is:%d\n",getchar()!=EOF);

      printf("The value of EOF %d\n", EOF);
}
