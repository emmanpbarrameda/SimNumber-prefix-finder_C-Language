#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define KEY "  Please Choose:"

void process();
void intro();
void intro2();
void askToRepeat();

int main()
{

    int X=1;
    char options;

    // Function call
    intro();

    while(X)
    {
        printf("\n");
        printf(" %s ", KEY);

        options=getche();


        switch(options)
        {

        case 'S':
        case 's':
            process();
            break;

        case 'Q':
        case 'q':
            printf("\n\n  Bye...\n\n");
            exit(0);
            break;

        case 'c':
        case 'C':
            printf("\n\n  Cleaning...\n");
            sleep(1);
            system("cls");
            intro2();
            break;

        default :
            system("cls");
            printf("\n\t    **********You have entered unavailable option***********");
            printf("\n\t     ****Please Enter any one of below available options****");
            intro2();

        }
    }
}

void intro()
{

    int width = 80;
    char str[] = "WELCOME TO";
    int length = sizeof(str) - 1;  // Discount the terminal '\0'
    int pad = (length >= width) ? 0 : (width - length) / 2;

    printf("\n%*.*s%s\n", pad, pad, " ", str);

    printf("\t\t\xB2\xB2\xB2\xB2\ PHILIPPINE MOBILE NETWORK PREFIXES 2021 \xB2\xB2\xB2\xB2");
    printf("\t\t\t\t\tCreated by Barrameda, Emmanuel P.\n\n");

    printf("\n\t\tA mobile number in the Philippines is composed of\n\t\t\t11 digits (example: 09182345679).");
    printf("\nThe first 4 digits (example: 0918) is what we call as the 'mobile number prefix'");
    printf("   which determines the mobile network either Globe, Smart, Sun Cellular, etc.\n");

    printf("\n\n\n  Press 'S' or 's' to start searching mobile number prefix\n");
    printf("  Press 'Q' or 'Q' to quit.\n");
    printf("  Press 'C' or 'c' to clear the screen and display the available option.\n");
}

void intro2()
{

    printf("\n\n\t\t\xB2\xB2\xB2\xB2\ PHILIPPINE MOBILE NETWORK PREFIXES 2021 \xB2\xB2\xB2\xB2\n\n");

    printf("\n  Press 'S' or 's' to start searching mobile number prefix\n");
    printf("  Press 'Q' or 'Q' to quit.\n");
    printf("  Press 'C' or 'c' to clear the screen and display the available option.\n");

}

void process()
{

    int network;
    printf("\n\n\n---------------------------------------------");
    printf("\n  Please Insert your first 4 Digit Number,\n  Example: 0908*******\n  PLEASE ENTER: ");
    scanf("%d", &network);

    switch(network)
    {
    //Smart
    case 908:
    case 918:
    case 919:
    case 920:
    case 921:
    case 928:
    case 929:
    case 939:
    case 947:
    case 949:
    case 951:
    case 961:
    case 998:
    case 999:
        printf("\n  Searching...\n");
        sleep(1);
        printf("  We found a match prefix!\n");
        printf("\n  The mobile network of 0%d or +63%d is Smart.\n", network, network);
        break;

    //SmartOrTNT
    case 946:
        printf("\n  Searching...\n");
        sleep(1);
        printf("  We found a match prefix!\n");
        printf("\n  The mobile network of 0%d or +63%d are either Smart or TNT.\n", network, network);
        break;

    //TalkNText
    case 907:
    case 909:
    case 910:
    case 912:
    case 930:
    case 938:
    case 948:
    case 950:
        printf("\n  Searching...\n");
        sleep(1);
        printf("  We found a match prefix!\n");
        printf("\n  The mobile network of 0%d or +63%d is TalkNText (TNT).\n", network, network);
        break;

    //Sun
    case 922:
    case 923:
    case 924:
    case 925:
    case 931:
    case 932:
    case 933:
    case 934:
    case 940:
    case 941:
    case 942:
    case 943:
    case 973:
    case 974:
        printf("\n  Searching...\n");
        sleep(1);
        printf("  We found a match prefix!\n");
        printf("\n  The mobile network of 0%d or +63%d is Sun Cellular.\n", network, network);
        break;

    //GlobeOrTM
    case 905:
    case 906:
    case 915:
    case 916:
    case 917:
    case 926:
    case 927:
    case 935:
    case 936:
    case 937:
    case 945:
    case 953:
    case 954:
    case 955:
    case 956:
    case 965:
    case 966:
    case 967:
    case 975:
    case 977:
    case 978:
    case 979:
    case 995:
    case 996:
    case 997:
        printf("\n  Searching...\n");
        sleep(1);
        printf("  We found a match prefix!\n");
        printf("\n  The mobile network of 0%d or +63%d are either Globe or TM.\n", network, network);
        break;

    //GlobePostpaid
    case 9173:
    case 9175:
    case 9176:
    case 9178:
    case 9253:
    case 9255:
    case 9256:
    case 9257:
    case 9258:
        printf("\n  Searching...\n");
        sleep(1);
        printf("  We found a match prefix!\n");
        printf("\n  The mobile network of 0%d is Globe PostPaid.\n", network);
        break;

    //Globe
    case 817:
        printf("\n  Searching...\n");
        sleep(1);
        printf("  We found a match prefix!\n");
        printf("\n  The mobile network of 0%d is Globe.\n", network);
        break;

    //GOMO
    case 976:
        printf("\n  Searching...\n");
        sleep(1);
        printf("  We found a match prefix!\n");
        printf("\n  The mobile network of 0%d or +63%d is GOMO.\n", network, network);
        break;

    default:
        printf("\n  Searching...\n");
        sleep(1);
        printf("  Sorry, Prefix not found!\n");
    }

    printf("---------------------------------------------\n");
    askToRepeat();
}


void askToRepeat()
{

    int yn;
    sleep(1);
    printf("\n  Would you like to continue?");
    printf("\n  Please Enter, YES = 1 or NO = 2: ");
    scanf(" %d", &yn);
    //fgets(yn, 2, stdin);
    getchar();

    //yn=getche();

    if(yn == 1)
    {
        printf("\n  Repeating the program...");
        sleep(1);
        intro2(); //re-run the program to ask

    }
    else if(yn == 2)
    {
        printf("\n  Bye...\n\n");
        exit(0);

    }
    else
    {
        printf("\n  Invalid Input, Please try again!\n\n");
        askToRepeat();
    }
}




//THIS CONSOLE PROGRAM IS TESTED ON CODEBLOCKS IDE
//Copyright 2021 emmanpbarrameda
