#include<stdio.h>
#include<conio.h>
/*
int main(){
	int a[100],n,i;
	

	
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
		
}

int main(){

 int max=0, i;
 int a[5]={1,2,3,4,5};
 for( i=0; i<5; i++)
 {
 	if(a[i]>=max)
 	max=a[0];
 }
 	printf("\n phan tu lon nhat la = %d", max);
 	getch();
}
*/
int main()
{
	int tong =0,tich=1,dem=0,i;
	int a[5]={1,2,3,4,5};
	for( i=0; i<5; i++)
	{
	tong=tong+a[i];
		tich=tich*a[i];
		dem=dem+1
}
	
	printf("\n tong mang =%d",tong);
	printf("\n tich mang =%d",tich);
	printf("\n so phan tu la=%d",dem);
	grt
}

