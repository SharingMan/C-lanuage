#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[80];
    int i, length = 0;

    printf("�������ַ�����");
    scanf("%s", input);
    for(length = 0; input[length] != '\0'; length++);
    /* �����ַ������� */ 
    for(i = length -1; i >= 0; i--)
        printf("%c", input[i]);
    /* �����ַ������� */ 
    putchar('\n');

    system("pause");
    return 0;
}
