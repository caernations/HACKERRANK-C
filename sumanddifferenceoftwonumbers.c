#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int firstNum;
    int secondNum;

    float firstFloat;
    float secondFloat;

    scanf("%d %d\n", &firstNum, &secondNum);
    scanf(" %f %f", &firstFloat, &secondFloat);

    int intsum = firstNum + secondNum;
    int intdifference = firstNum - secondNum;

    float floatsum = firstFloat + secondFloat;
    float floatdifference = firstFloat - secondFloat;
    
    
    printf("%d %d\n", intsum, intdifference);
    printf("%.1f %.1f", floatsum, floatdifference);
    
    return 0;
}