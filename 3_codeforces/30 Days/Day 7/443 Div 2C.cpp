#include <stdio.h>
#include <istream>

int main(void)
{
    int n;
    int x = 0, y = 1023;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        getchar();
        char op = getchar();
        int num;
        scanf("%d", &num);
        switch (op) {
            case '&':
                x &= num;
                y &= num;
                break;
            case '|':
                x |= num;
                y |= num;
                break;
            case '^':
                x ^= num;
                y ^= num;
                break;
            default:
                break;
        }
    }

//    printf("%d %d\n", x, y);
    int num_and = 0, num_or = 0, num_xor = 0;
    for (int i = 0; i < 10; i++) {
        int bit = 1 << i;
        if ((x & bit)) {
            if (y & bit) num_or |= bit;
            else num_xor |= bit;
            num_and |= bit;
        } else {
            if (y & bit) num_and |= bit;
        }
    }
    printf("3\n& %d\n| %d\n^ %d\n", num_and, num_or, num_xor);
    return 0;
}
