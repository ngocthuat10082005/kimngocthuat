#include<stdio.h>
#include<conio.h>
int main(){
	FILE *f1,*f2;
	f1=fopen("D:\\Baihat.txt","rt");
	f2=fopen("D:\\Baica.txt","wt");
//	printf("kdsfskdfjskd fksdf ksad fksad jfksd fksad fksda fk");
	if(f1!=NULL && f2!=NULL)
	{
	//	printf("kdsfskdfjskd fksdf ksad fksad jfksd fksad fksda fk");
		rewind(f1);
		int ch=fgetc(f1);
		while(!feof(f1))
		{
			fputc(ch,f2);
			ch=fgetc(f1);
			
		}
		//fcloseall();
		fclose(f1);
		fclose(f2);
		
	}
	getch();
	return 0;
	
}
