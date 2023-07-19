#include <stdio.h>
#include <unistd.h>

int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5;
    int point01, point02, point03, point04, point05;
    int total;

    printf("  Welcome to the game\n\n");

    printf(">Press 7 to start the game\n");
    printf(">Press 0 to quit the game\n");

    scanf("%d", &i);

    if(i==7)
    {
        printf("The game has started:)\n\n");

    }
    else if (i==0)
    {
        printf("The game has ended:(\n\n");
    }
    else{
        printf("Invalid choice\n");
    }

    if(i==7)
    {
        printf("1) Which one is the first search engine in the internet?\n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Altaviata\n");

        printf("Enter your answer :");
        scanf("%d", &ans1);

        if(ans1==2)
        {
            printf("Correct Answer!\n");
            point1 = 5;
            printf("You have scored %d point\n", point1);
            printf("Next quiz coming right up....\n\n");
        }
        else{
            printf("Wrong Answer\n");
            point01 = 0;
            printf("You have scored %d points\n", point01);
            printf("Next quiz coming right up....\n\n");
        }

        sleep(5);

        printf("2)Which is the first browser invented in 1990?\n\n");
        printf("1) Internet explorer\n");
        printf("2) Mosaic\n");
        printf("3) Mozilla\n");
        printf("4) Nexus\n");

        printf("Enter your answer :");
        scanf("%d", &ans2);

        if(ans2==4)
        {
            printf("Correct:)\n");
            point2 = 5;
            printf("You have score %d points\n", point2);
            printf("Next quiz coming right up....\n\n");
        }
        else{
            printf("Wrong answer\n");
            point02 = 0;
            printf("You have %d points\n", point02);
            printf("Next quiz coming right up....\n\n");
        }

        sleep(5);

        printf("3) The first computer virus is known as?\n\n");
        printf("1) Rabbit\n");
        printf("2) Creeper Virus\n");
        printf("3) Elk Cloner\n");
        printf("4) SCA Virus\n");

        printf("Enter your answer: ");
        scanf("%d", &ans3);

        if(ans3==2)
        {
            printf("Correct:)\n");
            point3 = 5;
            printf("You have scored %d point\n", point3);
            printf("Next quiz coming right up....\n\n");
        }

        else{
            printf("Wrong answer\n");
            point03 = 0;
            printf("You have scored %d point\n", point03);
            printf("Next quiz coming right up....\n\n");
        }

        sleep(5);

        printf("4) Firewall in computer is used for? \n\n");
        printf("1) Security\n");
        printf("2) Data Transmission\n");
        printf("3) Monitoring\n");
        printf("4) Authentification\n");

        printf("Enter your answer : ");
        scanf("%d", &ans4);

        if(ans4==1)
        {
            printf("Correct answer\n");
            point4 = 5;
            printf("You have scored %d point\n", point4);
            printf("Next quiz coming right up....\n\n");

        }
        else{
            printf("Wrong answer\n");
            point04 = 0;
            printf("You have scored %d point\n", point04);
            printf("Next quiz coming right up....\n\n");

        }

        sleep(5);

        printf("5) Which of the following is not a database management software?\n\n");
        printf("1) MySQL\n");
        printf("2) Oracle\n");
        printf("3) Security\n");
        printf("4) Sybase\n");

        printf("Enter your answer : ");
        scanf("%d", &ans5);

        if(ans5==3)
        {
            printf("Correct Answer\n");
            point5 = 5;
            printf("You have score %d points\n", point5);

        }
        else{
            printf("Wrong Answer\n");
            point05 = 0;
            printf("You have scored %d points\n", point05);
         

        }

        total = point1 + point2 + point3 + point4 + point5;
        printf("Total marks: %i\n", total);

        printf("Hurray you have finished the quiz:):)");



    }

    return 0;

}