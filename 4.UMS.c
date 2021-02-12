#include<stdio.h>
#include<conio.h>
#include<string.h>//use for strcmp()
#include<stdlib.h>
//*********************************************************Function declaration***************************************
void welcomeScreen(void);
void title(void);
void loading(void);
void login_screen(void);
void MainMenu(void);
void User(void);
void Un_ad(void);
//.........................................................Faculty function..........................................
void Fa(void);
void fa_insert_record();
void fa_display_record();
void fa_serch_record();
void fa_del_record();
void fa_update_recoed();
void fa_shot_record();


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
    char email[30];
    char mobile[25];
    char blood[5];
    char address[20];
    int salary;
};
struct profile p;

//*******************************************************main function**************************************************************
void main()

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
    int i,j ,a;
    printf("loading ");
    for(i=0;i<=10;i++)
    {
        for(j=0;j<100000000;j++)
            a=j;
        printf(".");
    }
}
//**************************************************************login screen*******************************************************************
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

           printf("\n\n\n\t\t\t\t");
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

//**************************************************************Main Menu**************************************************************************
void MainMenu(void)
{



    system("cls");

    title();
    int choose;

    printf("\n\n\n\n\t\t\t1.User\n");

    printf("\t\t\t2.University admin\n");
    printf("\t\t\t0.Logout...\n\n\n");
    printf("\t\t\tChoose from 1 to 2 :=>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        Lo_o();
        break ;
    case 1:
        User();
    case 2:
        loginscreen();
        Un_ad();
        break;

    }
}
//**************************************************************User define function********************************************************
void User(void)
{
    system("cls");
    int choose;
    title();
    printf("\n\n\n\t\t\t\t\t\t\t     <USER>\n");
    printf("\n\n\n\t\t\t1.Faculty\n");
    printf("\t\t\t2.Student\n");
    printf("\t\t\t3.Teacher assistant\n");
    printf("\t\t\t4.Employees\n");
    printf("\t\t\t5.Parents\n");
    printf("\t\t\t6.Graduated\n");
    printf("\t\t\t7.Library\n");
    printf("\t\t\t8.Hostel\n");
    printf("\t\t\t9.Transport\n");
    printf("\t\t\t10.club\n");
    printf("\t\t\t11.programmer\n");
    printf("\t\t\t12.admission panel\n");
    printf("\t\t\t0.Logout...\n\n\n");
    printf("\t\t\tChoose from 1 to 12 :=>");
    scanf("%i",&choose);

    switch(choose)
    {
    case 0:
        Lo_o();
        break;
    case 1:
        loginscreen();
        Fa();
        break;
    case 2:
        loginscreen();
        St();
        break;
    case 3:
        loginscreen();
        Ta_as();
        break;
    case 4:
        loginscreen();
        Em();
        break;
    case 5:
        loginscreen();
        Pa();
        break;
    case 6:
        loginscreen();
        Gr();
        break;
    case 7:
        loginscreen();
        Li();
        break;
    case 8:
        loginscreen();
        Ho();
        break;
    case 9:
        loginscreen();
        Tr();
        break;
    case 10:
        loginscreen();
        Cl();
        break;
    case 11:
        loginscreen();
        Pr();
        break;
    case 12:
        loginscreen();
        Ad_pa();
        break;
    }
}

//*****************************************************************University admin function*****************************************************************

void Un_ad(void)
{
    system("cls");
    system("COLOR 0B");
    int choose;
    title();
    printf("\n\n\n\t\t\t\t\t\t       <University admin>\n");
    printf("\n\n\n\t\t\t1.Faculty record\n");
    printf("\t\t\t2.Student record\n");
    printf("\t\t\t3.Teacher assistant record\n");
    printf("\t\t\t4.Employees record\n");
    printf("\t\t\t5.Parents record\n");
    printf("\t\t\t6.Graduated record\n");
    printf("\t\t\t7.Library record\n");
    printf("\t\t\t8.Hostel record\n");
    printf("\t\t\t9.Transport record\n");
    printf("\t\t\t10.club record\n");
    printf("\t\t\t11.programmer record\n");
    printf("\t\t\t12.admission panel record\n");
    printf("\t\t\t0.Logout...\n\n\n");
    printf("\t\t\tChoose from 1 to 12 :=>");
    scanf("%i",&choose);

    switch(choose)
    {
    case 0:
        Lo_o();
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
        Pa();
        break;
    case 6:
        Gr();
        break;
    case 7:
        Li();
        break;
    case 8:
        Ho();
        break;
    case 9:
        Tr();
        break;
    case 10:
        Cl();
        break;
    case 11:
        Pr();
        break;
    case 12:
        Ad_pa();
        break;
    }

}

//************************************************************Faculty********************************************************************
void Fa(void)
{

    system("cls");

    title();

    int ch;

    while(ch!=7)
    {
        printf("\n\t\t\t1.Faculty insert \n");
        printf("\t\t\t2.Faculty display \n");
        printf("\t\t\t3.Faculty search \n");
        printf("\t\t\t4.Faculty delete \n");
        printf("\t\t\t5.Faculty update \n");
        printf("\t\t\t6.Faculty shot \n");
        printf("\t\t\t7.exit \n");


        printf("\n\t\t\tEnter your choose : ");
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
        case 5 :
            system("cls");
            fa_update_recoed();
            break;
        case 6 :
            system("cls");
            fa_shot_record();
            break;
        case 7:
            exit(1);
        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }



        getch();
    }
}

