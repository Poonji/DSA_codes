#include<stdio.h>

void main()
{
   int a[5],b[5],i,c[10],j,k=0,n1,n2;



   printf("Enter number of  element first set\n");
   scanf("%d",&n1);
   printf("Enter the element of first set \n");
   for(i=0;i<n1;i++)
   scanf("%d",&a[i]);
   printf("Enter number of  element of second set\n");
   scanf("%d",&n2);
   printf("Enter the element of second set\n");
   for(i=0;i<n2;i++)
   scanf("%d",&b[i]);
   for(i=0;i<n1;i++)
   {
    for(j=0;j<k;j++)
       {
         if(c[j]==a[i]) 
            break;
       }
      if(j==k) 
      {
         c[k]=a[i];
         k++;
      }
    }
    
   for(i=0;i<n2;i++)
   {
       
      for(j=0;j<k;j++)
     
      {
         if(c[j]==b[i])
         break;
      }
     if(j==k) 
     {
       c[k]=b[i];
       k++;
     }
   }
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}


