#include<stdio.h>
#include <math.h>
int main()
{


int n,arr[100],i,j=0,num,rev=0,dig,arr2[100],temp=0,k,max;
printf("Enter N:");
scanf("%d",&n);
printf("Enter ele: \n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);


for(i=0;i<n;i++)
{
    rev=0;
    num=arr[i];
    //printf("%d\n",num);
    temp=num;
    while(num!=0)
    {
    dig=num%10;
    rev=rev*10+dig;
    num=num/10;
    }
    //printf("%d, %d     ",temp,rev);


    if(temp==rev)
    {
        arr2[j]=arr[i];
        j=j+1;
    }
    else
    {   arr2[j]==0;
        j=j+1;
    }


}

for(k=0;k<n;k++)
    printf("%d  ",arr2[k]);




max=arr2[0];
for(k=0;k<n;k++)
{
    if (arr2[k]>max)
        max=arr2[k];
}
printf("\nlongest palidrome is: %d  ",max);

return 0;
}