//............................................................faculty record...........................................................
void fa_insert_record(void)
{
    FILE*fa;
    fa=fopen("faculty.txt","ab+");
    if(fa==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    fa_display_record();
    printf("\n\t\t\tEnter new faculty data :\n");
    printf("\n\t\t1.Enter faculty id :");
    scanf("%d",&p.id);
    fflush(stdin);
    printf("\t\t2.Enter faculty name :");
    gets(p.name);
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
    fflush(stdin);
    printf("\t\t4.Enter faculty  salary :");
    scanf("%d",&p.salary);
    fwrite(&p,sizeof(p),1,fa);

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
    fa=fopen("faculty.txt","rb");
    if(fa==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\tFaculty details are as follows\n");
    printf("id\tName\tPosition\tEmail\t\t\tMobile No\t\tBlood Group\tAddress\t\tSalary\n");
    while(fread(&p,sizeof(p),1,fa)==1)
    {
        printf("%d\t%s\t%s\t%s\t\t%s\t\t%s\t\t%s\t%d\n",p.id,p.name,p.position,p.email,p.mobile,p.blood,p.address,p.salary);

    }
    fclose(fa);

}
void fa_serch_record(void)
{
    int faid,flag=0;
    FILE*fa;
    fa=fopen("faculty.txt","rb");
    if(fa==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\nEnter a id which you want to search : \n");
    scanf("%d",&faid);
    while(fread(&p,sizeof(p),1,fa)>0 && flag==0)
    {

        if(p.id=faid)
        {
            flag=1;
            printf("\n\t\t\tSearch successfully and faculty record is as Follow :\n\n");
            printf("t\tid\tName\tPosition\tEmail\tMobile No\tBlood Group\tAddress\tSalary\n");
            printf("\t\t\t%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d\t\n",p.id,p.name,p.position,p.email,p.mobile,p.blood,p.address,p.salary);
        }

        if(flag==0)
        {
            printf("\n\n\t\t No such record found!!!!!!!!!\n");
        }
    }
    fclose(fa);

}
void fa_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*fa,*ft;
    fa=fopen("faculty.txt","rb");
    if(fa==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    fa_display_record();
    printf("\n\n\tEnter the name number which you want to delete");
    scanf("%s",&name);
    ft=fopen("faculty.txt","ab+");
    while(fread(&p,sizeof(p),1,fa)==1)
    {
        if(strcmp(name,p.name)!=0)
        {
            printf("\n\t\t Record Deleted successfully\n");
            fwrite(&p,sizeof(p),1,ft);
        }
        else
            flag=1;
    }
    if(flag==0)
    {
        printf("\n\n\tNo such Record found!!!!!!!!");
    }
    fclose(fa);
    fclose(ft);
    remove("faculty.txt");
    rename("faculty1.txt","stu.txt");
    printf("\n\t\tUpdate Record !!\n");
    fa_display_record();
}

void fa_update_recoed(void)
{
    int faid,flag=0;
    FILE*fa;
    fa=fopen("faculty.txt","rb+");
    if(fa==NULL)
    {
        printf("\n\t\t\tYou can not open the file !!!!!!!");
        return;
    }
    printf("\n\n\tEnter the roll number whose you want to update \n");
    scanf("%d",&faid);
    printf("\n\t\t***Previously stored record of given id number **** ");


    while(fread(&p,sizeof(p),1,fa)>0  &&  flag==0);
    {
        if(p.id==faid)
        {
            flag=1;
            printf("\n\nID :\nName:\nPosition:\nEmail:\nMobile No:\nBlood Group:\nAddress:\nSalary:\n");
            printf("\t\t\t%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d\t\n",p.id,p.name,p.position,p.email,p.mobile,p.blood,p.address,p.salary);
            printf("\n\t\t\tNow enter the new record :");

            printf("\n\t\t1.Update faculty id\n");
            scanf("%d",&p.id);
            fflush(stdin);
            printf("2.Update faculty name :\n");
            getchar();
            gets(p.name);
            printf("3.Update faculty  position :\n");
            gets(p.position);
            printf("4.Update faculty  email :\n");
            gets(p.email);
            printf("5.Update faculty  mobile :\n");
            gets(p.mobile);
            printf("6.Update faculty  blood group  :\n");
            gets(p.blood);
            printf("7.Update faculty address :\n");
            gets(p.address);
            printf("Update faculty  salary :\n");
            scanf("%d",&p.salary);
            fseek(fa,-(long)sizeof(p),1);
            fwrite(&p,sizeof(p),1,fa);
            printf("\n record update successfully ");


        }
        if(flag==0)
        {
            printf("\n\t\t\tError!Something went wrong  ");
        }
        fclose(fa);

    }
}


void fa_shot_record(void)

{
    struct profile temp;
    struct profile arr[50];
    int i,j,k=0;
    FILE*fa;
    fa=fopen("faculty.txt","rb");
    if(fa==NULL)
    {
        printf("\n\t\t Error:Cannot open file");

    }
    i=0;
    while(fread(&arr[i],sizeof(arr[i]),1,fa)==1)
    {
        i++;
        k++;
    }
    for(i=0; i<k; i++)
    {
        for(j=0; k<k-i-1; j++)
        {
            if(arr[j].id>arr[j+1].id)
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n\t\tAfter shorting student details!!\n\n");
    for(i=0; i<k; i++)
    {
        printf("\t\t\t%d\t%s\t%s\t%s\t%s\t%s\t%s\t%d\t\n",arr[i].id,arr[i].name,arr[i].position,arr[i].email,arr[i].mobile,arr[i].blood,arr[i].address,arr[i].salary);
    }
    fclose(fa);
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
//*************************************************************Parent*********************************************************************
void Pa(void)
{
    printf("System is uncompleted ");
    getch();
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
//***********************************************************Programmer**********************************************************************
void Pr(void)
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

