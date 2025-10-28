#include <stdio.h>
#include <string.h>

int main() {
    char pet[10];
      printf("Do you have cat or dog?");
      scanf("%s", pet);


    if (strcmp(pet, "cat") == 0) {
        printf("Meow!.\n");
    }
    else if (strcmp(pet, "dog") == 0){
        printf("Hav!.\n");
    }
    return 0;
}

