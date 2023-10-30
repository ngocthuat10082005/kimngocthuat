#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//dem so lan xuat hien chuoi
int dslxhc(char s1[], char s2[]){
	int count = 0;
	char *temp = strstr(s1, s2);
	while(temp != NULL){
		count++;
		temp = strstr(temp + strlen(s2),s2);
	}
}


//chuyen doi chu in chu thuong
void chuyendoi(char x[]){
	for(int i=0;i<strlen(x); i++){
		if (i==0|| (i>0 && x[i-1]==32)){
			if(x[i]>=97 && x[i]<=122)
			x[i]=x[i]-32;
		}else{
			if(x[i]>=65&&x[i]<=90)
			x[i]=x[i]+32;
		}
	}
}

int main(){
	char s1[50];
	char s2[50];
	
	//nhap chuoi
	printf("nhap vao chuoi s1: ");
	gets(s1);
	printf("\nnhap vao chuoi s2: ");
	gets(s2);
	
	//xuat chuoi
	chuyendoi(s1);
	printf("\n chuoi s1 la: %s",s1);
	chuyendoi(s2);
	printf("\n chuoi s2 la: %s",s2);
	
	//xuat so lan dem
	int count_slxh=dslxhc(s1,s2);
	printf("\n so lan xuat hien chuoi s2 trong chuoi s1 la: %d",count_slxh);
	
	
}

