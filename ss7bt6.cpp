#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int min=a[0],max=a[0];
	for(int i=1;i<5;i++){
		if(a[i]%2==0){
			a[i]+=3;
		}else{
			a[i]+=2;
		}
	}
		for(int i=0;i<5;i++){
			printf("%d",a[i]);
		}

}
