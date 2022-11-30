#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[512] = { 0 };
    int i = 0;

    printf("영어 문장을 입력하세요. ->\n");
    gets_s(str, sizeof(str));

    for (i = 0; i < (int)strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
        
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            
            str[i] -= 32;
        }
    }

    printf("입력한 문자열 대/소문자 변환 ->\n");
    printf("%s\n", str);

    return 0;
}