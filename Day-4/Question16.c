#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        int original = num, remainder, n = 0;
        double result = 0.0;

        while (original != 0) {
            original /= 10;
            ++n;
        }

        original = num;

        while (original != 0) {
            remainder = original % 10;
            result += pow(remainder, n);
            original /= 10;
        }

        if ((int)result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
