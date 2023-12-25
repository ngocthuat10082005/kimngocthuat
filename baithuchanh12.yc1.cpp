#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{FILE * fp;
char filename[67], ch;
printf ( "filename: " );
gets (filename);
if ((fp = fopen (filename,"w")) == NULL)
{printf( "create file error \n");
exit (1);
}
while((ch= getche() ) != '\r')
putc (ch, fp);
fclose (fp);
return 0;
}
