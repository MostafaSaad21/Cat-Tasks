#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enetr your id \n");
   int id ,pass,count=1;
   scanf("%d",&id);


   if(id==1111)
   {
       printf("Enter your password \n");
       scanf("%d",&pass);
       if(pass==2222)
        printf("welcome");
       else
       {
                          printf("You are not registered\n");

           while(count!=3)
           {
                scanf("%d",&pass);

               if(pass==2222)
               {
                printf("welcome");
                break;
               }
               
            printf("You are not registered\n");
                    count++;

           }
           if(pass!=2222)
        printf("No more tries");
       }

   }
   else
                   printf("You are not registered");




    return 0;
}
