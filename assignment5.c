#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int choice;

    do
    {
        printf("\n--- STRING OPERATIONS ---\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenation\n");
        printf("4. Comparison\n");
        printf("5. Reverse\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf("%99s", s1);
                printf("Length = %lu", strlen(s1));
                break;

            case 2:
                printf("Enter a string: ");
                scanf("%99s", s1);
                strcpy(s2, s1);
                printf("Copied string = %s", s2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%99s", s1);
                printf("Enter second string: ");
                scanf("%99s", s2);
                strcat(s1, s2);
                printf("Concatenated string = %s", s1);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%99s", s1);
                printf("Enter second string: ");
                scanf("%99s", s2);
                if(strcmp(s1, s2) == 0)
                    printf("Strings are equal");
                else
                    printf("Strings are not equal");
                break;

            case 5:
                printf("Enter a string: ");
                scanf("%99s", s1);
                printf("Reverse = ");
                for(int i = strlen(s1) - 1; i >= 0; i--)
                    printf("%c", s1[i]);
                break;

            case 6:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 6);

    return 0;
}
