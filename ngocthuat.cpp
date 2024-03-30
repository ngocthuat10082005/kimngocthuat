#include <stdio.h>
#include <iostream>

int LinearSearch (int a[],int N,int x){
	int i=0;
	while ((i<N) && (a[i] !=x)) i++;
	if(i==N)
return -1;
else return i;}

int main(){
    //khai bao bien n
    int n, x, result;
    printf("NHAP VAO N PHAN TU: ");
    //nhap du lieu va gan vao bien int n
    scanf("%d",&n);
    //sau khi nhap n, khai bao mang int a[n] (mang nay co n phan tu)
    int a[n];
    //dung vong lap for duyet tu vi tri index thu 0 cho den vi tri n - 1 
    for(int i = 0; i <= n - 1; i++){
        //nhap gia tri va gan vao tung phan tu a[i] cua mang
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nPHAN TU SAU KHI NHAP VAO MANG\n");
    //dung vong lap for duyet tu vi tri index thu 0 cho den vi tri n - 1 
    for(int i = 0; i <= n - 1; i++){
        //xuat cac phan tu a[i] co trong mang ra man hinh
        printf("A[%d] = %d \n",i, a[i]);
    }






	printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);
 // result = linearSearch(a, n, x);
    if(result == -1) printf("Khong tim thay gia tri %d trong mang.\n",x);
    else printf("da tim thay gia tri %d tai vi tri %d",x,result);
 
    printf("\n----------------------------\n");
    
  return 0;
}

