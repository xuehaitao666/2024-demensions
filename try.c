#include <stdio.h>
#define MAX_SIZE 101
void matrix_multiply(int a[][MAX_SIZE], int b[][MAX_SIZE], long long int c[][MAX_SIZE],int m ,int n, int p);
int main()
{
    int m, n, p;
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE];
    long long int C[MAX_SIZE][MAX_SIZE];
    scanf("%d %d %d", &m, &n, &p);

    // 读取矩阵 A
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // 读取矩阵 B
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // 调用矩阵乘法函数
    matrix_multiply(A, B, C, m, n, p);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%lld", C[i][j]);
            if (j != p - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
void matrix_multiply(int a[][MAX_SIZE], int b[][MAX_SIZE], long long int c[][MAX_SIZE],int m ,int n, int p){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}