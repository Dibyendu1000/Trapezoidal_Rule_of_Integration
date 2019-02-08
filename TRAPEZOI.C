#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 20
float y_arr[MAX];
void y(float x,int i)
{
	float f;
	f=1/(1+pow(x,2));
	y_arr[i]=f;
}
void main()
{
	int n,i;
	float a,b,h,S1,S2=0;
	printf("Enter lower limit:");
	scanf("%f",&a);
	printf("Enter upper limit:");
	scanf("%f",&b);
	printf("Enter number of sub intervals:");
	scanf("%d",&n);
	h=(b-a)/n;
	for(i=0;i<=n;i++)
	{
		y(a+i*h,i);
	}
	S1=(h/2)*(y_arr[0]+y_arr[n]);
	for(i=1;i<n;i++)
	{
		S2=S2+y_arr[i];
	}
	S2=S2*h;
	S1=S1+S2;
	printf("Answer is:%f",S1);
	getch();
}