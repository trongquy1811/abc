#include<stdio.h>
int nhap(){
	int n;
	do{ 
	printf("nhap mot so nguyen : ");scanf("%d",&n);
}
	while (n<=0);	
return n;
}
void giaithua(int n,int& gt){
	gt=1;
	for(int i=3;i<=n;i++)
	gt=gt*i;
}
int main(){
	int a,b,c;
	a=nhap();b=nhap();c=nhap();
	int s1,s2,s3;
	giaithua(a,s1);giaithua(b,s2);giaithua(c,s3);
	printf("tong la %d",s1+s2+s3);
}
