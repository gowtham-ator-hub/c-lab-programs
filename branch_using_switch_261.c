#include <stdio.h>
int main()
{
    int choice;
    printf("1. CSE\n2. ECE\n3. EEE\n4. MECH\n5. CIVIL\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1: printf("Branch: Computer Science and Engineering");
                break;
        case 2: printf("Branch: Electronics and Communication Engineering");
                break;
        case 3: printf("Branch: Electrical and Electronics Engineering");
                break;
        case 4: printf("Branch: Mechanical Engineering");
                break;
        case 5: printf("Branch: Civil Engineering");
                break;
        default: printf("Invalid choice");
    }
    return 0;
}
