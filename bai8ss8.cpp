#include <stdio.h>
int main() {
    int row, col, i, j;
    int arr[100][100];

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &row);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &col);

    if (row <= 0 || row > 100 || col <= 0 || col > 100) {
        printf("Loi: So hang va cot phai nam trong khoang tu 1 den 100!\n");
        return 1;
    }

    printf("\nNhap cac phan tu cua ma tran:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Phan tu [%d][%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMa tran vua nhap:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%6d", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
