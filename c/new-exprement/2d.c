#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int count = 0;
    char ch;

    for (int j = 0; scanf("%c",&ch) == 1; j++)
    {

        if (ch == '"' && count == 0)
        {

            count++;

            printf("``");
        }
        else if (ch == '"' && count == 1)
        {

            count--;
            printf("''");
        
        }
        else
        {
            printf("%c", ch);
        }
    }

    return 0;
}



// #include <stdio.h>
// #include<stdlib.h>
// #include <string.h>
// int main()
// {
//     int count = 0;
//     char ch[5000];
// scanf("%[^\n]",ch);
//     for (int i = 0; ch[i] != '\0'; i++)
//     {
//         if (ch[i] == '"' && count == 0)
//         {
          
//             count++;
          
//             printf("``");
//         }
//         else if (ch[i] == '"' && count == 1)
//         {

//             count++;
//             printf("''");
//             count=0;
//         }
//         else
//         {
//             printf("%c", ch[i]);
//         }
//     }

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     char ch;
//     int cnt=0;
//     while(scanf("%c",&ch)==1)
//     {
//         if(ch=='"')
//         {
//             cnt++;
//             if(cnt%2==1) printf("``");
//             else if(cnt%2==0) printf("''");
//         }
//         else printf("%c",ch);
//     }
// }