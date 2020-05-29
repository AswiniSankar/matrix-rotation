//matrix rotation
/*
input:3x3
1 2 3
4 5 6
7 8 9

---original matrix
1 2 3 
4 5 6 
7 8 9 

---90 degree rotational matrix
3 6 9 
2 5 8 
1 4 7 

---180 degree rotational matrix
9 8 7 
6 5 4 
3 2 1 

---270 degree rotational matrix
7 4 1 
8 5 2 
9 6 3 

---360 rotational matrix
1 2 3 
4 5 6 
7 8 9 

*/

#include<stdio.h>
#define size 100
int a[size][size],n,i,j,t1=0,t2;
int trans[size][size];
int main()
{
 scanf("%d",&n);
 t1=0;
 t2=n-1;
 for(i=0;i<n;i++)
   for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);
 printf("\n---original matrix\n");
 for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
     printf("%d ",a[i][j]);
    printf("\n");
  }
  printf("\n---90 degree rotational matrix\n");
   for(i=0;i<n;i++)
    {for(j=0;j<n;j++) 
     { printf("%d ",a[t1][t2]);
        t1++;
     }
     t1=0;
     t2--;
     printf("\n");
     }
    t1=n-1;
    t2=n-1;
    printf("\n---180 degree rotational matrix\n");
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++) 
     { printf("%d ",a[t1][t2]);
        t2--;
     }
     t1--;
     t2=n-1;;
     printf("\n");
     }
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        trans[j][i]=a[i][j];
 printf("\n---270 degree rotational matrix\n");
 for(i=0;i<n;i++)
  {for(j=n-1;j>=0;j--)
     printf("%d ",trans[i][j]);
    printf("\n");
  }
 printf("\n---360 rotational matrix\n");
 for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
     printf("%d ",trans[j][i]);
    printf("\n");
  }
 printf("\n");
 return 0;
}

#include<stdio.h>
int main()
{
 int n,i,j,a[50][50],t=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
   for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);
  while(t<4)
  {
   if(t==0)
   { printf("\n----90 degree rotation----\n");
      for(i=0;i<n;i++)
        { for(j=0;j<n;j++)
            printf("%d",a[j][n-1-i]);
           printf("\n"); 
        }  
   }
   else if(t==1)
   { printf("\n----180 degree rotation----\n");
     for(i=0;i<n;i++)
        { for(j=0;j<n;j++)
            printf("%d",a[n-i-1][n-1-j]);
           printf("\n"); 
        } 
   }
  else if(t==2)
  { printf("\n----270 degree rotation----\n");
       for(i=0;i<n;i++)
        { for(j=0;j<n;j++)
            printf("%d",a[n-1-j][i]);
           printf("\n"); 
        }  
  }
  else
  { printf("\n----360 degree rotation----\n");
        for(i=0;i<n;i++)
        { for(j=0;j<n;j++)
            printf("%d",a[i][j]);
          printf("\n"); 
        }  
  }
   
   t++;
 }
 printf("\n");
 return 0;
}
