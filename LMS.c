#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    int BookId;
    char BookName[30];
    char BookAuthor[30];
    int BookCopies;
};

struct user
{
    int UserID;
    char UserName[30];
};



void MainMenu()
{
    system("cls");
    printf("\t\tLibrary Management System\n\n");
    int choice;
    printf("1. Add Book\n2. Delete Book\n3. Assign Book\n4. Return Book\n5. Add User\n6. Delete User");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("4");
        break;
    case 5:
        printf("5");
        break;
    case 6:
        printf("6");
        break;
    default:
        printf("Invalid Choice");
        printf("\nPress any key to continue...");
        getch();
        MainMenu();
    }
}

void loginPage()
{
    system("cls");
    printf("\t\tLibrary Management System\n\n");
    char username[10], pass[10];
    printf("Enter Username: ");
    scanf("%s", &username);
    printf("Enter password: ");
    scanf("%s", &pass);

    if (strcmp(username, "admin") == 0 && strcmp(pass, "admin") == 0)
    {
        MainMenu();
    }
    else
    {
        printf("Invalid Login");
        printf("\nPress any key to continue...");
        getch();
        loginPage();
    }
}

int main()
{
    loginPage();
    return 0;
}