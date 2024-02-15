#include <stdio.h>

void login()
{
    int id , pass;
printf("Enter your id \n ");
scanf("%d",&id);
    int  count=0;
if(id==1000)
    {
printf("Enter your password \n ");
scanf("%d",&pass);

if(pass==2000)
    printf("Welcome");
else
    while(pass!=2000)
{
 printf("Try again\n");
    scanf("%d",&pass);
    if(pass==2000)
    {
        printf("welcome");
        break;
    }
count++;
if(count==2)
    break;


}

}
else
    printf("wrong id");

}


int main() {
    login();
    return 0;
}



