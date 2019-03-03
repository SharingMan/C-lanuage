#include <stdio.h>
#include <stdlib.h>

struct circle
{
    float r;
    float pi;
    float *area;
};  /* 圆的结构体，并设定结构成员area为指针变量 */

int main()
{
    struct circle myCircle;
    struct circle *getData;
    
    float Area;
    
    myCircle.r=5;
    myCircle.pi = 3.14159;
    myCircle.area = &Area;/* 指向一个实数地址 */ 
    *myCircle.area= myCircle.r*myCircle.r*myCircle.pi;  
    printf("*myCircle.area = %f\n", *myCircle.area);/* 直接取 myCircle 的 area 值 */
    printf("myCircle.area = %p\n", myCircle.area);/* 直接取 myCircle 的 地址 */
    printf("Area = %f\n", Area); /* myCircle的area指向Area,两者数据内容相同 */ 
    printf("&Area = %p\n", &Area); /* 显示 Area 的地址,myCircle 的 地址相同 */
    printf("-----------------------------------------\n"); 
    
    getData = &myCircle;/* getData 指向myCircle */
      
    printf("getData->r = %f\n", getData->r);    
    printf("getData->pi = %f\n", getData->pi);
    printf("getData->area = %p\n", getData->area);/* getData间接取area的地址 */
    printf("*getData->area = %f\n", *getData->area); /* getData间接取area的值 */ 
    
    
    system("pause");
    return 0;
}
