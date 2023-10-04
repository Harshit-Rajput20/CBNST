#include <stdio.h>
#include <math.h>
int main()
{
float a[10][10],x,u1,u,y;
int i,j,n,n1,fact=1;
printf("enter the n\n");
scanf("%d",&n);
printf("enter the x: ");
for(i=0;i<n;i++)
scanf("%f",&a[i][0]);
printf("enter the y: ");
for(i=0;i<n;i++)
scanf("%f",&a[i][1]);
printf("enter the value to predict\n");
scanf("%f",&x);
for(j=2;j<n+1;j++)
{
for(i=0;i<n-j+1;i++)
a[i][j]=a[i+1][j-1]-a[i][j-1];
}
printf("the differnce table is \n");
for(i=0;i<n;i++)
{
for(j=0;j<=n-i;j++)
printf("%0.2f\t",a[i][j]);
printf("\n");
}
y=a[n/2][1];
printf("\n y: %f",y);
u=(x-a[n/2][0])/(a[1][0]-a[0][0]);
u1=u;
printf("\n%f",u1);
for(i=2;i<=n;i++)
{
 y=y+(u1/fact)*a[(n-2)/i][i];
 printf("%f\t",a[(n-1)/i][i]);
 fact=fact*i;
 if(i%2==0){
 u1=u1*(u+(i/2));
 printf("\n %f",u1);
 }
 else
 {
 u1=u1*(u-(i/2));
 printf("\n %f",u1);

 }
}
printf("\n\nthe desired value is %f",y);
return 0;
}
