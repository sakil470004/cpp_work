#include<stdio.h>
int main()
{int s,t,a,b,apple,countApple=0,m,n,countOrange=0,orange;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    for (int i = 1; i <=m; i++)
    {scanf("%d",&apple);
        apple=apple+a;
        if (apple>=s && apple<=t)
        {
           countApple++;
        }
        
    }
    for (int i = 1; i <=n; i++)
    {scanf("%d",&orange);
        orange=orange+b;
        if (orange>=s && orange<=t)
        {
           countOrange++;
        }
        
    }
    printf("%d\n%d",countApple,countOrange);
     return 0;
}