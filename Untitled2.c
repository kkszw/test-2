#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char a[10],b[10],c[10];
    printf("������绰����");
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    for(int i=0;i<strlen(a);i++)
    {
        if((a[i]>'9'||a[i]<'0')&&a[i]!='#')
        {
            printf("����������Ƿ��ַ�\n");
            return;
        }
        if(i>=3||strlen(a)<3)
        {
            printf("������λ������\n");
            return;
        }
    }
    for(int i=0;i<strlen(b);i++)
    {
        if(b[i]>'9'||b[i]<'0')
        {
            printf("ǰ׺������Ƿ��ַ�\n");
            return;
        }
        if(i>=3||strlen(b)<3)
        {
            printf("ǰ׺��λ������\n");
            return;
        }
        if(atoi(b)<200)
        {
            printf("ǰ׺����0��1��ͷ\n");
            return;
        }
    }
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]>'9'||c[i]<'0')
        {
            printf("��׺������Ƿ��ַ�\n");
            return;
        }
        if(i>=4||strlen(c)<4)
        {
            printf("��׺��λ������\n");
            return;
        }
    }
    printf("�ǺϷ��绰����\n");
}
