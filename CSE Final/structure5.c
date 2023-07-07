#include <stdio.h>

struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
int main()
{
    int i;
    struct marks student[3] = {{45, 67, 81, 0},
                               {75, 53, 79, 0},
                               {57, 36, 71, 0}};

    struct marks total = {0, 0, 0, 0};
    for (i = 0; i <= 2; i++)
    {
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
        total.sub1 += student[i].sub1;
        total.sub2 += student[i].sub2;
        total.sub3 += student[i].sub3;
        total.total = total.total + student[i].total;
    }
    for (i = 0; i <= 2; i++)
        printf("student [% d] %d\n", i + 1, student[i].total);
    printf("\n\n\n%s %d\n%s %d\n%s %d\n", "Subject1:", total.sub1, "Subject2:", total.sub2, "Subject3:", total.sub3);
    printf("\nGrand total:%d", total.total);

    return 0;
}

/*
student [ 1] 193
student [ 2] 207
student [ 3] 164



Subject1: 177
Subject2: 156
Subject3: 231

Grand total:564
*/