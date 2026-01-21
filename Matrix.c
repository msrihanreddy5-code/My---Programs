#include <stdio.h>

void inputMatrix(int *A, int n);
void processMatrix(int *A, int n, int *even, int *odd,
                   int *ecount, int *ocount,
                   int *esum, int *osum);

int main() {
    int n;
    printf("Enter size of matrix (N): ");
    scanf("%d", &n);

    int A[n][n];
    int even[n*n], odd[n*n];
    int ecount = 0, ocount = 0;
    int esum = 0, osum = 0;

    inputMatrix(&A[0][0], n);

    processMatrix(&A[0][0], n, even, odd,
                  &ecount, &ocount,
                  &esum, &osum);

    printf("\nEven Numbers: ");
    for(int i = 0; i < ecount; i++)
        printf("%d ", even[i]);

    printf("\nOdd Numbers: ");
    for(int i = 0; i < ocount; i++)
        printf("%d ", odd[i]);

    printf("\n\nEven Count = %d", ecount);
    printf("\nOdd Count  = %d", ocount);

    printf("\nEven Sum   = %d", esum);
    printf("\nOdd Sum    = %d", osum);

    if(ecount > 0)
        printf("\nEven Average = %.2f", (float)esum / ecount);

    if(ocount > 0)
        printf("\nOdd Average  = %.2f", (float)osum / ocount);

    return 0;
}

void inputMatrix(int *A, int n) {
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n*n; i++) {
        scanf("%d", A + i);
    }
}

void processMatrix(int *A, int n, int *even, int *odd,
                   int *ecount, int *ocount,
                   int *esum, int *osum) {

    for(int i = 0; i < n*n; i++) {
        if(*(A + i) % 2 == 0) {
            even[*ecount] = *(A + i);
            *esum += *(A + i);
            (*ecount)++;
        } else {
            odd[*ocount] = *(A + i);
            *osum += *(A + i);
            (*ocount)++;
        }
    }
}
