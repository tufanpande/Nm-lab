//LAB 4
//Title:least square method using c(fitting the data to straight line of tpe y=a+bx)

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){

int n,i;
float sumx, sumy, sumxy;
float a, b;
printf("Enter the number of data:");
scanf("%d",&n);
int data[n];
float x[n],y[n];
for(i=0;i<n;i++){
	printf("enter data for x[%d]:",i);
	scanf("%f",&x[i]);
}
for (i=0;i<n;i++){
	printf
	("enter data for y[%d]",i);
	scanf("%f",&y[i]);
}
for(i=0;i<n;i++){
	sumx=sumx+x[i];
	sumy=sumy+y[i];
	sumxy= sumxy+x[i]+y[i];
}
printf("Ex=%f and  \nEy=%f and \nEx*x=%f \nExy=%f\n",sumx,sumy,sumx*sumx,sumxy);
printf("%f=%da+b%f\n",sumy,n,sumx);
printf("%f=a%f+b%f",sumxy,sumx,sumx*sumx);
b=(n*sumxy-sumx*sumy)/(n*sumx*sumx-sumx*sumy);
a=(sumy-b*sumx)/n;
printf("\n%f and %f",a,b);
return 0;
}
