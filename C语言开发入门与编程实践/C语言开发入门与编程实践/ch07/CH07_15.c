#include <stdio.h>
#include <stdlib.h>

void setX20(void);  /* �趨ȫ���������ֵΪ 20 */
void setX30(void);  /* �趨ȫ���������ֵΪ 30 */
int x=10;/* ���� x Ϊȫ������� */

int main(void)
{
    
    printf( "x = %d\n", x );
    setX20();
    printf( "x = %d\n", x );
    setX30();
    printf( "x = %d\n", x );
    
    system("pause");
    return 0;
}
void setX20(void)
{
    x = 20;
}

void setX30(void)
{
    x = 30;
}
