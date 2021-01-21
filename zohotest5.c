#include<stdio.h>
#define size 20
int main()
{
  int arr[size][size],i,j,n,count1=0,count2=0,k=0;
  scanf("%d",&n);
   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&arr[i][j]);
   for(i=0;i<n;i++)
   { for(j=0;j<n;j++)
      printf("%3d",arr[i][j]);
      printf("\n");
    }

if(n==2)
 {
   if(arr[0][1]==0)
     printf("lower triangular matrix\n");
   else if(arr[1][0]==0)
    printf("upper triangular matrix\n");
   else
     printf("not a triangular matrix\n");
 }
 else
 {
 
  
  for(i=0;i<n;i++)
  {k=k+i;
     for(j=0;j<n;j++)
     {
       if(i>j)
       {
       if(arr[i][j]==0)
        count1++;
       }
      if(j>i)
      {
        if(arr[i][j]==0)
          count2++;
      }
     }
  
  }
  //printf("%d\n",k);
 if(count1==k && count2==(n-1)*2 )
   printf("both upper and lower triangular matix\n");
 else if((count1==k))
    printf("upper triangular matrix\n");
  else if(count2==k)
    printf("lower triangular matrix\n");
  else
   printf("not a triangular matrix\n");
  }
}
