//#include <stdio.h>
//int main() {
//    int arr[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }; // 升序数组
//    int num, * p = arr;
//    int pos = -1;
//    printf("输入要查找的数：");
//    scanf_s("%d", &num);
//
//    // 指针遍历数组
//    for (int i = 0; i < 15; i++, p++) {
//        if (*p == num) {
//            pos = i + 1; // 位置从1开始
//            break;
//        }
//    }
//
//    if (pos != -1)
//        printf("位置：%d\n", pos);
//    else
//        printf("No Found\n");
//    return 0;
//}
