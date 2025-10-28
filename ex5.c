#include <stdio.h>
#include <string.h>

void sayHello(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    char name[20];  

    printf("Enter your name: ");
    scanf("%s", name);  

    sayHello(name);  

    return 0;
}

