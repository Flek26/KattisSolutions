#include <stdio.h>
// I know this solution is not efficient..but it works. I will refine it later
int main()
{

        int arr[25];
        int max[2];
        scanf("%d",&arr[0]);
        scanf("%d",&arr[1]);
        scanf("%d",&arr[2]);
        scanf("%d",&arr[3]);

        int sum1 = arr[0] + arr[1] + arr[2] + arr[3];
         max[0] = 1;
         max[1] = sum1;
        scanf("%d",&arr[5]);
        scanf("%d",&arr[6]);
        scanf("%d",&arr[7]);
        scanf("%d",&arr[8]);
        int sum2 = arr[5] + arr[6] + arr[7] + arr[8];
        if (sum2 > max[1]){
                max[1] = sum2;
                max[0] = 2;
        }
        scanf("%d",&arr[10]);
        scanf("%d",&arr[11]);
        scanf("%d",&arr[12]);
        scanf("%d",&arr[13]);
        int sum3 = arr[10] + arr[11] + arr[12] + arr[13];
        if (sum3 > max[1]){
                max[1] = sum3;
                max[0] = 3;
        }

        scanf("%d",&arr[15]);
        scanf("%d",&arr[16]);
        scanf("%d",&arr[17]);
        scanf("%d",&arr[18]);
        int sum4 = arr[15] + arr[16] + arr[17] + arr[18];
        if (sum4 > max[1]){
                max[1] = sum4;
                max[0] = 4;
        }

        scanf("%d",&arr[20]);
        scanf("%d",&arr[21]);
        scanf("%d",&arr[22]);
        scanf("%d",&arr[23]);
        int sum5 = arr[20] + arr[21] + arr[22] + arr[23];
        if (sum5 > max[1]){
                max[1] = sum5;
                max[0] = 5;
        }

        printf("%d %d", max[0], max[1]);

return 0;
}
