#include <stdio.h>
#include <stdlib.h>

void printMagicSquare(int n) {
    // 动态分配二维数组内存
    int** magic = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        magic[i] = (int*)malloc(n * sizeof(int));
    }

    int i, j, k;

    // 初始化矩阵为 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magic[i][j] = 0;
        }
    }

    // 放置第一个数字（1 放在第一行中间列）
    i = 0;
    j = n / 2;
    magic[i][j] = 1;

    // 填充其他数字（从 2 到 n*n）
    for (k = 2; k <= n * n; k++) {
        i--; // 向上移动一行
        j++; // 向右移动一列

        // 处理行和列同时越界的情况
        if (i < 0 && j >= n) {
            i += 2;
            j--;
        }
        else {
            // 仅行越界，调整到最后一行
            if (i < 0) {
                i = n - 1;
            }
            // 仅列越界，调整到第一列
            if (j >= n) {
                j = 0;
            }
        }

        // 处理目标位置已有数字的情况
        if (magic[i][j] != 0) {
            i += 2;
            j--;
        }

        // 放置当前数字 k
        magic[i][j] = k;
    }

    // 打印魔方矩阵
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", magic[i][j]);
        }
        printf("\n");
    }

    // 释放动态分配的内存
    for (int i = 0; i < n; i++) {
        free(magic[i]);
    }
    free(magic);
}

int main() {
    int n = 5; // 以 5 阶魔方矩阵为例，可修改为其他奇数
    printMagicSquare(n);
    return 0;
}