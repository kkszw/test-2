#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char a[10],b[10],c[10];
    printf("请输入电话号码");
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    for(int i=0;i<strlen(a);i++)
    {
        if((a[i]>'9'||a[i]<'0')&&a[i]!='#')
        {
            printf("地区码包含非法字符\n");
            return;
        }
        if(i>=3||strlen(a)<3)
        {
            printf("地区码位数错误\n");
            return;
        }
    }
    for(int i=0;i<strlen(b);i++)
    {
        if(b[i]>'9'||b[i]<'0')
        {
            printf("前缀码包含非法字符\n");
            return;
        }
        if(i>=3||strlen(b)<3)
        {
            printf("前缀码位数错误\n");
            return;
        }
        if(atoi(b)<200)
        {
            printf("前缀码以0或1开头\n");
            return;
        }
    }
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]>'9'||c[i]<'0')
        {
            printf("后缀码包含非法字符\n");
            return;
        }
        if(i>=4||strlen(c)<4)
        {
            printf("后缀码位数错误\n");
            return;
        }
    }
    printf("是合法电话号码\n");
}
