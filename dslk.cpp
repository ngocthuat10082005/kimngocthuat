#include<bits/stdc++.h>
using namespace std;

struct tamgiac{
	float AB, BC, CA;
	struct tamgiac *next; 
};

typedef struct tamgiac tamgiac;

tamgiac *themtamgiac( float AB, float BC, float CA){
tamgiac *tamgiacmoi = new tamgiac();
tamgiacmoi->AB=AB;
tamgiacmoi->BC=BC;
tamgiacmoi->CA=CA;
tamgiacmoi->next=NULL;
return tamgiacmoi; 
}

void duyet(tamgiac *head){
	while (head != NULL){
		printf("%f",head->AB);
		printf("%f",head->BC);
		printf("%f",head->CA);
		head = head->next;
	}
}

int main(){
	float AB, BC, CA;
	
	printf("\nnhap vao canh AB:");
	scanf("%f",&AB);
	printf("\nnhap vao canh :CA");
	scanf("%f",&BC);
	printf("\nnhap vao canh CA:");
	scanf("%f",&CA);
} 
