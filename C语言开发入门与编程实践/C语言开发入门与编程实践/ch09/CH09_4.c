#include <stdio.h>
#include <stdlib.h>

struct circle
{
    float r;
    float pi;
    float *area;
};  /* Բ�Ľṹ�壬���趨�ṹ��ԱareaΪָ����� */

int main()
{
    struct circle myCircle;
    struct circle *getData;
    
    float Area;
    
    myCircle.r=5;
    myCircle.pi = 3.14159;
    myCircle.area = &Area;/* ָ��һ��ʵ����ַ */ 
    *myCircle.area= myCircle.r*myCircle.r*myCircle.pi;  
    printf("*myCircle.area = %f\n", *myCircle.area);/* ֱ��ȡ myCircle �� area ֵ */
    printf("myCircle.area = %p\n", myCircle.area);/* ֱ��ȡ myCircle �� ��ַ */
    printf("Area = %f\n", Area); /* myCircle��areaָ��Area,��������������ͬ */ 
    printf("&Area = %p\n", &Area); /* ��ʾ Area �ĵ�ַ,myCircle �� ��ַ��ͬ */
    printf("-----------------------------------------\n"); 
    
    getData = &myCircle;/* getData ָ��myCircle */
      
    printf("getData->r = %f\n", getData->r);    
    printf("getData->pi = %f\n", getData->pi);
    printf("getData->area = %p\n", getData->area);/* getData���ȡarea�ĵ�ַ */
    printf("*getData->area = %f\n", *getData->area); /* getData���ȡarea��ֵ */ 
    
    
    system("pause");
    return 0;
}
