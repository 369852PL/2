#include <stdio.h>

// ���庯�����������������������������ֵ
int getMax(int x, int y, int z) {
    int max = x;  // �����һ����Ϊ���ֵ
    if (y > max)  // �Ƚϵڶ������뵱ǰ���ֵ
        max = y;
    if (z > max)  // �Ƚϵ��������뵱ǰ���ֵ
        max = z;
    return max;   // �����������ֵ
}

int main() {
    int a, b, c, maxValue;
    // ��ʾ�û�������������
    printf("�����������������ÿո�ָ�����");
    scanf("%d %d %d", &a, &b, &c);  // ��ȡ�û�����

    maxValue = getMax(a, b, c);  // ���ú�����ȡ���ֵ
    printf("�������е����ֵ�ǣ�%d\n", maxValue);  // ������

    return 0;
}