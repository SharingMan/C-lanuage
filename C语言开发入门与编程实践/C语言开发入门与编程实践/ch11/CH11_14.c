#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number[44]; /* �������������� */ 
    int i, j, tmp;

    srand(time(NULL));
    for(i = 0; i < 44; i++)
        number[i] = i;
    for(i = 1; i < 44; i++)
    {
        j = rand() % 42 + 1;
        tmp = number[i];
        number[i] = number[j];
        number[j] = tmp;
    }/* ����43������� */ 
    printf("�������룺");
    for(i = 1; i < 7; i++)
        printf("%3d", number[i]);
    printf("\n�ر���룺%3d\n", number[7]);/* �ر���� */ 

    system("pause");
    return 0;
}
