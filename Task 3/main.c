#include <stdio.h>
#include <string.h>

int main() {
    char password[8];
    printf("Enter password: ");
    scanf("%7s", password);

    if(strcmp(password, "admin")==0)
        printf("Login successful\n");
    else
        printf("Login failed\n");

    return 0;
}
