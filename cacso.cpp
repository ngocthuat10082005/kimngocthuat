#include<stdio.h>
#include<conio.h>
int main(){
	FILE*f;
	fopen("D:\\CacSo.txt","wb");
	if(f!=NULL)
	{
		double d=3.14;
		int i=101;
		long l=54321;
		fwrite(&d,sizeof(double),l,f);
		fwrite(&i,sizeof(int),l,f);
		fwrite(&l,sizeof(long),l,f);
		
		rewind(f);
		fread(&d,sizeof(double),l,f);
		fread(&i,sizeof(int),l,f);
		fread(&l,sizeof(long),l,f);
		printf("cac ket qua la:%f,%d,%dl",d,i,l);
		
		fclose(f);
		
			}
			getch();
			return 0;
}
