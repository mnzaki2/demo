#include <stdio.h>

int getRandomNumber(void) {
    return 4; // chosen by fair dice roll
              // guaranteed to be random
}

int main(){
    printf("Generating random number....%i\n", getRandomNumbr());
    return 0;
}
