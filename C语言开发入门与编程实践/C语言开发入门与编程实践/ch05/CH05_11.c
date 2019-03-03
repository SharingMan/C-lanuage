#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[80];
    int i, length = 0;

    printf("ÇëÊäÈë×Ö·û´®£º");
    scanf("%s", input);
    for(length = 0; input[length] != '\0'; length++);
    /* ¼ÆËã×Ö·û´®³¤¶È */ 
    for(i = length -1; i >= 0; i--)
        printf("%c", input[i]);
    /* ¼ÆËã×Ö·û´®³¤¶È */ 
    putchar('\n');

    system("pause");
    return 0;
}
