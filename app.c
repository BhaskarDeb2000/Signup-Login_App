#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
struct userID
{
    char name[30];
    char userName[20];
    char password[10];
    char confirmPassword[10];
} person1;

// signup Password Match
void signUpPasswordMatch(char password[10], char confirmPassword[10])
{
    printf("Please wait a moment for me to verify your password.\n");
    sleep(2);
    if (strcmp(password, confirmPassword) == 0)
    {
        printf("Password Matched. You have successfully signed yourself up.\n");
    }
    else
    {
        printf("Sorry, the password didn't match! Please start all over again\n");
        exit(0);
    }
}

// login-UserName Match
void loginUserNameMatch(char userName[20])
{
    if (strcmp(userName, person1.userName) == 0)
    {
        printf("Hello %s\n", person1.userName);
    }
    else
    {
        printf("UserName not found\n");
        exit(0);
    }
}

// login-Password Match
void loginPasswordMatch(char passWord[10])
{
    if (strcmp(passWord, person1.password) == 0)
    {
        printf("Welcome!\n");
    }
    else
    {
        printf("Wrong Password! Try again.\n");
        exit(0);
    }
}

void signupConfirmation(char c)
{
    if (c == 'y')
    {
    }
}

int main()
{
    char w[30], x[20], y[10], z[10];

    // Registry of a person's info
    printf("Enter your name: ");
    fgets(w, 30, stdin);
    strcpy(person1.name, w);
    printf("Hello %s", person1.name);
    sleep(1);
    printf("Enter your userName: ");
    scanf("%s", x);
    strcpy(person1.userName, x);
    printf("Enter your password: ");
    scanf("%s", y);
    strcpy(person1.password, y);
    printf("Enter your confirmPassword: ");
    scanf("%s", z);
    strcpy(person1.confirmPassword, z);

    signUpPasswordMatch(y, z);

    // login Page
    char a[20], b[10];
    sleep(1);
    printf("Welcome to the login Page!\n");
    sleep(3);
    printf("Please enter your username: ");
    scanf("%s", a);
    sleep(2);
    loginUserNameMatch(a);
    sleep(2);
    printf("Please enter your Password:");
    scanf("%s", b);
    sleep(2);
    loginPasswordMatch(b);
    return 0;
}
