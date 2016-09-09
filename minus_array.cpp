#include <stdio.h>
int main() {
    int a[10][10];
    int w, h;
    scanf("%d %d\n", &w, &h);
 
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    a[-1][-1] = 2;
 
    printf("2로 초기화 후 출력:%d 16진수:%x\n", a[-1][-1], &(a[-1][-1]));
    printf("초기화 하지 않음:%d 16진수:%x\n", a[-2][-2], &(a[-2][-2]));
    printf("입력 받은 값의 1,1부분을 출력:%d 16진수:%x\n", a[1][1], &(a[1][1]));
}
