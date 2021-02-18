#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>//use for strcmp()
#include<stdlib.h>
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Function declaration @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void welcomeScreen(void);
void title(void);
void loading(void);
void login_screen(void);
void MainMenu(void);
void User(void);
void Un_ad(void);
//111111111111111111111111111111111111111111111111111111111111111111111 Faculty admin control function 111111111111111111111111111111111111111111111111111111
void Fa(void);
void fa_insert_record();
void fa_display_record();
void fa_serch_record();
void fa_del_record();
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa faculty user aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
void fa_login();
void fa_user();
void f_profile();
void course_id();
void ta_cr_information();
void fa_information();
void cl_ro_schedule();

void St(void);
void Ta_as(void);
void Em(void);
void Pa(void);
void Gr(void);

void Li(void);

void Ho(void);

void Tr(void);

void Cl(void);

void Pr(void);

void Ad_pa(void);
void Lo_o(void);

struct profile
{
    int id;
    char name[20];
    char position[20];
    char email[20];
    char mobile[25];
    char blood[5];
    char address[20];
    char salary[10];
};
struct profile p;

//0000000000000000000000000000000000000000000000000000000000000000000000000000 main function 0000000000000000000000000000000000000000000000000000000000000000000
int main()

{
    welcomeScreen();
    title();
    MainMenu();
}
void welcomeScreen(void)
{
    system("COLOR 0B");
    printf("\n\n\n\n\n\n\n\t\t\t\t**************************************************");
    printf("\n\t\t\t\t\t\t Welcome To \t\t");
    printf("\n\t\t\t\t\t   BUBT management system \t\t");
    printf("\n\t\t\t\t**************************************************");
    printf("\n\n\n\n\t\t\t\t\t");
    loading();


    getch();
    system("cls");
}
void title(void)
{
    printf("\n\n\t\t\t\t\t\t--------------------------------");
    printf("\n\t\t\t\t                              BUBT     ");
    printf("\n\t\t\t\t\t\t--------------------------------");
}
void loading(void)
{
    int i,j,a;
    printf("\n\n\n\t\t\t\t\tloading ");
    for(i=0; i<=10; i++)
    {
        for(j=0; j<100000000; j++)
            a=j;
        printf(".");
    }
}
//************************************************************** U.admin login screen    *******************************************************************
void loginscreen()
{
    system("cls");
    title();
    system("COLOR 0A");
    int e=0;
    char Username[15];
    char Password[15];
    char original_Username[25]="srrifat";
    char original_Password[15]="277";
    do
    {
        printf("\n\n\n\n\t\t\tEnter your Username and Password :=> ");
        printf("\n\n\n\t\t\t\tUsername:");
        scanf("%s",&Username);
        printf("\n\n\n\t\t\t\tPassword:");
        scanf("%s",&Password);
        if(strcmp(Username,original_Username)==0&&strcmp(Password,original_Password)==0)

        {
            loading();
            getch();

            break;

        }
        else

        {
            printf("\n\t\t\tPassword incorrect : (Try again)");
            e++;
            getch();



        }
    }
    while (e<<2);
    if(e>2)
    {
        printf("You have cross the limit.You cannot login :(");
        getch();
        //ex_it();

    }
    system("cls");
}

