#include <stdio.h>
#include <string.h>

typedef struct membership_registration
{
    int Uniqueid;
    char name[30];
    char membershipType[30];
    int age;
    int start_date[3];
    int end_date[3];
    char fee_paid[3];
} member;
typedef struct book_issue
{
    char book_title[30];
    char issuer[30];
    int book_count;
    int book_returned;
    int pending;
} book_issue;
void Cal_expiry(int period, int year, int month, int day, int *ptr)
{
    day += period;
    while (day >= 31)
    {
        if (month % 2 == 0)
        {

            if (month == 2)
            {
                day -= 28;
                month += 1;
            }
            else
            {
                day -= 30;
                month += 1;
            }
        }
        else
        {
            if ((day) > 31)
            {
                day = day - 31;
                month += 1;
            }
        }
    }
    if (month >= 12)
    {
        month = month - 12;
        year += 1;
    }
    *ptr = year;
    ptr++;
    *ptr = month;
    ptr++;
    *ptr = day;
}
void registeration(member *m)
{
    int choice = 0, expiry_day;
    // Member name input
    printf("\nEnter the name : ");
    gets((*m).name);
    // Unique Id input
    printf("\nEnter the member unique id: ");
    scanf("%d", &(*m).Uniqueid);
    // Age input
    printf("\nEnter the member age: ");
    scanf("%d", &(*m).age);
    // Taking Membership details from the user
    printf("\nwhats your membership Type from following: \n");
    printf("1. Professional Membership \n");
    printf("2. Student Membership \n");
    printf("3. Assosiate Membership \n");
    printf("4. Remote Membership\n");
    printf("Choose between 1-4 \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        strcpy((*m).membershipType, "Professional Membership");
        expiry_day = 180;
        break;
    case 2:
        strcpy((*m).membershipType, "Student Membership");
        expiry_day = 92;
        break;
    case 3:
        strcpy((*m).membershipType, "Assosiate Membership");
        expiry_day = 30;
        break;
    case 4:
        strcpy((*m).membershipType, "Remote Membership");
        expiry_day = 7;
        break;
    default:
        printf("Invalid Choice! Please choose between 1-4\n");
        break;
    }
    // Membership start date
    printf("\nEnter the membership starting Date: \n");
    printf("Year: ");
    scanf("%d", &(*m).start_date[0]);
    printf("Month: ");
    scanf("%d", &(*m).start_date[1]);
    printf("Day: ");
    scanf("%d", &(*m).start_date[2]);
    // // Membership end date
    Cal_expiry(expiry_day, (*m).start_date[0],
               (*m).start_date[1], (*m).start_date[2],
               (*m).end_date);
    // printf("%d/%d/%d is date after function call", (*m).end_date[2],
    //    (*m).end_date[1], (*m).end_date[0]);
    // Fee paid or not
    printf("\nDoes the member fee paid ?\n");
    printf("Answer in *yes/no* :  ");
    scanf("%s", &(*m).fee_paid);
    char scmp[] = "yes";
    if (strcmp(scmp, (*m).fee_paid) == 0)
    {
        printf("\n***   Registration Succesful!   ***\n");
    }
    else
    {
        printf("\n***   Registration Unsuccesful!   ***\n");
        printf("Please pay your membership fees.\n");
    }
}
void CurrentList(int count, member *m)
{
    printf("**************Current List**************\n");
    for (int i = 0; i <= count; i++)
    {
        printf("%d. %s \n", i + 1, (*m).name);
        m++;
    }
}
void bookNotReturned(book_issue *b, int *c)
{
    int j = 0;
    printf("\n*****Books Not returned***** \n");
    while (j <= *c)
    {
        (*b).pending = (*b).book_count - (*b).book_returned;
        if ((*b).pending != 0)
        {
            printf("%d. %s book is not yet returned by %s \n", j, (*b).book_title, (*b).issuer);
            j++;
        }
        b++;
    }
}
void book_issue_return(int *bquit)
{
    int d, m, issuer_count;
    int bchoice;
    book_issue b[issuer_count];
    issuer_count = -1;
    printf("\nChoose between the 3 option \n");
    printf("1. Member issuing a book. \n");
    printf("2. Member returning the book. \n");
    printf("3. Books that are not yet returned. \n");
    printf("4. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &bchoice);
    if (bchoice == 1)
    {
        issuer_count += 1;
        //     }
        // switch (bchoice)
        // {
        // case 1:
        // {

        fflush(stdin);
        char name[30], title[30];
        (b[issuer_count]).book_count = 1;
        printf("\n*****Book Issue Portal***** \n\n");

        printf("Book issuer name : \n");
        gets(name);
        strcpy(b[issuer_count].issuer, name);

        printf("Title of the Book which is being issued : \n");
        gets(title);
        strcpy(b[issuer_count].book_title, title);

        printf("Enter current Date\n");
        scanf("%d ", &d);
        printf("Enter current Month : \n");
        scanf("%d", &m);
    }
    else if (bchoice == 2)
    {
        fflush(stdin);
        char returner[30];
        int non = 0;
        printf("\n*****Book Return Portal***** \n\n");
        printf("Book returner name : \n");
        gets(returner);
        for (int i = 0; i <= issuer_count; i++)
        {
            // if(b[i].issuer==returner){
            // printf("strcmp(b[i].issuer,returner %d\n",strcmp(b[i].issuer,returner));
            if (strcmp(b[i].issuer, returner) == 0)
            {
                b[i].book_returned = 1;
                issuer_count -= 1;
                printf(" Book returned!\n");
                break;
            }
            else
            {
                non++;
            }
        }
        if (non == issuer_count && issuer_count != 0)
        {
            printf("Person doesn't registered\n");
        }
    }
    else if (bchoice == 3)
    {
        fflush(stdin);
        bookNotReturned(b, &issuer_count);
    }
    else if (bchoice == 4)
    {
        printf("\n\nExiting Book Returning Portal\n");
        *bquit = 0;
    }
    else
        printf("Invalid choice!!");
}
void display(member *mem)
{
    fflush(stdin);
    printf("The member name : %s \n", (*mem).name);
    printf("The member Unique Id : %d \n", (*mem).Uniqueid);
    printf("The membership type : %s \n", (*mem).membershipType);
    printf("The member age : %d \n", (*mem).age);
    printf("The membership start date : %d/%d/%d  \n", (*mem).start_date[0], (*mem).start_date[1], (*mem).start_date[2]);
    printf("The membership end date : %d/%d/%d  \n", (*mem).end_date[0], (*mem).end_date[1], (*mem).end_date[2]);
    printf("The member fee paid or not : %s \n", (*mem).fee_paid);
}
void fine_due()
{
    char name[30];
    int late, fine;
    printf("Enter the name of returner: \n");
    gets(name);
    printf("Enter How many days late after the book issue expiry\n");
    scanf("%d", &late);
    fine = late * 5;
    printf("Total Fine Due from member %s be:  %d Rs.", name, fine);
}
void upcomingexpiry(member *m, int c)
{
    printf("\n***List of Members whose membership is expiring***\n");
    for (int i = 0; i <= c; i++)
    {
        // here [2] is assigned for day and [1] is assigned for month
        if (((*m).end_date[2] - (*m).start_date[2]) <= 15 && (*m).end_date[1] == (*m).start_date[1])
        {
            printf(" %s \n", (*m).name);
        }
    }
}
int main()
{
    printf("\n\n****Welcome to Library Management System****");
    int quit = 1;
    int count, ch;
    member m[count];
    count = -1;
    while (quit != 0)
    {
        printf("\n\n");
        printf("--------------------------------------------------------------------\n");
        printf("Which function you would like to perform:\n");
        printf("1. Membership registration\n");
        printf("2. Current members List\n");
        printf("3. Books issued to a member, which are not yet returned\n");
        printf("4. Fine due from members\n");
        printf("5. List of members whose membership is expiring in the coming week\n");
        printf("6. Quit\n");
        printf("--------------------------------------------------------------------\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        if (ch == 1)
        {
            count += 1;
        }
        switch (ch)
        {
        case 1:
        {
            fflush(stdin);
            registeration(&m[count]);
            break;
        }
        case 2:
        {
            fflush(stdin);
            CurrentList(count, m);
            break;
        }
        case 3:
        {
            fflush(stdin);
            int bquit = 1;
            while (bquit != 0)
            {
                book_issue_return(&bquit);
            }
            break;
        }
        case 4:
        {
            fflush(stdin);
            fine_due();
            break;
        }
        case 5:
            upcomingexpiry(m, count);
            break;
        case 6:
        {
            printf("\n\nExited");
            quit = 0;
            break;
        }
        default:
            printf(" Invalid Choice! \n");
            break;
        }
    }

    return 0;
}
