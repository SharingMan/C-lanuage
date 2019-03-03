#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iVal=10;         /* 整数变数 */
    double dVal=123.45;   /* 双精度实数变数 */
    
    int* piVal=NULL; /* 声明为空指针 */ 
    piVal= &iVal;   /* 整数类型的指针变量，指向iVal变量地址 */
    
    double* pdVal=&dVal;    /* 双精度实数类型的指针变量，指向dVal变量地址 */
    
    printf("piVal 变量地址为 %p\n",piVal);
    printf("piVal 变量所指向地址的数据内容为 %d\n",*piVal);        
             
   *piVal=20; /* 重新指定piVal指针变量的数据内容为20 */ 
    printf("piVal 指针变量重新设定后,iVal的数据内容同步更改为 %d\n",iVal);  
    printf("整数iVal所占用的内存空间为:%d 位\n", sizeof(iVal));
    printf("整数指针变量piVal所占用的内存空间为:%d 位\n\n\n", sizeof(piVal));
    
    printf("pdVal 变量地址为 %p\n",pdVal);
    printf("pdVal 变量所指向地址的数据内容为 %f\n",*pdVal); 
    
    *pdVal=67.1234; /* 重新指定pdVal指针变量的数据内容为67.1234 */ 
    printf("pdVal 指针变量重新设定后,dVal的数据内容同步更改为 %f\n",dVal);  
    printf("双精度实数dVal所占用的内存空间为:%d 位\n", sizeof(dVal));
    printf("双精度实数指针变量pdVal所占用的内存空间为:%d 位\n", sizeof(pdVal));
    
    system("pause");      
    return 0; 
}