//**************************************************************     Main Menu    **************************************************************************
void MainMenu(void)
{



    system("cls");

    title();
    int choose;

    printf("\n\n\n\n\t\t\t\t1.User\n");

    printf("\t\t\t\t2.University admin\n");
    printf("\t\t\t\t0.Logout...\n\n\n");
    printf("\t\t\t\tChoose from 1 to 2 :=>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        system("cls");
        break ;
    case 1:

        User();
        break;
    case 2:
        loginscreen();
        Un_ad();
        break;

    }
}
//***************************************************************** User define function  ********************************************************
void User(void)
{
    system("cls");
    int choose;
    title();
    printf("\n\n\n\t\t\t\t\t\t\t     <USER>\n");
    printf("\n\n\t\t\t\t1.Faculty\n");
    printf("\t\t\t\t2.Student\n");
    printf("\t\t\t\t3.Teacher assistant\n");
    printf("\t\t\t\t4.Employees\n");
    printf("\t\t\t\t5.Graduated\n");
    printf("\t\t\t\t6.Library\n");
    printf("\t\t\t\t7.Hostel\n");
    printf("\t\t\t\t8.Transport\n");
    printf("\t\t\t\t9.club\n");
    printf("\t\t\t\t10.admission panel\n");
    printf("\t\t\t\t0.Mainmenu\n\n\n");
    printf("\t\t\t\tChoose from 1 to 12 :=>");
    scanf("%i",&choose);

    switch(choose)
    {
    case 0:
        MainMenu();
        break;
    case 1:
        fa_login();


        break;
    case 2:

        St();
        break;
    case 3:

        Ta_as();
        break;
    case 4:

        Em();
        break;

    case 5:

        Gr();
        break;
    case 6:

        Li();
        break;
    case 7:

        Ho();
        break;
    case 8:

        Tr();
        break;
    case 9:

        Cl();
        break;

    case 10:

        Ad_pa();
        break;
    }
}

//***************************************************************** University admin function *****************************************************************

void Un_ad(void)
{
    system("cls");
    system("COLOR 0B");
    int choose;
    title();
    printf("\n\n\n\t\t\t\t\t\t       <University admin>\n");
    printf("\n\n\n\t\t\t\t1.Faculty record\n");
    printf("\t\t\t\t2.Student record\n");
    printf("\t\t\t\t3.Teacher assistant record\n");
    printf("\t\t\t\t4.Employees record\n");
    printf("\t\t\t\t5.Graduated record\n");
    printf("\t\t\t\t6.Library record\n");
    printf("\t\t\t\t7.Hostel record\n");
    printf("\t\t\t\t8.Transport record\n");
    printf("\t\t\t\t9.Club record\n");
    printf("\t\t\t\t10.Admission panel record\n");
    printf("\t\t\t\t0.Logout from admin...\n\n\n");
    printf("\t\t\t\tChoose from 1 to 12 :=>");
    scanf("%i",&choose);

    switch(choose)
    {
    case 0:
        MainMenu();
        break;
    case 1:
        Fa();
        break;
    case 2:
        St();
        break;
    case 3:
        Ta_as();
        break;
    case 4:
        Em();
        break;

    case 5:
        Gr();
        break;
    case 6:
        Li();
        break;
    case 7:
        Ho();
        break;
    case 8:
        Tr();
        break;
    case 9:
        Cl();
        break;

    case 10:
        Ad_pa();
        break;


    }
}

