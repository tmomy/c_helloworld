#include <stdio.h>  
#include <conio.h>  
int main(void)  
{  
    int c;  
    while((c=getchar())!=EOF)  
    {  
        if (c=='\t')  
        {  
            printf("\\t");  
        }  
        if (c=='\b')  
        {  
            printf("\\b");  
        }  
        if (c=='\\')  
        {  
            printf("\\\\");  
        }  
        if (c!='\t')  
        {  
            if (c!='\b')  
            {  
                if (c!='\\')  
                {  
                    putchar(c);  
                }  
            }  
        }  
  
    }  
    getch();  
    return 0;  
}  