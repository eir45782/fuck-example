#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( ){

 FILE *fp;
 char ch;

  printf("lanpa");

  if((fp = fopen("test.txt","r"))== NULL)
  {			
         printf("open file fuck\n");
         system("PAUSE MMA UAAA");
         exit(0);
  }

  printf("lanpa2");

  while( (ch=getc(fp) != EOF ))
  {
	 int i = 0; 
         printf("LOOP%C\n",ch);
	 printf("conunt %d\n",i);
	 i++;
  }		
			
  fclose(fp);	
  return 0;
	
}