//111111111111111111111111111111111111111111111111111111111111111 Faculty admin control 1111111111111111111111111111111111111111111111111111111111111111111
void Fa(void)
{

    system("cls");

    title();

    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Faculty insert\n");
        printf("\t\t\t\t2.Faculty display\n");
        printf("\t\t\t\t3.Faculty search\n");
        printf("\t\t\t\t4.Faculty delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            fa_insert_record();
            break;
        case 2 :
            system("cls");
            fa_display_record();
            break;
        case 3 :
            system("cls");
            fa_serch_record();

            break;
        case 4:
            system("cls");
            fa_del_record();
            break;

        case 5:
            Un_ad();
        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }



    }

}
//############################################################# faculty record control by admin ###############################################################
void fa_insert_record(void)
{
    FILE*fa;
    fa=fopen("faculty.txt","a+");
    if(fa==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    fa_display_record();
    printf("\n\t\t\tEnter new faculty data :\n");



    printf("\n\t\t1.Enter faculty name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter faculty id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter faculty  position :");
    gets(p.position);
    printf("\t\t4.Enter faculty  email :");
    gets(p.email);
    printf("\t\t5.Enter faculty  mobile :");
    gets(p.mobile);
    printf("\t\t6.Enter faculty  blood group  :");
    gets(p.blood);
    printf("\t\t7.Enter faculty address :");
    gets(p.address);
    //fflush(stdin);
    printf("\t\t4.Enter faculty  salary :");
    gets(p.salary);
    fprintf(fa,"%s\n",p.name);
    fprintf(fa,"%d\n",p.id);
    fprintf(fa,"%s\n",p.position);
    fprintf(fa,"%s\n",p.email);
    fprintf(fa,"%s\n",p.mobile);
    fprintf(fa,"%s\n",p.blood);
    fprintf(fa,"%s\n",p.address);
    fprintf(fa,"%s\n",p.salary);

    {
        printf("\n\t\t\t****Faculty record inserted successfully*****\n");

    }
    fclose(fa);
    printf("\n\t\t\t##Update Record## \n");
    fa_display_record();

}

void fa_display_record(void)
{
    FILE*fa;
    fa=fopen("faculty.txt","r");
    if(fa==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\tFaculty details are as follows=>\n\n");

    while(!feof(fa))
    {
        fscanf(fa,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.position,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.position,p.email,p.mobile,p.blood,p.address,p.salary);

    }
    fclose(fa);

}
void fa_serch_record(void)
{
    int faid,flag=0;
    FILE*fa;
    fa=fopen("faculty.txt","r");
    if(fa==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&faid);
    while(!feof(fa))
    {
        fscanf(fa,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.position,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
        if(p.id==faid)
        {
            printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.position,p.email,p.mobile,p.blood,p.address,p.salary);
            flag=1;
            break;
        }





    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(fa);

}
void fa_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*fa,*fad;
    fa=fopen("faculty.txt","r");
    if(fa==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    fa_display_record();
    printf("\n\n\t\t!!!!!!Enter the name number which you want to delete =>");
    scanf("%s",&name);
    fad=fopen("faculty1.txt","a+");
    while(!feof(fa))
    {
        fscanf(fa,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.position,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(fad,"%s\n",p.name);
            fprintf(fad,"%d\n",p.id);
            fprintf(fad,"%s\n",p.position);
            fprintf(fad,"%s\n",p.email);
            fprintf(fad,"%s\n",p.mobile);
            fprintf(fad,"%s\n",p.blood);
            fprintf(fad,"%s\n",p.address);
            fprintf(fad,"%s\n",p.salary);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(fa);
    fclose(fad);
    remove("faculty.txt");
    rename("faculty1.txt","faculty.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    fa_display_record();
}
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa faculty login user aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
void fa_login()
{
    system("cls");
    title();
    system("COLOR 0A");
    while(1)
    {
        FILE *fa;
        char name2[50];
        int id2,r,k=0;
        fa=fopen("faculty.txt","r");
        if(fa==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tFaculty username : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\t Faculty password : ";
            cin>>id2;
            while(!feof(fa))
            {
                fscanf(fa,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.position,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);

                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    fa_user();
                    //cout<<p.name<<" "<<p.id<<" "<<p.position<<" "<<p.email<<" "<<p.mobile<<" "<<p.blood<<" "<<p.address<<" "<<p.salary<<endl;
                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<< "\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(fa);
        }
    }

}
//****************************************************************** faculty user **************************************************************************
void fa_user()
{
    system("cls");

    title();
    system("COLOR 0B");
    int ch;

    while(ch!=5)
    {
        printf("\n\n\t\t\t\t1.Profie\n");
        printf("\t\t\t\t2.Course id\n");
        printf("\t\t\t\t3.CR information\n");
        printf("\t\t\t\t4.Faculty information\n");
        printf("\t\t\t\t5.Class room schedule\n");
        printf("\t\t\t\t6.logout");
        printf("\n\t\t\t\tEnter your choose : ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            f_profile();
            break;
        case 2 :
            system("cls");
            course_id();
            break;
        case 3 :
            system("cls");
            ta_cr_information();

            break;
        case 4:
            system("cls");
            fa_information();
            break;
        case 5:
            system("cls");
            cl_ro_schedule();

        case 6:
            User();
        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }



    }
}
//............................................................ faculty user menu.......................................................................................
void f_profile()
{

    system("cls");
    title();
    cout<<"\n\t\t\t1.Name:"<<p.name<<" "<<"\n\t\t\t2.Id:"<<p.id<<" "<<"\n\t\t\t3.Position:"<<p.position<<" "<<"\n\t\t\t4.Email:"<<p.email<<" "<<"\n\t\t\t5.MObile no:"<<p.mobile<<" "<<"\n\t\t\t6.Blood group:"<<p.blood<<" "<<"\n\t\t\t7.Address: "<<p.address<<" "<<"\n\t\t\t8.Salaray: "<<p.salary<<endl;
    int choose;

    printf("\n\t\t\tpress 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        fa_user();
        break ;
    }
}
void course_id()
{
    printf("*************************************************************************************************************");
}

void ta_cr_information()
{
    printf ("\t\t\t\t**********************\n");
    printf ("\t\t\t\t\tCR information\n");
    printf ("\t\t\t\t**********************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Intake\t\tSection\t\tId\t\t\tName\t\t\tNumber\n");
    printf ("44\t\t07\t\t19202103248\t\tMd Imran nazir\t\t01722204245\n");
    printf ("44\t\t07\t\t19202103245\t\tNayma Khatun\t\t01938498491\n");
    printf ("44\t\t09\t\t19202103332\t\tArpo majumdar\t\t01788028201\n");
    printf("\n\t\t\tpress 0 to go back =>");
    int choose;
    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        fa_user();
        break ;
    }

    getch();
}


void fa_information()
{
    printf ("\t\t\t\t**************************\n");
    printf ("\t\t\t\t\tFACULTY INFORMATION\n");
    printf ("\t\t\t\t**************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Course\t\tName\t\t\tGmail\t\t\t\tNumber\n");
    printf ("CSE231-232\tMost.Jannatul Ferdous\tjannatul.083035@gmail.com\t01723586258\n");
    printf ("CSE-100\t\tMeer Muttakin Alam\tmalam@bubt.edu.bd\t\t01938498491\n");
    printf ("CSE-103\t\tMd.Abu Bakkar Siddique\tmisddique@bubt.edu.bd\t\t01741449006\n");
    printf ("ECO-101\t\tMr.Tareq Imam Zahid\ttareqimamzahid@yahoo.com\t01717041003\n");
    printf ("MATH-121\tMd.farooq Hasan\t\tfarooq@bubt.edu.bd\t\t01938498491\n");
    printf("\n\t\t\tpress 0 to go back =>");
    int choose;
    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        fa_user();
        break ;
    }

    getch();
}

void cl_ro_schedule()
{
    //ssss
}



//************************************************************Student*******************************************************************
void St(void)
{
    printf("System is uncompleted ");
}
//***********************************************************Teacher assistant***********************************************************
void Ta_as(void)
{
    printf("System is uncompleted ");
    getch();
}
//**************************************************************Employ*******************************************************************
void Em(void)
{
    printf("System is uncompleted ");
}
//************************************************************Graduated*******************************************************************
void Gr(void)
{
    printf("System is uncompleted ");
    getch();
}
//*************************************************************Library********************************************************************
void Li(void)
{
    printf("System is uncompleted ");
    getch();
}
//************************************************************Hostel**********************************************************************
void Ho(void)
{
    printf("System is uncompleted ");
    getch();
}
//***********************************************************Transport*********************************************************************
void Tr(void)
{
    printf("System is uncompleted ");
    getch();
}
//************************************************************club**************************************************************************
void Cl(void)
{
    printf("System is uncompleted ");
    getch();
}

//*********************************************************Admission panel*******************************************************************
void Ad_pa(void)
{
    printf("System is uncompleted ");
    getch();

}
//***********************************************************Log out***************************************************************************
void Lo_o(void)
{
    system("cls");
}

