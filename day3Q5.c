#include <stdio.h>
int main() {
    int celsius,fahrenheit;
    printf("enter temp in celsius\n");
    scanf("%d",&celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("temp in fahrenheit is%d\n",fahrenheit);
    return 0;
}