#include <stdio.h>
#include <stdlib.h>
struct circle
{
    float r;
    float pi;
    float area;
};  /* 声明circle 结构 */ 
int main()
{
    struct circle myCircle; /* 声明circle的结构变量 */
    struct circle *getData; /* 声明circle的结构指针 */
    
    /* getData 指向myCircle */
    getData = &myCircle;
    /* 设定圆半径 */
    myCircle.r=5;
    myCircle.pi = 3.14159;
    /* 设定圆周率 */
    myCircle.area = myCircle.r*myCircle.r*myCircle.pi;
    /* 计算圆面积 */
    
    printf("getData->r = %.2f\n", getData->r); 
    printf("getData->pi = %.2f\n", getData->pi);
    printf("getData->area = %.2f\n", getData->area);
    /* 第一种结构指针存取方式 */ 
    printf("(*getData).r = %.2f\n", (*getData).r); 
    printf("(*getData).pi = %.2f\n", (*getData).pi);
    printf("(*getData).area = %.2f\n", (*getData).area);
    /* 第二种结构指针存取方式 */ 
    system("pause");
    return 0;
}
