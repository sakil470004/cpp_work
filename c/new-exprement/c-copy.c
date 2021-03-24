#include <stdio.h>
int main()
{
    int x, y, i, n, m, k, l = 1, max = 0;

    for (int h = 1; h < 2;)
    {

        scanf("%d", &m);
        scanf("%d", &n);
        x = m;
        y = n;

        if (0 < m < 1000000)
        {
        }
        else
        {
            break;
        }
        int arr[n];

        for (i = m; i <= n; i++)
        {
            k = i;
            while (k != 1)
            {

                if (k % 2 == 0)
                {
                    k = k / 2;
                    l++;
                }
                else
                {
                    k = (3 * k) + 1;
                    l++;
                }
            }
            arr[i] = l;
            l = 1;
        }

        for (int j = x; j <= y; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
        printf("%d %d %d\n", x, y, max);
    }

    return 0;
}

// #include <stdio.h>
// #define MAX 1000000

// unsigned int CL[MAX], C, I, J, II, JJ, N;

// int main(){
//    for(I = 1; I < MAX; I++){
//       N = I;
//       C = 1;
//       while(N != 1){
//          if(N%2)
//             N = 3*N+1;
//          else
//             N /= 2;
//          C++;
//       }
//       CL[I] = C;
//    }

//    while(scanf("%u%u", &I, &J) == 2){
//       II = I;
//       JJ = J;
//       if(II > JJ){
//          N = II;
//          II = JJ;
//          JJ = N;
//       }
//       C = CL[II++];
//       while(II <= JJ){
//          if(C < CL[II])
//             C = CL[II];
//          II++;
//       }
//       printf("%u %u %u\n", I, J, C);
//    }
//    return 0;
// }