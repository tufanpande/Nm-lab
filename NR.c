//implementation of NR method using C.
#include<stdio.h>
#include<math.h>
float f(float x) {
    return x*x*x -4*x-9;
}
float df(float x){
	return 3*x*x-4;
}
int main(){
	float a,b,e=0.0001;
	printf("Enter the guesses:");
	scanf("%f",&a);
	if(df(a)==0){
		printf("mathematical error!!");
		
	}else{
		do{
			b=a-(f(a)/df(b));
			a=b;
			
		}while(fabs(f(b))>e);
		
	}
	printf("The root of equation is:%f",b);
	return 0;
}


