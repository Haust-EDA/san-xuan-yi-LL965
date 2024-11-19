//请在下方输入你的代码：
//正三角
#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%2d ", j, i, i* j);
        }
        printf("\n");
    }
    return 0;
}
//倒三角
#include<stdio.h>
int main(){
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++) {
            if (i < j)
            {
                printf("%d*%d=%2d", i, j, i * j);
            }
            else
            {
                printf("\n");
            }
        }
    }
    return 0;
}
