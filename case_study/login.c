/*#include <stdio.h>
#include <string.h>
#include "login.h"

int authenticate() 
{
    char username[50];
    char password[50];

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; // Remove trailing newline if present

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // Remove trailing newline if present

}*/
//update-2_same_as_1
//update-3
#include <stdio.h>
#include <string.h>
#include "login.h"
int authenticate() {
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    // Check if username and password match
    if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0) {
        return 1; // Authentication successful
    } else {
        return 0; // Authentication failed
    }
}
