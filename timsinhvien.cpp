#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef truct
{
	char Ma[10];
	char HoTen[40];
	
}
SinhVien;
void WriteFile(char*FileName);
{
	FILE*f;
	int n,i;
	SinhVien sv;
	f=fopen(FileName,"wb");
	printf("Nhap bao nhieu sinh vien?");
	scanf("%d",&n);
	fflush(stdin);
	for(i=1;i<=n;i++)
	{
		printf("sinh vien thu %i\n",i);
		printf("-MSSV:");
		gets(sv.Ma);
		printf("-Ho Ten:");
		gets(sv.HoTen);
		fwrite(&sv,sizeof(sv),l,f);
		fflush(stdin);
		
	}
	fclose(f);
	printf("Bam phim bat ki de tiep tuc")
	getch();
	
}
void Readfile(char*FileName)
{
	FILE*F;
	SinhVien sv;
	f=fopen(FileName,"rb");
	printf("MSSV|Ho va ten\n");
	fread(&sv,sizeof(sv),l,f);
	{
		printf("%s|%s\n",sv.Ma,sv.HoTen);
		fread(&sv,sizeof(sv),l,f);
		
	}
	fclose(f);
	printf("bam phim bat ki de tiep tuc!!!");
	getch();
	
}
void Search(cha*FileName)
{
	char MSSV[10];
	FILE*f;
	int Found=0;
	SinhVien sv;
	fflush(stidn);
	printf("Ma so sinh vien can tim:");
	getS(MSSV);
	f=fopen(FileName,"rb");
	while(!feof(f)&&Found==0)
	{
		fread(&sv,sizeof(sv),l,f);
		if(strcmp(sv.Ma,MSSV)==0)Found=1;
		
	}
	fclose(f);
	if(Found==1)
	printf("Tim thay SV co ma %s.Ho ten la: %s",sv.Ma,sv.HoTen);
	else
	printf("Tim khong thay sinh vien co ma 5s",MSSV);
	printf("\n Bam phim bat ki de tiep tuc!!!");
	getch();
	
}
int main()
{
	int c;
	for(;;)
	{
		clrscr();
		printf("1.nhap DSSV\N");
		printf("2.In DSSV\n");
		printf("3.Tim kiem\n");
		printf("4.Thoat\n");
		
		printf("Bam chon 1,2,3,4:");
		scanf("%d",&c);
		if(c==1)
		WriteFile("D:\\SinhVien.Dat");
		else if (c==2)
		ReadFile("D:\\SinhVien.Dat");
		else if(c==3)
		Search("D:\\SinhVien.Dat");
		else break;
		
	}
	
}
return 0;
}
