#include<stdio.h>
#include <math.h>
int main()
{


int n,arr[100],i,count=0,j,uniq=1;
int visited[n];
printf("Enter N:");
scanf("%d",&n);
printf("Enter ele: \n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(int i=0; i<n; i++)
       visited[i]=0;


for(i=0;i<n;i++)
{
    if (visited[i]==0)
    {
        count=1;//not needed
        uniq=1;//this line not needed


        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {   visited[j]=1;
                uniq=0;
            }
        }

        if(uniq==0)
            printf("%d  ",arr[i]);

    }

}

return 0;
}

