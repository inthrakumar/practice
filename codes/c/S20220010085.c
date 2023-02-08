#include <stdio.h>
#include <math.h>
#include <string.h>

// program 1
typedef struct student_details
{
    char name[100];
    int rollno;
    char branch[100];
    long int phone_no;

} s_d;
// program 2
typedef struct contact_details
{
    char name[100];
    char email[20];
    struct postal_address
    {
        char street[20];
        char city[20];
        char state[20];
        int pincode;

    } details[5];

} arr3;

// program 3
typedef struct student_mark
{
    union name_or_rollno
    {
        int roll_no;
        char name[100];
    } details;
    int marks;
} st;

int main()
{
    // //program 1
    s_d arr1[5];
    strcpy(arr1[0].name, "inthra");
    strcpy(arr1[0].branch, "cse");
    arr1[0].phone_no = 1234567890;
    arr1[0].rollno = 1;
    strcpy(arr1[1].name, "naveen");
    strcpy(arr1[1].branch, "ece");
    arr1[1].phone_no = 1234567889;
    arr1[1].rollno = 2;
    strcpy(arr1[2].name, "yashwanth");
    strcpy(arr1[2].branch, "cse");
    arr1[2].phone_no = 1234567123;
    arr1[2].rollno = 3;
    strcpy(arr1[3].name, "anshika");
    strcpy(arr1[3].branch, "mech");
    arr1[3].phone_no = 1234567890;
    arr1[3].rollno = 4;
    strcpy(arr1[4].name, "ishan ");
    strcpy(arr1[4].branch, "cse");
    arr1[4].phone_no = 1235467890;
    arr1[4].rollno = 5;

    printf("The data before modification\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" the details of the %d student\n", i + 1);
        printf("The name is %s\n", arr1[i].name);
        printf(" The roll_no:%d\n", arr1[i].rollno);
        printf(" The branch:%s\n", arr1[i].branch);
        printf(" phone no:%d\n", arr1[i].phone_no);
    }
    for (int i = 0; i < 5; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            printf("Enter the new branch of %d student\n", i + 1);
            scanf("%s", arr1[i].branch);
        }
    }
    printf("The data after modification\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" the details of the %d student\n", i + 1);
        printf("The name is %s\n", arr1[i].name);
        printf(" The roll_no:%d\n", arr1[i].rollno);
        printf(" The branch:%s\n", arr1[i].branch);
        printf(" phone no:%d\n", arr1[i].phone_no);
    }
    // program 2
    arr3 info[5];
    strcpy(info[0].name, "Yashwanth");
    strcpy(info[0].email, "yashwanth.s22@iiits.in");
    strcpy(info[0].details[0].street, "T.A.Nagar");
    strcpy(info[0].details[0].city, "Tiruvannamalai");
    strcpy(info[0].details[0].state, "Tamil Nadu");
    info[0].details[0].pincode = 606601;

    strcpy(info[1].name, "inthra");
    strcpy(info[1].email, "inthrakumar.s22@iiits.in");
    strcpy(info[1].details[1].street, "T.nagar");
    strcpy(info[1].details[1].city, "Tiruvan");
    strcpy(info[1].details[1].state, "Tamil Nadu");
    info[1].details[1].pincode = 606601;
    strcpy(info[2].name, "anshika");
    strcpy(info[2].email, "yash.s22@iiits.in");
    strcpy(info[2].details[2].street, " sidcoNagar");
    strcpy(info[2].details[2].city, "Trichy");
    strcpy(info[2].details[2].state, "Tamil Nadu");
    info[2].details[2].pincode = 606601;
    strcpy(info[3].name, "Yash");
    strcpy(info[3].email, "yash.s22@iiits.in");
    strcpy(info[3].details[3].street, " anna Nagar");
    strcpy(info[3].details[3].city, "Tirupathi");
    strcpy(info[3].details[3].state, "Tamil Nadu");
    info[3].details[3].pincode = 606601;
    strcpy(info[4].name, "Yuvanesh ");
    strcpy(info[4].email, "yhuvan.a22@gmail.com");
    strcpy(info[4].details[4].street, " periyar Nagar");
    strcpy(info[4].details[4].city, "got it");
    strcpy(info[4].details[4].state, "Tamil Nadu");
    info[4].details[4].pincode = 606601;
    for (int j = 0; j < 5; j++)
    {
        printf("Name: %s\n", info[j].name);
        printf("Email Address: %s\n", info[j].email);
        printf("Postal Address: \n");
        printf("\tStreet: %s\n", info[j].details[j].street);
        printf("\tCity: %s\n", info[j].details[j].city);
        printf("State %s", info[j].details[j].state);
        printf("Pincode :%d\n", info[j].details[j].pincode);
    }

    // program 3
    st arr[5];
    int arr2[5];
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the details of the student %d:\n", i + 1);
        int a;
        printf("Enter one of the choices:\n 1-name 2-rollno\n");
        scanf("%d", &a);
        if (a == 1)
        {
            scanf("%s %d", arr[i].details.name, &arr[i].marks);
            arr2[j] = i;
            ++j;
        }
        else if (a == 2)
        {
            scanf("%d %d", &arr[i].details.roll_no, &arr[i].marks);
        }
        else
        {
            printf("INVALID INPUT");
        }
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        int flag = 0;
        printf("The details of Student %d:\n", i + 1);
        for (int u = 0; u < 5; u++)
        {
            if (arr2[u] == i)
            {
                flag = 1;
                printf("The name is:%s\nThe mark is %d", arr[i].details.name, arr[i].marks);
            }
        }
        if (flag == 1)
        {
            printf("\n");
            continue;
        }
        printf("The roll_no is %d\n The marks is %d\n", arr[i].details.roll_no, arr[i].marks);
    }
    // program 4
    enum shapes
    {
        rectangle = 1,
        square,
        triangle
    };
    enum shapes shape;
    printf("Enter one of the following options\n1-reactangle\n2-square\n3-triangle\n");
    scanf("%d", &shape);
    int l, a, b, c, side;
    switch (shape)
    {
    case rectangle:
        printf("Enter the length and breadth of the rectangle\n");
        scanf("%d %d", &l, &b);
        printf("The area of the rectangle is %d", l * b);
        break;
    case square:
        printf("Enter the side of the square\n");
        scanf("%d", &side);
        printf("The area of the square is %d", side * side);
        break;
    case triangle:
        printf("Enter the sides of the triangle\n");
        scanf("%d %d %d", &a, &b, &c);
        int s = (a + b + c) / 2;
        int output = s * (s - a) * (s - b) * (s - c);
        printf("The area of the triangle is %f", sqrt(output));
        break;
    }

    return 0;
}
