//Implemtation using Sacant method using c.
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
	return sin(x)-1.5*x-2.5;
}


int main(){
	float a,b,c,e=0.0001;
	printf("Enter the initial guess a and b:");
	scanf("%f%f",&a,&b);
	if (f(a)*f(b)>0){
		printf("our initial guess is wrong");
	}	
	else{
		do{
			c=b-(b-a)*f(b)/(f(b)-f(a));
			if (f(a)*f(c)>0){
				a=c;
				
			}
			else{
				b=c;
				
			}
			 printf("%f\t%f\t%f\t%f\t%f\t\n",a,b,f(a),f(b),f(c));
		}
		while(fabs (f(c))>e);
		
	}
	printf("The root of equation is:%f",c);
	
	return 0;
	
}
