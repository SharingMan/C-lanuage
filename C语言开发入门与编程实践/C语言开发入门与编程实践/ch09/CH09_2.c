#include <stdio.h>
#include <stdlib.h>
struct circle
{
    float r;
    float pi;
    float area;
};  /* ����circle �ṹ */ 
int main()
{
    struct circle myCircle; /* ����circle�Ľṹ���� */
    struct circle *getData; /* ����circle�Ľṹָ�� */
    
    /* getData ָ��myCircle */
    getData = &myCircle;
    /* �趨Բ�뾶 */
    myCircle.r=5;
    myCircle.pi = 3.14159;
    /* �趨Բ���� */
    myCircle.area = myCircle.r*myCircle.r*myCircle.pi;
    /* ����Բ��� */
    
    printf("getData->r = %.2f\n", getData->r); 
    printf("getData->pi = %.2f\n", getData->pi);
    printf("getData->area = %.2f\n", getData->area);
    /* ��һ�ֽṹָ���ȡ��ʽ */ 
    printf("(*getData).r = %.2f\n", (*getData).r); 
    printf("(*getData).pi = %.2f\n", (*getData).pi);
    printf("(*getData).area = %.2f\n", (*getData).area);
    /* �ڶ��ֽṹָ���ȡ��ʽ */ 
    system("pause");
    return 0;
}
