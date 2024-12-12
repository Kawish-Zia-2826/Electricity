#include <stdio.h>

int main() {
    double unit = 150;

    if(unit <= 100){
        printf("Your bill is %.2f\n", unit * 1);
    } else if(unit <= 200){
        printf("Your bill is %.2f\n", unit * 1.5);
    } else {
        printf("Your bill is %.2f\n", unit * 2);
    }

    return 0;
}
