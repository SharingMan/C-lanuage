/*���з������ϰ*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf( "\"\x48\x45\x4c\x4c\x4f\x21" );      /*��16���Ʊ�ʾ����ʾ"HELLO!�ַ�*/
    printf( "\127\117\122\114\104\41\"\n" );    /*��8���Ʊ�ʾ����ʾWORLD!"�ַ�
    ������α껻��*/
    
    system("pause");
    return 0;
}
