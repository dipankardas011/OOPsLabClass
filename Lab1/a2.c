/*
+-----------------------+
| Dipankar Das 20051554 |
+-----------------------+
WAP in C to define a structure to store the employee name, ID, DOB, and basic salary of an employee. Store the details of 10 employees. Display the employee information having the highest salary. Sort the employee details according to their salary.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUMBER 3
#define MAX_CHAR 50

typedef struct employee
{
    char name[MAX_CHAR];
    u_int32_t id;
    struct dob
    {
        u_int32_t dd;
        u_int32_t mm;
        u_int32_t yy;
    } dob;
    u_int32_t baseSalary;
} employee;

void swap(u_int32_t *a, u_int32_t *b)
{
    u_int32_t t;
    t = *a;
    *a = *b;
    *b = t;
}

int main(int argc, char const *argv[])
{
    employee *ee;
    ee = (employee *)malloc(NUMBER * sizeof(employee));

    for (int i = 0; i < NUMBER; i++)
    {
        printf("enter name..\n");
        scanf(" %[^\n]s", ee[i].name);

        printf("enter id..\n");
        scanf("%d", &ee[i].id);

        printf("enter dob in dd/mm/yy..\n");
        scanf("%d/%d/%d", &ee[i].dob.dd, &ee[i].dob.mm, &ee[i].dob.yy);

        printf("enter base salary..\n");
        scanf("%d", &ee[i].baseSalary);
    }

    for (int i = 0; i < NUMBER; i++)
    {
        for (int j = 0; j <= (NUMBER - i - 1); j++)
        {
            if (ee[j].baseSalary < ee[j + 1].baseSalary)
            {
                // descending order
                char te[MAX_CHAR];
                strcpy(te, ee[j].name);
                strcpy(ee[j].name, ee[j + 1].name);
                strcpy(ee[j + 1].name, te);

                swap(&ee[j].id, &ee[j + 1].id);

                swap(&ee[j].baseSalary, &ee[j + 1].baseSalary);

                swap(&ee[j].dob.dd, &ee[j + 1].dob.dd);
                swap(&ee[j].dob.mm, &ee[j + 1].dob.mm);
                swap(&ee[j].dob.yy, &ee[j + 1].dob.yy);
            }
        }
    }

    for (int i = 0; i < NUMBER; i++)
    {
        printf("%d\n", (i + 1));
        printf("\tname.. %s\n", ee[i].name);

        printf("\tid.. %d\n", ee[i].id);

        printf("\tdob.. %d/%d/%d\n", ee[i].dob.dd, ee[i].dob.mm, ee[i].dob.yy);

        printf("\tbase salary.. %d\n", ee[i].baseSalary);
    }

    free(ee);
    remove(argv[0]);
    return 0;
}
