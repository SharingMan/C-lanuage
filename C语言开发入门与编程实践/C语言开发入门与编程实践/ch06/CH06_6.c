#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10;
    int *ptr1 = &num;   /* ptr1��ָ��num��ָ�� */ 
    int **ptr2 = &ptr1;/* ptr2��ָ��ptr1��ָ�� */ 
    int ***ptr3 = &ptr2;/* ptr3��ָ��ptr2��ָ�� */ 
    
    puts( "--------------------------------------------------------------------" );
    printf( "num=%d   &num=%p\n", num, &num );
    puts( "--------------------------------------------------------------------" );
    printf( "&ptr1=%p ptr1=%p  *ptr1=%d \n", &ptr1, ptr1 ,*ptr1);
    puts( "--------------------------------------------------------------------" );
    printf( "&ptr2=%p ptr2=%p *ptr2=%p **ptr2=%d \n", &ptr2, ptr2,*ptr2 ,**ptr2);
    puts( "--------------------------------------------------------------------" );
    printf( "&ptr3=%p ptr3=%p *ptr3=%p **ptr3=%p ***ptr3=%d \n", &ptr3, ptr3,*ptr3 ,**ptr3,***ptr3);
    puts( "--------------------------------------------------------------------" );

    system("pause");
    return 0;
}
