#include<stdio.h>
#include<conio.h>

int main(){
	int a[100],n,i,max=i,x;
	

	
	printf("\n nhap so phan tu mang ");
	scanf("%d",&n);
	
	for( i=0 ; i<n; i++){
		printf("nhap c[%d]=",i);
		scanf("%d",&a[i]);
		}
		getch();

for(i=0;i<n;i++){
	printf("\n phan tu thu a[%d]=%d",i,a[i]);
	}
	for(x=0;x<i;i++)
	{if(a[i]>=max)
	max=a[i];}
	printf("\n phan tu lon nhat la=%d",max);
	getch();
		
}
 
