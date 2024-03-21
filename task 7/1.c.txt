#include <stdio.h>
struct employes{
    char *name;
    double salary;
    double bonus;
    double deductions;

};
int main() {
struct employes employe[3];
    employe[0].name="mohsen";
    employe[1].name="maged";
    employe[2].name="mariam";
double Total;
for(int i=0; i<3; i++)
{
    printf("Enter salary, bonus and deductions for %s:\n",employe[i].name);
    printf(" salary: ");
    scanf("%lf",&employe[i].salary);
    printf("bonus: ");
    scanf("%lf",&employe[i].bonus);
    printf("deductions: ");
    scanf("%lf",&employe[i].deductions);

Total=employe[i].salary+employe[i].bonus-employe[i].deductions;

}
    printf("the total values: %lf",Total);

    return 0;
}
