#include <stdio.h>
#include <stdlib.h>

int main() {

    int amount;
    printf("n: ");
    scanf("%d", &amount);
    getchar();
    int *numbers = malloc(sizeof(int) * amount);

    for(int i = 0; i < amount; i++) {
        printf("%d: ", i+1);
        scanf("%d", &numbers[i]);

    }   

    for(int i = 0; i < amount; i++) {
        printf("%d: %d\n", i+1, numbers[i]);

    }
    free(numbers);

    return 0;
}