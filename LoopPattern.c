 #include <stdio.h> 
 int main()
 {
     int i,j,n;
     printf("Enter the n value:");
     scanf("%d",&n);
     for (i = 1; i<=n; i++)
     {
         for(j=1;j<=2*i;j++)
         {
             if(j%2!=0)
             {
                 printf("0");
             }
             else
             {
                 printf("1");
             }
         }
         printf("\n");
     } 
      return 0;
}
/* we can get the required output in simplifued manner also by using following code
#include <stdio.h> 
int main() 
{
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            printf("01");
        }
        printf("\n");
    }
    return 0;
}
*/
