#include <stdio.h>
struct students{
    int id;
    int Programming,DataStructures,DiscreteMath,Algorithm;

};
int main() {
    struct students std[10] = {{1111, 59, 69, 27, 48},
                               {2222, 55, 44, 99, 33},
                               {3333, 37, 40, 84, 27},
                               {4444, 35, 55, 97, 84},
                               {5555, 54, 76, 54, 78},
                               {6666, 55, 44, 99, 73},
                               {7777, 31, 67, 63, 47},
                               {8888, 25, 33, 9,  32},
                               {9999, 55, 44, 21, 8},
                               {1235, 51, 81, 96, 31}};
    int ID;
    int x=0;
    printf("Enter your Id \n");
    scanf("%d", &ID);
    int i = 0;
    while (i < 10) {
        if (std[i].id == ID) {
            printf("Your Grades:\n");
            printf("Programming: %d\n", std[i].Programming);
            printf("Data Structures: %d\n", std[i].DataStructures);
            printf("Discrete Math: %d\n", std[i].DiscreteMath);
            printf("Algorithms: %d\n", std[i].Algorithm);
           x=1;
            break;

        }
        i++;

    }
    if (x==0)
        printf("Wrong ID");
    return 0;
}
