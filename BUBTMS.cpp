//BUBT management system>>team-04
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
void loginscreen(void);
void MainMenu(void);
void User(void);
void Un_ad(void);
//111111111111111111111111111111111111111111111111111111111111111111111 Faculty (admin) 111111111111111111111111111111111111111111111111111111
void Fa(void);
void fa_insert_record();
void fa_display_record();
void fa_serch_record();
void fa_del_record();
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa faculty (user) aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
void fa_login();
void fa_user();
void f_profile();
void course_id();
void cr_information();
void ta_information();
void fa_information();
void cl_ro_schedule();
//222222222222222222222222222222222222222222222222222222222222222222 student (admin) 22222222222222222222222222222222222222222222222222222222222222222222222222222
void St(void);

void St_profile();
void st_insert_record();
void st_display_record();
void st_serch_record();
void st_del_record();

void St_registration();
void strg_insert_record();
void strg_display_record();
void strg_serch_record();
void strg_del_record();

void St_result();
void stre_insert_record();
void stre_display_record();
void stre_serch_record();
void stre_del_record();

//bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb student (user) bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
void st_login(void);
void s_user(void);
void s_profile(void);
void class_routine(void);
void fac_information(void);

void strg_login();
void registration(void);

void library_report(void);
void payment(void);
void all_course(void);

void result(void);
void stre_login(void);

void career_guideline(void);
//333333333333333333333333333333333333333333333333333333333333333 teacher assistant (admin) 333333333333333333333333333333333333333333333333333333333333333333
void Te_as(void);
void ta_insert_record();
void ta_display_record();
void ta_serch_record();
void ta_del_record();

//cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc teacher assistant (user) ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
void te_as(void);
void ta_login(void);
void ta_profile(void);
void ta_research(void);
//4444444444444444444444444444444444444444444444444444444444444 employ(admin) 4444444444444444444444444444444444444444444444444444444444444444444444444444444444444
void Em(void);
void em_insert_record(void);
void em_display_record(void);
void em_search_record(void);
void em_del_record(void);

//ddddddddddddddddddddddddddddddddddddddddddddddddddddddddd employ (user) ddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd
void emp(void);
void em_login();
void em_profile();
void em_registation();
void account_section();


//55555555555555555555555555555555555555555555555555555555555555 Graduated (admin) 55555555555555555555555555555555555555555555555555555555555555555555555555
void Gr(void);
void gr_insert_record();
void gr_display_record();
void gr_serch_record();
void gr_del_record();

//eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee graduated (user) eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
void gra(void);
void gra_login();

void gra_profile();
void gra_program();
void gra_group();

//666666666666666666666666666666666666666666666666666666666666666666666 Library (admin) 6666666666666666666666666666666666666666666666666666666666666666666
void Li(void);
void li_insert_record();
void li_display_record();
void li_serch_record();
void li_del_record();

//fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff library (user) ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
void lib(void);
void lib_login();
void lib_profile();
void lib_book();
void lib_web();
//777777777777777777777777777777777777777777777777777777777777777777 hostel (admain) 777777777777777777777777777777777777777777777777777777777777777777777
void Ho(void);
void ho_insert_record();
void ho_display_record();
void ho_serch_record();
void ho_del_record();
//gggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg hostel(user) gggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg
void hol_login();
void hol();
void hol_profile();
void hol_time_sch();
void hol_item();
//88888888888888888888888888888888888888888888888888888888888888 Transport(admin) 888888888888888888888888888888888888888888888888888888888888888888888888
void Tr(void);
void tr_insert_record();
void tr_display_record();
void tr_serch_record();
void tr_del_record();
//hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh Transport (user) hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
void tra(void);
void tra_login();
void tra_profile();
void tra_info();
void tra_mainte();
void tra_trach();
//999999999999999999999999999999999999999999999999999999999999999999999 club(admin & user) iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
void Cl(void);
void cl_cu(void);
void cl_ph(void);
void cl_it(void);
void cl_to(void);
void cl_so(void);
void cl_ba(void);
//101010101010101010101010101010101010101010101010101010101010101010101010 admin panel(admin & user)(password different )jjjjjjjjjjjjjjjjjjjjjjj
void admimssion_login();
void Ad_pa(void);
void adm_pa(void);
void ad_insert_record();
void ad_display_record();
void ad_serch_record();
void ad_del_record();


struct profile
{
    int id;
    char name[20];
    char position[20];
    char email[30];
    char mobile[25];
    char blood[5];
    char address[20];
    char salary[10];
    char intake_section[20];
    char CGPA[10];
    char course_1[20];
    char course_2[20];
    char course_3[25];
    char course_4[5];
    char course_5[20];
    char course_6[10];
    char cou_1re[20];
    char cou_2re[20];
    char cou_3re[25];
    char cou_4re[5];
    char cou_5re[20];
    char cou_6re[10];
    char teachername[20];
    char subject[10];
    char intake[20];
    char book[10];
    char room_n[10];
    char gender[20];
    char bus_name[10];
    char program[20];


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
void loginscreen(void)
{
    system("cls");
    title();
    system("COLOR 0A");
    char username[25],password[25];
    char ch;
    int  i;

    while(1)
    {
        printf("\n\n\t\t\tEnter admin username and password=>");
        printf("\n\n\n\n\n\t\t\t\tUsername:");
        scanf("%s",username);
        printf("\n\t\t\t\tPassword:");
        i=0;
        while(1)
        {
            ch=getch();
            if(ch==13)
            {
                break;

            }
            else
            {
                password[i]=ch;
                putch('*');
                i++;

            }
        }
        password[i]='\0';
        printf("\n");
        if(strcmp(username,"team4")==0 && strcmp(password,"srrifat")==0)
        {
            printf("\n");
            loading();
            break;
        }
        else
        {
            system("COLOR 0C");
            printf("\n\t\t\tPlease enter the valid password=>");

        }

    }

}

//**************************************************************     Main Menu    **************************************************************************
void MainMenu(void)
{



    system("cls");

    title();
    int ch;

    while(ch!=2)
    {

        printf("\n\n\n\n\t\t\t\t1.User\n");

        printf("\t\t\t\t2.University admin\n");
        printf("\t\t\t\t0.Logout...\n\n\n");
        printf("\t\t\t\tChoose from 1 to 2 :=>");

        scanf("%i",&ch);



        switch(ch)
        {
        case 0:

            exit(1);
            break;

            break ;
        case 1:

            User();
            break;
        case 2:
            loginscreen();
            Un_ad();
            break;
        default :
        {
            system("cls");
            printf("\n\t\t\t!!!!Wrong choice");
        }
        printf("\n\t\t\tPass any key to continue............... ");


        }



    }



}
//***************************************************************** User define function  ********************************************************
void User(void)
{
    system("cls");
    int choose;
    title();

    while(choose!=10)
    {


        printf("\n\n\n\t\t\t\t\t\t\t     <USER>\n");
        printf("\n\n\t\t\t\t1.Faculty member\n");
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
        printf("\t\t\t\tChoose from 1 to 10 :=>");
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
            st_login();
            break;
        case 3:

            ta_login();
            break;
        case 4:

            em_login();
            break;

        case 5:

            gra_login();
            break;
        case 6:

            lib_login();
            break;
        case 7:

            hol_login();
            break;
        case 8:

            tra_login();
            break;
        case 9:

            Cl();
            break;

        case 10:
            admimssion_login();
            adm_pa();
            break;
        default :
        {
            system("cls");
            printf("\nt\t\t\t!!!Wrong choice");
        }
        printf("\n\t\t\tPass any key to continue............... ");


        }



    }


}

//***************************************************************** University admin function *****************************************************************

void Un_ad(void)
{
    system("cls");
    system("COLOR 0B");
    title();
    int choose;
    while(choose!=10)
    {
        printf("\n\n\n\t\t\t\t\t\t       <University admin>\n");
        printf("\n\n\n\t\t\t\t1.Faculty member record\n");
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
        printf("\t\t\t\tChoose from 1 to 10 :=>");
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
            Te_as();
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
        default :
        {
            system("cls");
            printf("\nt\t\t\t!!!Wrong choice");
        }
        printf("\n\t\t\tPass any key to continue............... ");


        }



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
        printf("\n\n\n\t\t\t\t1.Faculty member insert \n");
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
            printf("\n\t\t\t!!!!!!Wrong choice");
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
    printf("\t\t8.Enter faculty  salary :");
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
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa faculty (user) aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
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
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\tPassword : ";
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
//****************************************************************** faculty user option **************************************************************************
void fa_user()
{
    system("cls");

    title();
    system("COLOR 0B");
    int ch;

    while(ch!=7)
    {
        printf("\n\n\t\t\t\t1.Profie\n");
        printf("\t\t\t\t2.Course id\n");
        printf("\t\t\t\t3.CR information\n");
        printf("\t\t\t\t4.TA information\n");
        printf("\t\t\t\t5.Faculty information\n");
        printf("\t\t\t\t6.Class room schedule\n");
        printf("\t\t\t\t7.logout");
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
            cr_information();
        case 4:
            system("cls");
            ta_information();

            break;
        case 5:
            system("cls");
            fa_information();
            break;
        case 6:
            system("cls");
            cl_ro_schedule();

        case 7:
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
    cout<<"\n\n\t\t\t1.Name:"<<p.name<<" "<<"\n\t\t\t2.Id:"<<p.id<<" "<<"\n\t\t\t3.Position:"<<p.position<<" "<<"\n\t\t\t4.Email:"<<p.email<<" "<<"\n\t\t\t5.MObile no:"<<p.mobile<<" "<<"\n\t\t\t6.Blood group:"<<p.blood<<" "<<"\n\t\t\t7.Address: "<<p.address<<" "<<"\n\t\t\t8.Salaray: "<<p.salary<<endl;
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
    system("cls");
    title();
    printf ("\n\n\t\t**************************\n");
    printf ("\t\t\tCourse Id\n");
    printf ("\t\t**************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Course Id\tIntake\t\tSection\n");
    printf ("CSE101,102\t44\t\t07\n");
    printf ("CSE231,232\t44\t\t07\n");
    printf ("CSE100\t\t44\t\t07\n");
    printf ("CSE121,122\t44\t\t07\n");
    printf ("CSE103\t\t44\t\t07\n");
    printf ("CSE111,112\t44\t\t07\n");
    printf ("CSE200\t\t44\t\t07\n");
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

void cr_information()
{
    system("cls");
    title();
    printf ("\n\n\t\t\t\t**************************\n");
    printf ("\t\t\t\t\tCR information\n");
    printf ("\t\t\t\t**************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Intake\t\tSection\t\tId\t\t\tName\t\t\tNumber\n");
    printf ("44\t\t07\t\t19202103248\t\tMd Imran nazir\t\t01722204245\n");
    printf ("44\t\t07\t\t19202103245\t\tNayma Khatun\t\t01938498491\n");
    printf ("44\t\t09\t\t19202103332\t\tArpo majumdar\t\t01788028201\n");

    int choose;
    printf("\n\t\t\tpress 0 to go back =>");

    scanf("%i",&choose);




    switch(choose)
    {
    case 0:

        fa_user();
        break ;
    }

    getch();
}
void ta_information()
{
    system("cls");
    title();
    printf ("\n\n\t\t\t\t**************************\n");
    printf ("\t\t\t\t\tTA information\n");
    printf ("\t\t\t\t**************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    /* printf ("Intake\t\tSection\t\tId\t\t\tName\t\t\tNumber\n");
     printf ("44\t\t07\t\t19202103248\t\tMd Imran nazir\t\t01722204245\n");
     printf ("44\t\t07\t\t19202103245\t\tNayma Khatun\t\t01822055190\n");
     printf ("44\t\t07\t\t19202103277\t\tSaydur Rahman\t\t01703639091\n");
     printf ("44\t\t07\t\t19202103271\t\tWalid Al Hasan\t\t01938498491\n");
     printf ("44\t\t07\t\t19202103259\t\tAnupam Kummar\t\t01992183999\n");
     printf ("44\t\t07\t\t19202103353\t\tJannatul Ferdous Mim\t01799975825\n");*/
    ta_display_record();
    int choose;
    printf("\n\t\t\tpress 0 to go back =>");
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
    system("cls");
    title();
    printf ("\n\n\t\t\t\t*******************************\n");
    printf ("\t\t\t\t\tFACULTY INFORMATION\n");
    printf ("\t\t\t\t*******************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Course\t\tName\t\t\tGmail\t\t\t\tNumber\n");
    printf ("CSE231-232\tMost.Jannatul Ferdous\tjannatul.083035@gmail.com\t01723586258\n");
    printf ("CSE-100\t\tMeer Muttakin Alam\tmalam@bubt.edu.bd\t\t01938498491\n");
    printf ("CSE-103\t\tMd.Abu Bakkar Siddique\tmisddique@bubt.edu.bd\t\t01741449006\n");
    printf ("ECO-101\t\tMr.Tareq Imam Zahid\ttareqimamzahid@yahoo.com\t01717041003\n");
    printf ("MATH-121\tMd.farooq Hasan\t\tfarooq@bubt.edu.bd\t\t01938498491\n");
    int choose;
    printf("\n\t\t\tpress 0 to go back =>");

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
    system("cls");
    title();
    printf ("\n\n\t\t\t\t********************************\n");
    printf ("\t\t\t\t\tFACULTY ROOM SCHEDULE\n");
    printf ("\t\t\t\t********************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Day&time\t8.30 to 9.50AM\t\t10.00 to 11.20AM\t11.30 to 12.40PM\t2.50 to 4.10PM\t 4.20 to 5.40PM\n");
    printf ("SUN\t\t CSE102(301)\t\tCSE103(402)\t\t\t\t\tCSE111(404)\n");
    printf ("MON\t\t CSE231(303)\t\tCSE-232(301)\n");
    printf ("TUE\t\t\t\t\tCSE100(402)\t\tECO-101(402)\n");
    printf ("WEB\t\t\t\t\tCSE121(401)\t\tCSE200(302)\t\tCSE-232(401)      CSE101(304)\n");
    int choose;
    printf("\n\t\t\tpress 0 to go back =>");
    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        fa_user();
        break ;
    }

    getch();


}
//222222222222222222222222222222222222222222222222222222222 student (admin control) 222222222222222222222222222222222222222222222222222222222222222222
void St(void)
{

    system("cls");

    title();
    int choose;
    while(choose!=3)
    {
        printf("\n\n\n\n\t\t\t\t1.Student profile\n");

        printf("\t\t\t\t2.Student registration\n");
        printf("\t\t\t\t3.Student result\n");
        printf("\t\t\t\t0.Logout...\n\n\n");
        printf("\t\t\t\tChoose from 1 to 2 :=>");

        scanf("%i",&choose);



        switch(choose)
        {
        case 0:
            Un_ad();
            break ;
        case 1:
            St_profile();
        case 2:
            St_registration();
            break;
        case 3:
            St_result();
            break;
        default :
        {
            printf("\n\t\t\tWrong choice");
        }
        printf("\n\t\t\tPass any key to continue............... ");


        }


    }
}
//######################################################################## student profile(admin) ######################################################################
void St_profile(void)
{

    system("cls");

    title();
    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Student insert\n");
        printf("\t\t\t\t2.Student display\n");
        printf("\t\t\t\t3.Student search\n");
        printf("\t\t\t\t4.Student delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            st_insert_record();
            break;
        case 2 :
            system("cls");
            st_display_record();
            break;
        case 3 :
            system("cls");
            st_serch_record();

            break;
        case 4:
            system("cls");
            st_del_record();
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
void st_insert_record(void)
{
    FILE*st;
    st=fopen("student.txt","a+");
    if(st==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    st_display_record();
    printf("\n\t\t\tEnter new student data :\n");



    printf("\n\t\t1.Enter student name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter student id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter student intake-section :");
    gets(p.intake_section);
    printf("\t\t4.Enter student  email :");
    gets(p.email);
    printf("\t\t5.Enter student  mobile :");
    gets(p.mobile);
    printf("\t\t6.Enter student blood group  :");
    gets(p.blood);
    printf("\t\t7.Enter student address :");
    gets(p.address);
    //fflush(stdin);
    printf("\t\t4.Enter student CGPA:");
    gets(p.CGPA);
    fprintf(st,"%s\n",p.name);
    fprintf(st,"%d\n",p.id);
    fprintf(st,"%s\n",p.intake_section);
    fprintf(st,"%s\n",p.email);
    fprintf(st,"%s\n",p.mobile);
    fprintf(st,"%s\n",p.blood);
    fprintf(st,"%s\n",p.address);
    fprintf(st,"%s\n",p.CGPA);

    {
        printf("\n\t\t\t****Faculty record inserted successfully*****\n");

    }
    fclose(st);
    printf("\n\t\t\t##Update Record## \n");
    st_display_record();

}

void st_display_record(void)
{
    FILE*st;
    st=fopen("student.txt","r");
    if(st==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\tFaculty details are as follows=>\n\n");

    while(!feof(st))
    {
        fscanf(st,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake_section,&p.email,&p.mobile,&p.blood,&p.address,&p.CGPA);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.intake_section,p.email,p.mobile,p.blood,p.address,p.CGPA);

    }
    fclose(st);

}
void st_serch_record(void)
{
    int faid,flag=0;
    FILE*st;
    st=fopen("student.txt","r");
    if(st==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&faid);
    while(!feof(st))
    {
        fscanf(st,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake_section,&p.email,&p.mobile,&p.blood,&p.address,&p.CGPA);
        if(p.id==faid)
        {
            printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.intake_section,p.email,p.mobile,p.blood,p.address,p.CGPA);
            flag=1;
            break;
        }





    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(st);

}
void st_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*st,*std;
    st=fopen("student.txt","r");
    if(st==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    st_display_record();
    printf("\n\n\t\t!!!!!!Enter the name number which you want to delete =>");
    scanf("%s",&name);
    std=fopen("student1.txt","a+");
    while(!feof(st))
    {
        fscanf(st,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.intake_section,&p.email,&p.mobile,&p.blood,&p.address,&p.CGPA);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(std,"%s\n",p.name);
            fprintf(std,"%d\n",p.id);
            fprintf(std,"%s\n",p.intake_section);
            fprintf(std,"%s\n",p.email);
            fprintf(std,"%s\n",p.mobile);
            fprintf(std,"%s\n",p.blood);
            fprintf(std,"%s\n",p.address);
            fprintf(std,"%s\n",p.CGPA);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(st);
    fclose(std);
    remove("student.txt");
    rename("student1.txt","student.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    st_display_record();
}
//####################################################### Registration info(admin) #################################################################################
void St_registration()
{
    system("cls");

    title();
    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Course insert\n");
        printf("\t\t\t\t2.Course display\n");
        printf("\t\t\t\t3.Cousre search\n");
        printf("\t\t\t\t4.Cousse delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            strg_insert_record();
            break;
        case 2 :
            system("cls");
            strg_display_record();
            break;
        case 3 :
            system("cls");
            strg_serch_record();

            break;
        case 4:
            system("cls");
            strg_del_record();
            break;

        case 5:
            St();
        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }



    }


}
void strg_insert_record(void)
{
    FILE*strg;
    strg=fopen("studentrg.txt","a+");
    if(strg==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious student registration\n ");
    strg_display_record();
    printf("\n\t\t\tEnter new student course data :\n");



    printf("\n\t\t1.Enter student name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter student id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter course code 1 :");
    gets(p.course_1);
    printf("\t\t4.Enter course code 2 :");
    gets(p.course_2);
    printf("\t\t5.Enter course code 3 :");
    gets(p.course_3);
    printf("\t\t6.Enter course code 4 :");
    gets(p.course_4);
    printf("\t\t7.Enter course code 5 :");
    gets(p.course_5);
    //fflush(stdin);
    printf("\t\t8.Enter course code 6 :");
    gets(p.course_6);
    fprintf(strg,"%s\n",p.name);
    fprintf(strg,"%d\n",p.id);
    fprintf(strg,"%s\n",p.course_1);
    fprintf(strg,"%s\n",p.course_2);
    fprintf(strg,"%s\n",p.course_3);
    fprintf(strg,"%s\n",p.course_4);
    fprintf(strg,"%s\n",p.course_5);
    fprintf(strg,"%s\n",p.course_6);

    {
        printf("\n\t\t\t****Registration record inserted successfully*****\n");

    }
    fclose(strg);
    printf("\n\t\t\t##Update Record## \n");
    strg_display_record();

}

void strg_display_record(void)
{
    FILE*strg;
    strg=fopen("studentrg.txt","r");
    if(strg==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\tRegistration details are as follows=>\n\n");

    while(!feof(strg))
    {
        fscanf(strg,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.course_1,&p.course_2,&p.course_3,&p.course_4,&p.course_5,&p.course_6);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.course_1,p.course_2,p.course_3,p.course_4,&p.course_5,&p.course_6);

    }
    fclose(strg);

}
void strg_serch_record(void)
{
    int strgid,flag=0;
    FILE*strg;
    strg=fopen("studentrg.txt","r");
    if(strg==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&strgid);
    while(!feof(strg))
    {
        fscanf(strg,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.course_1,&p.course_2,&p.course_3,&p.course_4,&p.course_5,&p.course_6);

        if(p.id==strgid)
        {
            printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.course_1,p.course_2,p.course_3,p.course_4,&p.course_5,&p.course_6);
            flag=1;
            break;
        }





    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(strg);

}
void strg_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*strg,*strgd;
    strg=fopen("studentrg.txt","r");
    if(strg==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    strg_display_record();
    printf("\n\n\t\t!!!!!!Enter the name number which you want to delete =>");
    scanf("%s",&name);
    strgd=fopen("studentrg1.txt","a+");
    while(!feof(strg))
    {
        fscanf(strg,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.course_1,&p.course_2,&p.course_3,&p.course_4,&p.course_5,&p.course_6);

        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(strgd,"%s\n",p.name);
            fprintf(strgd,"%d\n",p.id);
            fprintf(strgd,"%s\n",p.course_1);
            fprintf(strgd,"%s\n",p.course_2);
            fprintf(strgd,"%s\n",p.course_3);
            fprintf(strgd,"%s\n",p.course_4);
            fprintf(strgd,"%s\n",p.course_5);
            fprintf(strgd,"%s\n",p.course_6);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(strg);
    fclose(strgd);
    remove("studentrg.txt");
    rename("studentrg1.txt","studentrg.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    strg_display_record();
}
//###################################################################### student result (admin) #################################################################
void St_result()
{
    system("cls");
    title();

    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Student  result insert\n");
        printf("\t\t\t\t2.Student result display\n");
        printf("\t\t\t\t3.Student result search\n");
        printf("\t\t\t\t4.Student result delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            stre_insert_record();
            break;
        case 2 :
            system("cls");
            stre_display_record();
            break;
        case 3 :
            system("cls");
            stre_serch_record();

            break;
        case 4:
            system("cls");
            stre_del_record();
            break;

        case 5:
            St();
        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }



    }
}
void stre_insert_record(void)
{
    FILE*stre;
    stre=fopen("studentre.txt","a+");
    if(stre==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    stre_display_record();
    printf("\n\t\t\tEnter new student result data :\n");



    printf("\n\t\t1.Enter student name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter student id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter student course result-1 :");
    gets(p.cou_1re);
    printf("\t\t4.Enter student course result-2 :");
    gets(p.cou_2re);
    printf("\t\t5.Enter student course result-3 :");
    gets(p.cou_3re);
    printf("\t\t6.Enter student course result-4:");
    gets(p.cou_4re);
    printf("\t\t7.Enter student course result-5:");
    gets(p.cou_5re);
    //fflush(stdin);
    printf("\t\t8.Enter student course result-6:");
    gets(p.cou_6re);
    fprintf(stre,"%s\n",p.name);
    fprintf(stre,"%d\n",p.id);
    fprintf(stre,"%s\n",p.cou_1re);
    fprintf(stre,"%s\n",p.cou_2re);
    fprintf(stre,"%s\n",p.cou_3re);
    fprintf(stre,"%s\n",p.cou_4re);
    fprintf(stre,"%s\n",p.cou_5re);
    fprintf(stre,"%s\n",p.cou_6re);

    {
        printf("\n\t\t\t****Faculty record inserted successfully*****\n");

    }
    fclose(stre);
    printf("\n\t\t\t##Update Record## \n");
    stre_display_record();

}

void stre_display_record(void)
{
    FILE*stre;
    stre=fopen("studentre.txt","r");
    if(stre==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\tFaculty details are as follows=>\n\n");

    while(!feof(stre))
    {
        fscanf(stre,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.cou_1re,&p.cou_2re,&p.cou_3re,&p.cou_4re,&p.cou_5re,&p.cou_6re);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.cou_1re,p.cou_2re,p.cou_3re,p.cou_4re,p.cou_5re,p.cou_6re);

    }
    fclose(stre);

}
void stre_serch_record(void)
{
    int faid,flag=0;
    FILE*stre;
    stre=fopen("studentre.txt","r");
    if(stre==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&faid);
    while(!feof(stre))
    {
        fscanf(stre,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.cou_1re,&p.cou_2re,&p.cou_3re,&p.cou_4re,&p.cou_5re,&p.cou_6re);
        if(p.id==faid)
        {
            printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.cou_1re,p.cou_2re,p.cou_3re,p.cou_4re,p.cou_5re,p.cou_6re);
            flag=1;
            break;
        }





    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(stre);

}
void stre_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*stre,*stred;
    stre=fopen("studentre.txt","r");
    if(stre==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    stre_display_record();
    printf("\n\n\t\t!!!!!!Enter the name number which you want to delete =>");
    scanf("%s",&name);
    stred=fopen("studentre1.txt","a+");
    while(!feof(stre))
    {
        fscanf(stre,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.cou_1re,&p.cou_2re,&p.cou_3re,&p.cou_4re,&p.cou_5re,&p.cou_6re);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(stred,"%s\n",p.name);
            fprintf(stred,"%d\n",p.id);
            fprintf(stred,"%s\n",p.cou_1re);
            fprintf(stred,"%s\n",p.cou_2re);
            fprintf(stred,"%s\n",p.cou_3re);
            fprintf(stred,"%s\n",p.cou_4re);
            fprintf(stred,"%s\n",p.cou_5re);
            fprintf(stred,"%s\n",p.cou_6re);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(stre);
    fclose(stred);
    remove("studentre.txt");
    rename("studentre1.txt","studentre.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    stre_display_record();
}

//bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb Student (user) bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
//..........................................................student login ...........................................................................
void st_login()
{
    system("cls");
    title();
    system("COLOR 0A");
    while(1)
    {
        FILE *st;
        char name2[50];
        int id2,r,k=0;
        st=fopen("student.txt","r");
        if(st==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\tPassword : ";
            cin>>id2;
            while(!feof(st))
            {
                fscanf(st,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.intake_section,&p.email,&p.mobile,&p.blood,&p.address,&p.CGPA);

                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    s_user();
                    // cout<<p.name<<" "<<p.id<<" "<<p.intake_section<<" "<<p.email<<" "<<p.mobile<<" "<<p.blood<<" "<<p.address<<" "<<p.CGPA<<endl;
                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<< "\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(st);
        }
    }

}
void strg_login()
{
    system("cls");
    title();
    system("COLOR 0A");
    while(1)
    {
        FILE *strg;
        char name2[50];
        int id2,r,k=0;
        strg=fopen("studentrg.txt","r");
        if(strg==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;

            cout<< "\n\t\t\t\tPassword : ";
            cin>>id2;
            while(!feof(strg))
            {
                fscanf(strg,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.course_1,&p.course_2,&p.course_3,&p.course_4,&p.course_5,&p.course_6);
                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    registration();
                    // cout<<p.name<<" "<<p.id<<" "<<p.course_1<<" "<<p.course_2<<" "<<p.course_3<<" "<<p.course_4<<" "<<p.course_5<<" "<<p.course_6<<endl;
                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<< "\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(strg);
        }
    }



}


void stre_login()
{
    system("cls");
    title();

    system("COLOR 0A");
    while(1)
    {
        FILE *stre;
        char name2[50];
        int id2,r,k=0;
        stre=fopen("studentre.txt","r");
        if(stre==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\tPassword : ";
            cin>>id2;
            while(!feof(stre))
            {
                fscanf(stre,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.cou_1re,&p.cou_2re,&p.cou_3re,&p.cou_4re,&p.cou_5re,&p.cou_6re);
                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    result();
                    //printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.cou_1re,p.cou_2re,p.cou_3re,p.cou_4re,p.cou_5re,p.cou_6re);
                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<<"\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(stre);
        }
    }

}


//.............................................................. user login ...........................................................................

void s_user(void)
{
    system("cls");

    title();
    system("COLOR 0B");
    int ch;

    while(ch!=9)
    {
        printf("\n\n\t\t\t\t1.Profie\n");
        printf("\t\t\t\t2.Class routine\n");
        printf("\t\t\t\t3.Faculty information\n");
        printf("\t\t\t\t4.Registration \n");
        printf("\t\t\t\t5.Library report\n");
        printf("\t\t\t\t6.Payment\n");
        printf("\t\t\t\t7.All cource\n");
        printf("\t\t\t\t8.Result\n");
        printf("\t\t\t\t9.Career guideline\n");
        printf("\t\t\t\t0.Logout\n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {

        case 0:
            User();
            break;
        case 1:
            system("cls");
            s_profile();
            break;
        case 2:
            system("cls");
            class_routine();
            break;
        case 3:
            system("cls");
            fac_information();
            break;
        case 4:
            system("cls");
            strg_login();
            break;

        case 5:
            system("cls");
            library_report();
            break;
        case 6:
            system("cls");
            payment();
            break;
        case 7:
            system("cls");
            all_course();
            break;
        case 8:
            system("cls");
            stre_login();
            break;
        case 9:
            system("cls");
            career_guideline();
            break;
        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }
    }
}

void s_profile(void)
{

    system("cls");
    title();
    cout<<"\n\n\t\t\t1.Name:"<<p.name<<" "<<"\n\t\t\t2.Id:"<<p.id<<" "<<"\n\t\t\t3.Intake-section:"<<p.intake_section<<" "<<"\n\t\t\t4.Email:"<<p.email<<" "<<"\n\t\t\t5.MObile no:"<<p.mobile<<" "<<"\n\t\t\t6.Blood group:"<<p.blood<<" "<<"\n\t\t\t7.Address: "<<p.address<<" "<<"\n\t\t\t8.CGPA: "<<p.CGPA<<endl;
    int choose;

    printf("\n\t\t\tpress 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        s_user();
        break ;
    }
}
void class_routine(void)
{
    system("cls");
    printf ("\t\t\t\t**************************\n");
    printf ("\t\t\t\t\tCLASS ROTUINE\n");
    printf ("\t\t\t\t**************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Day&time\t8.30 to 9.50AM\t 10.00 to 11.20AM\t11.30 to 12.40PM\t2.50 to 4.10PM\t4.20 to 5.40\n");
    printf ("SUN\t\t CSE-231\t  CSE-100\t\t\t\t\tCSE-103\n");
    printf ("MON\t\t CSE-103\t  CSE-231\n");
    printf ("TUE\t\t\t\t  MATH-121\t\t  ECO-101\n");
    printf ("WEB\t\t\t\t  ECO-101\t\t  MATH-121\t\tCSE-232           CSE-232\n");
    printf("\n\t\t\tpress 0 to go back =>");
    int choose;
    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        s_user();
        break ;

    }
}
void fac_information(void)
{
    system("cls");
    title();
    printf ("\n\n\t\t\t\t*******************************\n");
    printf ("\t\t\t\t\tFACULTY INFORMATION\n");
    printf ("\t\t\t\t*******************************\n");
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

        s_user();
        break ;
    }

}
void registration(void)
{
    system("COLOR 0E");
    system("cls");
    title();
    cout<<"\n\n\t\t\t1.Name:"<<p.name<<" "<<"\n\t\t\t2.Id:"<<p.id<<" "<<"\n\t\t\t3.Course-1:"<<p.course_1<<" "<<"\n\t\t\t4.Course-2:"<<p.course_2<<" "<<"\n\t\t\t5.Course-3:"<<p.course_3<<" "<<"\n\t\t\t6.Course-3:"<<p.course_4<<" "<<"\n\t\t\t7.Course-5: "<<p.course_5<<" "<<"\n\t\t\t8.Course-6: "<<p.course_6<<endl;
    int choose;

    printf("\n\t\t\tpress 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        s_user();
        break ;
    }
}
void library_report(void)
{
    system("COLOR 0E");
    system("cls");
    title();

    system("explorer http://103.15.140.180:8000/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        s_user();
        break ;
    }
}
void payment(void)
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer https://payment.bubt.edu.bd/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        s_user();
        break ;
    }
}
void all_course(void)
{
    system("cls");
    title();

    printf ("\n\n\t\t\t\t***************************\n");
    printf ("\t\t\t\t\tCSE ALL COURSE\n");
    printf ("\t\t\t\t***************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Course Code\tCourse Titel\t\t\t\t\tCredit\t\tTotal Credit\tPrerequisite\n");
    printf ("\t\t\t\t\t\t\t\tTheory/Lab\t\n");
    printf ("CSE101,102\tComputer & Programming Conceps &labl\t\t3.00/1.50\t4.50\t\t-\n");
    printf ("MAT101\t\tDifferential and Integral Calculus\t\t3.00   -\t4.50\t\t-\n");
    printf ("ENG101\t\tEnglish Language-I\t\t\t\t3.00   -\t4.50\t\t-\n");
    printf ("PHY101\t\tPhysics\t\t\t\t\t\t3.00   -\t4.50\t\t-\n");
    printf ("MAT111\t\tCo-Ordinate Geometry and Vector Calculus\t3.00   -\t3.00\t\tMAT 101\n");
    printf ("ENG111\t\tEnglish Language-II\t\t\t\t3.00   -\t4.50\t\tENG 101\n");
    printf ("EEE101,102\tEletrical Tecgnology & Lab\t\t\t3.00/1.50\t4.50\t\t-\n");
    printf ("CSE111,112\tStructured Programming Language & Lab\t\t3.00/1.50\t4.50\t\tCSE 101\n");
    printf ("CSE103\t\tDiscrete Mathematics\t\t\t\t3.00  -\t\t3.00\t\t-\n");
    printf ("MAT121\t\tLinear Algebras and differential equations\t3.00  -\t\t3.00\t\tMAT111\n");
    printf ("CSE121,122\tObject Oriented Programming Language & Lab\t3.00/1.50\t4.50\t\tEEE101\n");
    printf ("ECO100\t\tPrinciples of Economics\t\t\t\t3.00  -\t\t3.00\t\tMAT111\n");
    printf ("CSE100\t\tSoftware Development I\t\t\t\t-  0.75\t\t0.75\t\t-\n");
    printf ("CSE231,232\tData Structures & Lab\t\t\t\t3.00/1.50\t4.50\t\tCSE121\n");
    printf ("CSE200\t\tSoftware Development-II\t\t\t\t-  0.75\t\t0.75\t\tCSE100\n");
    int choose;

    printf("\n\t\t\tpress 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        s_user();
        break ;
    }
}
void result(void)
{
    system("cls");
    title();
    cout<<"\n\n\t\t\t1.Name:"<<p.name<<" "<<"\n\t\t\t2.Id:"<<p.id<<" "<<"\n\t\t\t3.course result-1:"<<p.cou_1re<<" "<<"\n\t\t\t4.course result-2:"<<p.cou_2re<<" "<<"\n\t\t\t5.course result-3:"<<p.cou_3re<<" "<<"\n\t\t\t6.course result-4:"<<p.cou_4re<<" "<<"\n\t\t\t7.course result-5: "<<p.cou_5re<<" "<<"\n\t\t\t8.course result-1: "<<p.cou_6re<<endl;
    int choose;

    printf("\n\t\t\tpress 0 to go back =>");

    scanf("%i",&choose);

    switch(choose)
    {
    case 0:

        s_user();
        break ;
    }
}
void career_guideline(void)
{
    system("cls");
    title();
    system("explorer https://www.bubt.edu.bd/Home/page_details/Career_Guidance_Office");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        s_user();
        break ;
    }
}
//333333333333333333333333333333333333333333333333333 teacher assistant (admin) 3333333333333333333333333333333333333333333333333333333333333333333
void Te_as(void)
{
    system("cls");

    title();
    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Teacher assistant insert\n");
        printf("\t\t\t\t2.Teacher assistant display\n");
        printf("\t\t\t\t3.Teacher assistant  search\n");
        printf("\t\t\t\t4.Teacher assistant delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            ta_insert_record();
            break;
        case 2 :
            system("cls");
            ta_display_record();
            break;
        case 3 :
            system("cls");
            ta_serch_record();

            break;
        case 4:
            system("cls");
            ta_del_record();
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
void ta_insert_record(void)
{
    FILE*ta;
    ta=fopen("teachera.txt","a+");
    if(ta==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    ta_display_record();
    printf("\n\t\t\tEnter new TA data :\n");



    printf("\n\t\t1.Enter TA name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter TA id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter TA faculty name :");
    gets(p.teachername);
    printf("\t\t4.Enter TA email :");
    gets(p.email);
    printf("\t\t5.Enter TA mobile :");
    gets(p.mobile);
    printf("\t\t6.Enter TA blood group  :");
    gets(p.blood);
    printf("\t\t7.Enter TA address :");
    gets(p.address);
    //fflush(stdin);
    printf("\t\t8.Enter TA salary :");
    gets(p.salary);
    fprintf(ta,"%s\n",p.name);
    fprintf(ta,"%d\n",p.id);
    fprintf(ta,"%s\n",p.teachername);
    fprintf(ta,"%s\n",p.email);
    fprintf(ta,"%s\n",p.mobile);
    fprintf(ta,"%s\n",p.blood);
    fprintf(ta,"%s\n",p.address);
    fprintf(ta,"%s\n",p.salary);

    {
        printf("\n\t\t\t****TA record inserted successfully*****\n");
    }
    fclose(ta);
    printf("\n\t\t\t##Update Record## \n");
    ta_display_record();

}

void ta_display_record(void)
{
    FILE*ta;
    ta=fopen("teachera.txt","r");
    if(ta==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\tTeacher assistant details are as follows=>\n\n");

    while(!feof(ta))
    {
        fscanf(ta,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.teachername,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
        printf("\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.teachername,p.email,p.mobile,p.blood,p.address,p.salary);

    }
    fclose(ta);

}
void ta_serch_record(void)
{
    int taid,flag=0;
    FILE*ta;
    ta=fopen("teachera.txt","r");
    if(ta==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&taid);
    while(!feof(ta))
    {
        fscanf(ta,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.teachername,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
        if(p.id==taid)
        {
            printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.teachername,p.email,p.mobile,p.blood,p.address,p.salary);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(ta);

}
void ta_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*ta,*tad;
    ta=fopen("teachera.txt","r");
    if(ta==NULL)
    {
        printf("\n\n\t\tError:Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    ta_display_record();
    printf("\n\n\t\t!!!!!!Enter the name number which you want to delete =>");
    scanf("%s",&name);
    tad=fopen("teachera1.txt","a+");
    while(!feof(ta))
    {
        fscanf(ta,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.teachername,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(tad,"%s\n",p.name);
            fprintf(tad,"%d\n",p.id);
            fprintf(tad,"%s\n",p.teachername);
            fprintf(tad,"%s\n",p.email);
            fprintf(tad,"%s\n",p.mobile);
            fprintf(tad,"%s\n",p.blood);
            fprintf(tad,"%s\n",p.address);
            fprintf(tad,"%s\n",p.salary);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(ta);
    fclose(tad);
    remove("teachera.txt");
    rename("teachera1.txt","teachera.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    ta_display_record();
}

//cccccccccccccccccccccccccccccccccccccccccccccccccc Teacher assistant(user) cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
//***************************************************** Ta login ***************************************************************************************
void ta_login()
{
    system("cls");
    title();

    system("COLOR 0A");
    while(1)
    {
        FILE *ta;
        char name2[50];
        int id2,r,k=0;
        ta=fopen("teachera.txt","r");
        if(ta==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\tPassword : ";
            cin>>id2;
            while(!feof(ta))
            {
                fscanf(ta,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.teachername,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    te_as();
                    printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.teachername,p.email,p.mobile,p.blood,p.address,p.salary);
                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<<"\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(ta);
        }
    }

}
void te_as(void)
{
    system("cls");

    title();
    system("COLOR 0B");
    int ch;

    while(ch!=3)
    {
        printf("\n\n\t\t\t\t1.Profile\n");
        printf("\t\t\t\t2.Research info\n");
        printf("\t\t\t\t3.CR information\n");
        printf("\t\t\t\t0.Logout \n");

        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {

        case 0:
            User();
            break;
        case 1:
            system("cls");
            ta_profile();
            break;
        case 2:
            system("cls");
            ta_research();

            break;
        case 3:
            system("cls");
            cr_information();
            break;

        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }
    }
}
void ta_profile(void)
{
    system("cls");
    system("COLOR 0B");
    title();


    printf("\n\n\t\t1.Name :%s\n\t\t2.Id:%d\n\t\t3.Faculty name:%s\n\t\t4.Email:%s\n\t\t5.MObile NO:%s\n\t\t6.Blood Group:%s\n\t\t7.Address:%s\n\t\t8.Salary:%s\n",p.name,p.id,p.teachername,p.email,p.mobile,p.blood,p.address,p.salary);

    int choose;

    printf("\n\t\t\tpress 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        te_as();
        break ;
    }
}
void ta_research(void)
{
    system("cls");
    title();
    system("explorer https://www.bubt.edu.bd/Home/page_details/Call_for_Papers");
    int choose;

    printf("\n\t\t\tpress 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        te_as();
        break ;
    }

}

//4444444444444444444444444444444444444444444444444444444444444444 Employ(admin) 444444444444444444444444444444444444444444444444444444444444444444444444444444444

void Em(void)
{

    system("cls");
    title();
    int ch;
    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.employees insert\n");
        printf("\t\t\t\t2.Employees display\n");
        printf("\t\t\t\t3.Employees search\n");
        printf("\t\t\t\t4.Employees delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            em_insert_record();
            break;
        case 2 :
            system("cls");
            em_display_record();
            break;
        case 3 :
            system("cls");
            em_search_record();

            break;
        case 4:
            system("cls");
            em_del_record();
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
void em_insert_record(void)
{
    FILE*em;
    em=fopen("employees.txt","a+");
    if(em==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    em_display_record();
    printf("\n\t\t\tEnter new employees data :\n");



    printf("\n\t\t1.Enter employees name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter employees id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter employees  position :");
    gets(p.position);
    printf("\t\t4.Enter employees  email :");
    gets(p.email);
    printf("\t\t5.Enter employees  mobile :");
    gets(p.mobile);
    printf("\t\t6.Enter employees  blood group  :");
    gets(p.blood);
    printf("\t\t7.Enter employees address :");
    gets(p.address);
    //fflush(stdin);
    printf("\t\t8.Enter employees  salary :");
    gets(p.salary);
    fprintf(em,"%s\n",p.name);
    fprintf(em,"%d\n",p.id);
    fprintf(em,"%s\n",p.position);
    fprintf(em,"%s\n",p.email);
    fprintf(em,"%s\n",p.mobile);
    fprintf(em,"%s\n",p.blood);
    fprintf(em,"%s\n",p.address);
    fprintf(em,"%s\n",p.salary);

    {
        printf("\n\t\t\t****employees record inserted successfully*****\n");

    }
    fclose(em);
    printf("\n\t\t\t##Update Record## \n");
    em_display_record();

}

void em_display_record(void)
{
    FILE*em;
    em=fopen("employees.txt","r");
    if(em==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\tEmployees details are as follows=>\n\n");

    while(!feof(em))
    {
        fscanf(em,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.position,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.position,p.email,p.mobile,p.blood,p.address,p.salary);

    }
    fclose(em);

}
void em_search_record(void)
{
    int emid,flag=0;
    FILE*em;
    em=fopen("employees.txt","r");
    if(em==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&emid);
    while(!feof(em))
    {
        fscanf(em,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.position,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
        if(p.id==emid)
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



    fclose(em);

}
void em_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*em,*emd;
    em=fopen("employees.txt","r");
    if(em==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    em_display_record();
    printf("\n\n\t\t!!!!!!Enter the name  which you want to delete =>");
    scanf("%s",&name);
    emd=fopen("employees1.txt","a+");
    while(!feof(em))
    {
        fscanf(em,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.position,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(emd,"%s\n",p.name);
            fprintf(emd,"%d\n",p.id);
            fprintf(emd,"%s\n",p.position);
            fprintf(emd,"%s\n",p.email);
            fprintf(emd,"%s\n",p.mobile);
            fprintf(emd,"%s\n",p.blood);
            fprintf(emd,"%s\n",p.address);
            fprintf(emd,"%s\n",p.salary);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(em);
    fclose(emd);
    remove("employees.txt");
    rename("employees1.txt","employees.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    em_display_record();
}
//cccccccccccccccccccccccccccccccccccccccccccccccccccccccc empoly(usaer)ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
void em_login()
{
    system("cls");
    title();
    system("COLOR 0A");
    while(1)
    {
        FILE *em;
        char name2[50];
        int id2,r,k=0;
        em=fopen("employees.txt","r");
        if(em==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\tPassword : ";
            cin>>id2;
            while(!feof(em))
            {
                fscanf(em,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.position,&p.email,&p.mobile,&p.blood,&p.address,&p.salary);

                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    emp();


                    //printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\tn3.Position:%s\n\t\t\t4.Email:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address%s\n\t\t\t9.Salary%s\n",p.name,p.id,p.position,p.email,p.mobile,p.blood,p.address,p.salary);

                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<< "\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(em);
        }
    }

}

void emp(void)
{
    system("cls");
    title();
    system("COLOR 0B");
    int ch;

    while(ch!=3)
    {
        printf("\n\n\t\t\t\t1.Profile\n");
        printf("\t\t\t\t2.Registration\n");
        printf("\t\t\t\t3.Account section\n");
        printf("\t\t\t\t0.Logout \n");

        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {

        case 0:
            User();
            break;
        case 1:
            system("cls");
            em_profile();
            break;
        case 2:
            system("cls");
            em_registation();
            break;
        case 3:
            system("cls");
            account_section();
            break;

        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }
    }
}
void em_profile()
{
    system("cls");
    title();
    printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\t3.Position:%s\n\t\t\t4.Email:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address:%s\n\t\t\t8.Salary:%s\n",p.name,p.id,p.position,p.email,p.mobile,p.blood,p.address,p.salary);
    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        emp();
        break ;
    }

}
void em_registation()
{

    system("cls");
    title();
    int ch;
    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.employees insert\n");
        printf("\t\t\t\t2.Employees display\n");
        printf("\t\t\t\t3.Employees search\n");
        printf("\t\t\t\t4.Employees delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            em_insert_record();
            break;
        case 2 :
            system("cls");
            em_display_record();
            break;
        case 3 :
            system("cls");
            em_search_record();

            break;
        case 4:
            system("cls");
            em_del_record();
            break;

        case 5:
            emp();
        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }



    }

}
void account_section()
{
    system("cls");
    title();
    printf ("\n\t\t**********************************\n");
    printf ("\t\t\tAccount Section\n");
    printf ("\t\t**********************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Total Student University - 60,8274\t\t448873987298293/=\t\n");
    printf ("Total Student Fund\t- 10,9824\t\t8873987298293/=\t\n");
    printf ("Total Faculty Fund\t- 500\t\t\t209050950/=\n");
    printf ("Total TA Fund\t\t- 675\t\t\t87437938913/=\n");
    printf ("Total Employees Fund\t- 928\t\t\t723817956/=\n");
    printf ("Total library Fund\t- 575\t\t\t923817956/=\n");
    printf ("Total Club Fund\t\t- 560\t\t\t65786780/=\n");
    printf ("Total Hostel Fund\t- 630\t\t\t57657800/=\n");
    printf("\n\t\t\tPress 0 to go back =>");
    int choose;
    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        emp();
        break ;
    }
}

//55555555555555555555555555555555555555555555555555555555 Graduated(admin) 555555555555555555555555555555555555555555555555555555555555555555555555555555
void Gr(void)
{
    title();
    system("cls");
    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Graduated insert\n");
        printf("\t\t\t\t2.Graduated display\n");
        printf("\t\t\t\t3.Graduated search\n");
        printf("\t\t\t\t4.Graduated delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            gr_insert_record();
            break;
        case 2 :
            system("cls");
            gr_display_record();
            break;
        case 3 :
            system("cls");
            gr_serch_record();

            break;
        case 4:
            system("cls");
            gr_del_record();
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
void gr_insert_record(void)
{
    FILE*gr;
    gr=fopen("graduated.txt","a+");
    if(gr==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    gr_display_record();
    printf("\n\t\t\tEnter new graduated data :\n");



    printf("\n\t\t1.Enter graduated name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter graduated id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter graduated  intake :");
    gets(p.intake);
    printf("\t\t4.Enter graduated  email :");
    gets(p.email);
    printf("\t\t5.Enter graduated  mobile :");
    gets(p.mobile);
    printf("\t\t6.Enter graduated  blood group  :");
    gets(p.blood);
    printf("\t\t7.Enter graduated address :");
    gets(p.address);
    //fflush(stdin);
    printf("\t\t8.Enter graduated  program:");
    gets(p.subject);
    fprintf(gr,"%s\n",p.name);
    fprintf(gr,"%d\n",p.id);
    fprintf(gr,"%s\n",p.intake);
    fprintf(gr,"%s\n",p.email);
    fprintf(gr,"%s\n",p.mobile);
    fprintf(gr,"%s\n",p.blood);
    fprintf(gr,"%s\n",p.address);
    fprintf(gr,"%s\n",p.subject);

    {
        printf("\n\t\t\t****Graduated record inserted successfully*****\n");

    }
    fclose(gr);
    printf("\n\t\t\t##Update Record## \n");
    gr_display_record();

}
void gr_display_record(void)
{
    FILE*gr;
    gr=fopen("graduated.txt","r");
    if(gr==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\tGraduated details are as follows=>\n\n");

    while(!feof(gr))
    {
        fscanf(gr,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake,&p.email,&p.mobile,&p.blood,&p.address,&p.subject);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.intake,p.email,p.mobile,p.blood,p.address,p.subject);

    }
    fclose(gr);

}
void gr_serch_record(void)
{
    int grid,flag=0;
    FILE*gr;
    gr=fopen("graduated.txt","r");
    if(gr==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&grid);
    while(!feof(gr))
    {
        fscanf(gr,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake,&p.email,&p.mobile,&p.blood,&p.address,&p.subject);
        if(p.id==grid)
        {
            printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.intake,p.email,p.mobile,p.blood,p.address,p.subject);
            flag=1;
            break;
        }





    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(gr);

}
void gr_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*gr,*grd;
    gr=fopen("graduated.txt","r");
    if(gr==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    gr_display_record();
    printf("\n\n\t\t!!!!!!Enter the name which you want to delete =>");
    scanf("%s",&name);
    grd=fopen("graduated1.txt","a+");
    while(!feof(gr))
    {
        fscanf(gr,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.intake,&p.email,&p.mobile,&p.blood,&p.address,&p.subject);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(grd,"%s\n",p.name);
            fprintf(grd,"%d\n",p.id);
            fprintf(grd,"%s\n",p.intake);
            fprintf(grd,"%s\n",p.email);
            fprintf(grd,"%s\n",p.mobile);
            fprintf(grd,"%s\n",p.blood);
            fprintf(grd,"%s\n",p.address);
            fprintf(grd,"%s\n",p.subject);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(gr);
    fclose(grd);
    remove("graduated.txt");
    rename("graduated1.txt","graduated.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    gr_display_record();
}
//eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee graduated(user) eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
void gra_login()
{
    system("cls");
    title();
    system("COLOR 0A");
    while(1)
    {
        FILE *gr;
        char name2[50];
        int id2,r,k=0;
        gr=fopen("graduated.txt","r");
        if(gr==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\tPassword : ";
            cin>>id2;
            while(!feof(gr))
            {
                fscanf(gr,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake,&p.email,&p.mobile,&p.blood,&p.address,&p.subject);

                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    gra();
                    // printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\t3.Intake:%s\n\t\t\t4.Email:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address:%s\n\t\t\t9.Program:%s\n",p.name,p.id,p.intake,p.email,p.mobile,p.blood,p.address,p.subject);

                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<< "\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(gr);
        }
    }

}


void gra(void)
{
    system("cls");
    title();
    system("COLOR 0B");
    int ch;

    while(ch!=3)
    {
        printf("\n\n\t\t\t\t1.Graduated Profile\n");
        printf("\t\t\t\t2.Alumni program\n");
        printf("\t\t\t\t3.Alumni facebook group\n");
        printf("\t\t\t\t0.Logout \n");

        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {

        case 0:
            User();
            break;
        case 1:
            system("cls");
            gra_profile();
            break;
        case 2:
            system("cls");
            gra_program();

            break;
        case 3:
            gra_group();
            break;

        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }
    }
}
void gra_profile()

{
    system("cls");
    title();
    printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\t3.Intake:%s\n\t\t\t4.Email:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address:%s\n\t\t\t9.Program:%s\n",p.name,p.id,p.intake,p.email,p.mobile,p.blood,p.address,p.subject);
    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        gra();
        break ;
    }
}
void gra_program()
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer https://www.bubtaa.org/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        gra();
        break ;
    }
}
void gra_group()
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer https://www.facebook.com/groups/bubtalumniofficial/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        gra();
        break ;
    }
}
//6666666666666666666666666666666666666666666666666666666666666 Library(admin) 666666666666666666666666666666666666666666666666666666666666666666666666666666
void Li(void)
{
    system("cls");
    title();

    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Student insert\n");
        printf("\t\t\t\t2.Student display\n");
        printf("\t\t\t\t3.Student search\n");
        printf("\t\t\t\t4.Student delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            li_insert_record();
            break;
        case 2 :
            system("cls");
            li_display_record();
            break;
        case 3 :
            system("cls");
            li_serch_record();

            break;
        case 4:
            system("cls");
            li_del_record();
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
void li_insert_record(void)
{
    FILE*li;
    li=fopen("library.txt","a+");
    if(li==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    li_display_record();
    printf("\n\t\t\tEnter new student library data :\n");



    printf("\n\t\t1.Enter student name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter student id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter student intake-section :");
    gets(p.intake_section);
    printf("\t\t4.Enter student  email :");
    gets(p.email);
    printf("\t\t5.Enter student  mobile :");
    gets(p.mobile);
    printf("\t\t6.Enter student blood group  :");
    gets(p.blood);
    printf("\t\t7.Enter student address :");
    gets(p.address);
    //fflush(stdin);
    printf("\t\t8.Enter the student books are :");
    gets(p.book);
    fprintf(li,"%s\n",p.name);
    fprintf(li,"%d\n",p.id);
    fprintf(li,"%s\n",p.intake_section);
    fprintf(li,"%s\n",p.email);
    fprintf(li,"%s\n",p.mobile);
    fprintf(li,"%s\n",p.blood);
    fprintf(li,"%s\n",p.address);
    fprintf(li,"%s\n",p.book);

    {
        printf("\n\t\t\t****Library  record inserted successfully*****\n");

    }
    fclose(li);
    printf("\n\t\t\t##Update Record## \n");
    li_display_record();

}

void li_display_record(void)
{
    FILE*li;
    li=fopen("library.txt","r");
    if(li==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\tLibrary details are as follows=>\n\n");

    while(!feof(li))
    {
        fscanf(li,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake_section,&p.email,&p.mobile,&p.blood,&p.address,&p.book);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.intake_section,p.email,p.mobile,p.blood,p.address,p.book);

    }
    fclose(li);

}
void li_serch_record(void)
{
    int faid,flag=0;
    FILE*li;
    li=fopen("library.txt","r");
    if(li==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&faid);
    while(!feof(li))
    {
        fscanf(li,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake_section,&p.email,&p.mobile,&p.blood,&p.address,&p.book);
        if(p.id==faid)
        {
            printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.intake_section,p.email,p.mobile,p.blood,p.address,p.book);
            flag=1;
            break;
        }





    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(li);

}
void li_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*li,*lid;
    li=fopen("library.txt","r");
    if(li==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious library  data*****");
    li_display_record();
    printf("\n\n\t\t!!!!!!Enter the name which you want to delete =>");
    scanf("%s",&name);
    lid=fopen("library1.txt","a+");
    while(!feof(li))
    {
        fscanf(li,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.intake_section,&p.email,&p.mobile,&p.blood,&p.address,&p.book);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(lid,"%s\n",p.name);
            fprintf(lid,"%d\n",p.id);
            fprintf(lid,"%s\n",p.intake_section);
            fprintf(lid,"%s\n",p.email);
            fprintf(lid,"%s\n",p.mobile);
            fprintf(lid,"%s\n",p.blood);
            fprintf(lid,"%s\n",p.address);
            fprintf(lid,"%s\n",p.book);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(li);
    fclose(lid);
    remove("library.txt");
    rename("library1.txt","library.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    li_display_record();
}
//fffffffffffffffffffffffffffffffffffffffffffffffffffffffff library (user) fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
void lib_login()
{
    system("cls");
    title();
    system("COLOR 0A");
    while(1)
    {
        FILE *li;
        char name2[50];
        int id2,r,k=0;
        li=fopen("library.txt","r");
        if(li==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\tPassword : ";
            cin>>id2;
            while(!feof(li))
            {
                fscanf(li,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake_section,&p.email,&p.mobile,&p.blood,&p.address,&p.book);

                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    lib();
                    //printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\t3.Intake-section:%s\n\t\t\t4.Email:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address:%s\n\t\t\t9.Salary:%s\n",p.name,p.id,p.intake_section,p.email,p.mobile,p.blood,p.address,p.book);

                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<< "\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(li);
        }
    }

}

void lib()
{
    system("cls");
    title();
    system("COLOR 0B");
    int ch;

    while(ch!=3)
    {
        printf("\n\n\t\t\t\t1.Profile\n");
        printf("\t\t\t\t2.Library book info\n");
        printf("\t\t\t\t3.Library website\n");
        printf("\t\t\t\t0.Logout \n");

        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {

        case 0:
            User();
            break;
        case 1:
            system("cls");
            lib_profile();
            break;
        case 2:
            system("cls");
            lib_book();
            break;
        case 3:
            system("cls");
            lib_web();
            break;

        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }
    }
}
void lib_profile()
{
    system("cls");
    title();
    printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\t3.Intake-section:%s\n\t\t\t4.Email:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address:%s\n\t\t\t9.The number:%s\n",p.name,p.id,p.intake_section,p.email,p.mobile,p.blood,p.address,p.book);

    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        lib();
        break ;
    }
}
void lib_book()
{
    system("cls");
    title();
    printf ("\n\t\t\t************************************\n");
    printf ("\t\t\t\t    ADD BOOK LIST\n");
    printf ("\t\t\t************************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("List of books on Computer Science\t\t\t\tAUTHOR\n");
    printf ("3d Animation For The Raw Beginner Using Maya\t\t\tKing Roger\n");
    printf ("Access 2016 Bible\t\t\t\t\t\tAlexander Michael\n");
    printf ("Ad Hoc Mobile Wireless Networks: Protocols And Systems\t\tToh C.K.\n");
    printf ("Ad Hoc Networking\t\t\t\t\t\tPerkins Charles E.\n");
    printf ("Ad Hoc Wireless Networks: Architectures And Protocols\t\tMurthy C. Siva Ram Et.Al\n");
    printf ("Advanced Video Communications Over Wireless Networks\t\tZhu Ce Et.Al\n");
    printf ("Autocad Lt 2012\t\t\t\t\t\t\tCadcim\n");
    printf ("Automata Theory And Its Applications\t\t\t\tBessiere Pierre Et.Al\n");
    printf ("Building Mobile Experiences\t\t\t\t\tBentley Et.A\n");
    printf ("Building Responsive Data Visualization For The Web\t\tHinderman Bill\n");
    printf ("C++ Programming A Practical Approac\t\t\t\tMothe Madhusudan\n");
    printf ("Cambridge Guide To Visicalc\t\t\t\t\tBob Mould, Fran Teo,\n");
    printf ("Coding For Data And Computer Communication\t\t\tSalomon\n");
    printf ("Combinatorial Designs: Constructions And Analysis\t\tStinson Douglas R.\n");
    int choose;

    printf("\n\t\t\tPress 0 to go back =>");
    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        lib();
        break ;
    }

}
void lib_web()
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer http://103.15.140.180:8000/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        lib();
        break ;
    }
}

//777777777777777777777777777777777777777777777777777777777777777777 Hostel (Admin) 77777777777777777777777777777777777777777777777777777777777777777777777
void Ho(void)
{
    system("cls");
    title();
    int ch;
    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Studnt insert\n");
        printf("\t\t\t\t2.Studnt display\n");
        printf("\t\t\t\t3.Studnt search\n");
        printf("\t\t\t\t4.Studnt delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);
        switch(ch)
        {


        case 1 :
            system("cls");
            ho_insert_record();
            break;
        case 2 :
            system("cls");
            ho_display_record();
            break;
        case 3 :
            system("cls");
            ho_serch_record();

            break;
        case 4:
            system("cls");
            ho_del_record();
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
void ho_insert_record(void)
{
    FILE*ho;
    ho=fopen("hostel.txt","a+");
    if(ho==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    ho_display_record();
    printf("\n\t\t\tEnter new hostel data :\n");



    printf("\n\t\t1.Enter student name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter student id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter student  gender :");
    gets(p.gender);
    printf("\t\t4.Enter student  email :");
    gets(p.email);
    printf("\t\t5.Enter student  mobile :");
    gets(p.mobile);
    printf("\t\t6.Enter student  blood group  :");
    gets(p.blood);
    printf("\t\t7.Enter student address :");
    gets(p.address);
    //fflush(stdin);
    printf("\t\t8.Enter student  room number :");
    gets(p.room_n);
    fprintf(ho,"%s\n",p.name);
    fprintf(ho,"%d\n",p.id);
    fprintf(ho,"%s\n",p.gender);
    fprintf(ho,"%s\n",p.email);
    fprintf(ho,"%s\n",p.mobile);
    fprintf(ho,"%s\n",p.blood);
    fprintf(ho,"%s\n",p.address);
    fprintf(ho,"%s\n",p.room_n);

    {
        printf("\n\t\t\t****hostel record inserted successfully*****\n");

    }
    fclose(ho);
    printf("\n\t\t\t##Update Record## \n");
    ho_display_record();

}

void ho_display_record(void)
{
    FILE*ho;
    ho=fopen("hostel.txt","r");
    if(ho==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\thostel details are as follows=>\n\n");

    while(!feof(ho))
    {
        fscanf(ho,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.gender,&p.email,&p.mobile,&p.blood,&p.address,&p.room_n);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.gender,p.email,p.mobile,p.blood,p.address,p.room_n);

    }
    fclose(ho);

}
void ho_serch_record(void)
{
    int hoid,flag=0;
    FILE*ho;
    ho=fopen("hostel.txt","r");
    if(ho==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&hoid);
    while(!feof(ho))
    {
        fscanf(ho,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.gender,&p.email,&p.mobile,&p.blood,&p.address,&p.room_n);
        if(p.id==hoid)
        {
            printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.gender,p.email,p.mobile,p.blood,p.address,p.room_n);
            flag=1;
            break;
        }





    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(ho);

}
void ho_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*ho,*hod;
    ho=fopen("hostel.txt","r");
    if(ho==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    ho_display_record();
    printf("\n\n\t\t!!!!!!Enter the name which you want to delete =>");
    scanf("%s",&name);
    hod=fopen("hostel1.txt","a+");
    while(!feof(ho))
    {
        fscanf(ho,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.gender,&p.email,&p.mobile,&p.blood,&p.address,&p.room_n);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(hod,"%s\n",p.name);
            fprintf(hod,"%d\n",p.id);
            fprintf(hod,"%s\n",p.gender);
            fprintf(hod,"%s\n",p.email);
            fprintf(hod,"%s\n",p.mobile);
            fprintf(hod,"%s\n",p.blood);
            fprintf(hod,"%s\n",p.address);
            fprintf(hod,"%s\n",p.room_n);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(ho);
    fclose(hod);
    remove("hostel.txt");
    rename("hostel1.txt","hostel.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    ho_display_record();
}
//gggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg hostel (user) gggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg
void hol_login()
{
    system("cls");
    title();
    system("COLOR 0A");
    while(1)
    {
        FILE *ho;
        char name2[50];
        int id2,r,k=0;
        ho=fopen("hostel.txt","r");
        if(ho==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\tPassword : ";
            cin>>id2;
            while(!feof(ho))
            {
                fscanf(ho,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.gender,&p.email,&p.mobile,&p.blood,&p.address,&p.room_n);

                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    hol();
                    // printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\t3.Gender:%s\n\t\t\t4.Email:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address:%s\n\t\t\t9.Room number:%s\n",p.name,p.id,p.gender,p.email,p.mobile,p.blood,p.address,p.room_n);

                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<< "\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(ho);
        }
    }

}
void hol()
{
    system("cls");
    title();
    system("COLOR 0B");
    int ch;

    while(ch!=3)
    {
        printf("\n\n\t\t\t\t1.Profile\n");
        printf("\t\t\t\t2.Time schedule\n");
        printf("\t\t\t\t3.Food item\n");
        printf("\t\t\t\t4.Payment\n");
        printf("\t\t\t\t0.Logout \n");

        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {

        case 0:
            User();
            break;
        case 1:
            system("cls");
            hol_profile();
            break;
        case 2:
            system("cls");
            hol_time_sch();
            break;
        case 3:
            system("cls");
            hol_item();
            break;
        case 4:
            system("cls");
            payment();


        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }
    }
}
void hol_profile()
{
    system("cls");
    title();
    printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\t3.Gender:%s\n\t\t\t4.Email:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address:%s\n\t\t\t9.Room number:%s\n",p.name,p.id,p.gender,p.email,p.mobile,p.blood,p.address,p.room_n);

    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        hol();
        break ;
    }
}
void hol_time_sch()
{

    system("cls");
    title();
    printf ("\n\t\t\t\t\t**************************\n");
    printf ("\t\t\t\t\t\tTime schedule\n");
    printf ("\t\t\t\t\t**************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("\t\t\t\t\t1.Break fast time-8.00Am\n");
    printf ("\t\t\t\t\t2.Lunch time-1.00PM\n");
    printf ("\t\t\t\t\t3.Dinner time-8.00PM\n");
    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        hol();
        break ;
    }
}
void hol_item()
{
    system("cls");
    title();
    printf ("\n\t\t\t**************************\n");
    printf ("\t\t\t\tFood Item\n");
    printf ("\t\t\t**************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("1.Break fast time\t-\tParata/Alu Parata with dal\n");
    printf ("2.Lunch time\t\t-\tChicken Biriyani(3days)/Fish with rich(4days)\n");
    printf ("3.Dinner time\t\t-\tVegetable(4days),Kosha Murgi(3days),Dal\n");
    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        hol();
        break ;
    }
}
//88888888888888888888888888888888888888888888888888888888888888 transport (admin) 888888888888888888888888888888888888888888888888888888888888888888
void Tr(void)
{
    system("cls");
    title();
    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Student transport info insert\n");
        printf("\t\t\t\t2.Student transport info display\n");
        printf("\t\t\t\t3.Student transport info search\n");
        printf("\t\t\t\t4.Student transport info delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            tr_insert_record();
            break;
        case 2 :
            system("cls");
            tr_display_record();
            break;
        case 3 :
            system("cls");
            tr_serch_record();

            break;
        case 4:
            system("cls");
            tr_del_record();
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
void tr_insert_record(void)
{
    FILE*tr;
    tr=fopen("transport.txt","a+");
    if(tr==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    tr_display_record();
    printf("\n\t\t\tEnter new transport data :\n");



    printf("\n\t\t1.Enter student name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter student id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter student intake-section :");
    gets(p.intake_section);
    printf("\t\t4.Enter student  subject :");
    gets(p.subject);
    printf("\t\t5.Enter student  mobile :");
    gets(p.mobile);
    printf("\t\t6.Enter student blood group  :");
    gets(p.blood);
    printf("\t\t7.Enter student address :");
    gets(p.address);
    //fflush(stdin);
    printf("\t\t8.Enter student bus name:");
    gets(p.bus_name);
    fprintf(tr,"%s\n",p.name);
    fprintf(tr,"%d\n",p.id);
    fprintf(tr,"%s\n",p.intake_section);
    fprintf(tr,"%s\n",p.subject);
    fprintf(tr,"%s\n",p.mobile);
    fprintf(tr,"%s\n",p.blood);
    fprintf(tr,"%s\n",p.address);
    fprintf(tr,"%s\n",p.bus_name);

    {
        printf("\n\t\t\t****Transport record inserted successfully*****\n");

    }
    fclose(tr);
    printf("\n\t\t\t##Update Record## \n");
    tr_display_record();

}

void tr_display_record(void)
{
    FILE*tr;
    tr=fopen("transport.txt","r");
    if(tr==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\tTransport details are as follows=>\n\n");

    while(!feof(tr))
    {
        fscanf(tr,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake_section,&p.subject,&p.mobile,&p.blood,&p.address,&p.bus_name);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.intake_section,p.subject,p.mobile,p.blood,p.address,p.bus_name);

    }
    fclose(tr);

}
void tr_serch_record(void)
{
    int faid,flag=0;
    FILE*tr;
    tr=fopen("transport.txt","r");
    if(tr==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&faid);
    while(!feof(tr))
    {
        fscanf(tr,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake_section,&p.subject,&p.mobile,&p.blood,&p.address,&p.bus_name);
        if(p.id==faid)
        {
            printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.intake_section,p.subject,p.mobile,p.blood,p.address,p.bus_name);
            flag=1;
            break;
        }





    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(tr);

}
void tr_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*tr,*trd;
    tr=fopen("transport.txt","r");
    if(tr==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    tr_display_record();
    printf("\n\n\t\t!!!!!!Enter the name which you want to delete =>");
    scanf("%s",&name);
    trd=fopen("transport1.txt","a+");
    while(!feof(tr))
    {
        fscanf(tr,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.intake_section,&p.subject,&p.mobile,&p.blood,&p.address,&p.bus_name);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(trd,"%s\n",p.name);
            fprintf(trd,"%d\n",p.id);
            fprintf(trd,"%s\n",p.intake_section);
            fprintf(trd,"%s\n",p.subject);
            fprintf(trd,"%s\n",p.mobile);
            fprintf(trd,"%s\n",p.blood);
            fprintf(trd,"%s\n",p.address);
            fprintf(trd,"%s\n",p.bus_name);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(tr);
    fclose(trd);
    remove("transport.txt");
    rename("transport1.txt","transport.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    tr_display_record();
}
//hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh transport (user) hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
void tra(void)
{
    system("cls");
    title();
    system("COLOR 0B");
    int ch;

    while(ch!=4)
    {
        printf("\n\n\t\t\t\t1.Profile\n");
        printf("\t\t\t\t2.Vehicle information\n");
        printf("\t\t\t\t3.Vehicle maintenance\n");
        printf("\t\t\t\t4.Expense tracking\n");
        printf("\t\t\t\t0.Logout \n");

        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {

        case 0:
            User();
            break;
        case 1:
            system("cls");
            tra_profile();
            break;
        case 2:
            system("cls");
            tra_info();
            break;
        case 3:
            system("cls");
            tra_mainte();
            break;
        case 4:
            system("cls");
            tra_trach();

        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }
    }

}
void tra_login()
{
    system("cls");
    title();
    system("COLOR 0A");
    while(1)
    {
        FILE *tr;
        char name2[50];
        int id2,r,k=0;
        tr=fopen("transport.txt","r");
        if(tr==NULL)
            cout<< "File dose not exist."<<endl;

        else
        {
            cout<<"\n\n\t\t\t\t\t##Please enter your  username and password##";
            cout<< "\n\n\n\t\t\t\tUsername : ";
            cin>>name2;
            // getchar();
            //gets( name2);

            cout<< "\n\t\t\t\tPassword : ";
            cin>>id2;
            while(!feof(tr))
            {
                fscanf(tr,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.intake_section,&p.subject,&p.mobile,&p.blood,&p.address,&p.bus_name);

                r=strcmp(p.name,name2);
                if(r==0 && p.id==id2)
                {

                    loading();
                    tra();
                    //printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\t3.Intake_section:%s\n\t\t\t4.Subject:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address:%s\n\t\t\t9.Bus name:%s\n",p.name,p.id,p.intake_section,p.subject,p.mobile,p.blood,p.address,p.bus_name);

                    k=1;
                    break;
                }
            }
            if(k==0)
                cout<< "\t\t!!!!!Wrong password...please try again!"<<endl;
            else if(k==1)
                break;
            fclose(tr);
        }
    }
}
void tra_profile()
{
    system("cls");
    title();
    printf("\n\t\t\t1.Name:%s\n\t\t\t2.ID:%d\n\t\t\t3.Intake_section:%s\n\t\t\t4.Subject:%s\n\t\t\t5.MObile no:%s\n\t\t\t6.Blood group:%s\n\t\t\t7.Address:%s\n\t\t\t9.Bus name:%s\n",p.name,p.id,p.intake_section,p.subject,p.mobile,p.blood,p.address,p.bus_name);
    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        tra();
        break ;
    }
}
void tra_info()
{
    system("cls");
    title();
    printf ("\n\t\t**********************************\n");
    printf ("\t\t\tVechicle Info\n");
    printf ("\t\t**********************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Bus Name\t\tSeat\t\tlocation\n");
    printf ("BUBT-1\t\t\t50\t\tMirpur Cantonment\tto\tBUBT\t\n");
    printf ("BUBT-2\t\t\t45\t\tMohammadpur\t\tto\tBUBT\n");
    printf ("BUBT-3\t\t\t55\t\tGulshan\t\t\tto\tBUBT\n");
    printf ("BUBT-4\t\t\t45\t\tSavar Union\t\tto\tBUBT\n");
    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        tra();
        break ;
    }
}
void tra_mainte()
{
    system("cls");
    title();
    printf ("\n\t\t**********************************\n");
    printf ("\t\t\tVechile Maintenance\n");
    printf ("\t\t**********************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Mirpur Cantonment\tto\tPallabi\t\tto\tMirpur 12\tto\tBUBT\t\n");
    printf ("Mohammadpur\t\tto\tShyamoli\tto\tGabtoli\t\tto\tBUBT\n");
    printf ("Badda\t\t\tto\tGulshan\t\tto\tMirpur 1\tto\tBUBT\n");
    printf ("Dhamrai\t\t\tto\tSavar Union\tto\tHemayetpur\tto\tBUBT\n");


    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        tra();
        break ;
    }
}
void tra_trach()
{
    system("cls");
    title();
    printf ("\n\t\t**********************************\n");
    printf ("\t\t\tExpense tracking \n");
    printf ("\t\t**********************************\n");
    printf ("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf ("Mirpur Cantonment\tto\tPallabi(10tk)\t\tto\tMirpur 12(20tk)\tto\tBUBT(30tk)\t\n");
    printf ("Mohammadpur\t\tto\tShyamoli(15tk)\t\tto\tGabtoli(20tk)\tto\tBUBT(30tk)\n");
    printf ("Badda\t\t\tto\tGulshan(10tk)\t\tto\tMirpur 1(20tk)\tto\tBUBT(30tk)\n");
    printf ("Dhamrai\t\t\tto\tSavar Union(15tk)\tto\tHemayetpur(30tk) to\tBUBT(40tk)\n");


    int choose;

    printf("\n\t\t\tPress 0 to go back =>");

    scanf("%i",&choose);
    switch(choose)
    {
    case 0:

        tra();
        break ;
    }
}
//999999999999999999999999999999999999999999999999999999999999999999999 club(admin & user) iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii
void Cl(void)
{

    system("cls");

    title();
    system("COLOR 0B");
    int ch;

    while(ch!=6)
    {
        printf("\n\n\t\t\t\t1.BUBT cultural club \n");
        printf("\t\t\t\t2.BUBT Photography club\n");
        printf("\t\t\t\t3.BUBT IT club\n");
        printf("\t\t\t\t4.BUBT Tour club club \n");
        printf("\t\t\t\t5.BUBT social welfare club\n");
        printf("\t\t\t\t6.BASIS -BUBT chapter  club\n");
        printf("\t\t\t\t0.Back\n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {

        case 0:
            User();
            break;
        case 1:
            system("cls");
            cl_cu();
            break;
        case 2:
            system("cls");
            cl_ph();
            break;
        case 3:
            system("cls");
            cl_it();
            break;
        case 4:
            system("cls");
            cl_to();
            break;

        case 5:
            system("cls");
            cl_so();
            break;
        case 6:
            system("cls");
            cl_ba();
            break;

        default :
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }
    }
}


void cl_cu(void)
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer https://www.facebook.com/groups/204784859556007/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        Cl();
        break ;
    }
}
void cl_ph(void)
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer https://www.facebook.com/Bubt.Photography.Club/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        Cl();
        break ;
    }
}
void cl_it(void)
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer https://www.facebook.com/BITCofficial/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        Cl();
        break ;
    }
}
void cl_to(void)
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer https://www.facebook.com/BUBT-TOUR-CLUB-1117523015094252/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        Cl();
        break ;
    }
}
void cl_so(void)
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer https://www.facebook.com/BUBTSWC/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        Cl();
        break ;
    }
}
void cl_ba(void)
{
    system("COLOR 0E");
    system("cls");
    title();
    system("explorer https://www.facebook.com/111233240287159/");
    int choose;

    printf("\n\n\n\n\t\t\t\t*Press 0 to go back =>");

    scanf("%i",&choose);



    switch(choose)
    {
    case 0:

        Cl();
        break ;
    }
}

//101010101010101010101010101010101010101010101010101010101010101010101010 admin panel(admin & user)(password and user name different )jjjjjjjjjjjjjjjjjjjjjjj
void admimssion_login()
{
    system("cls");
    title();
    system("COLOR 0A");
    char username[25],password[25];
    char ch;
    int  i;

    while(1)
    {
        printf("\n\n\t\t\t#Enter admin username and password=>");
        printf("\n\n\n\n\n\t\t\t\tUsername:");
        scanf("%s",username);
        printf("\n\t\t\t\tPassword:");
        i=0;
        while(1)
        {
            ch=getch();
            if(ch==13)
            {
                break;

            }
            else
            {
                password[i]=ch;
                putch('*');
                i++;

            }
        }
        password[i]='\0';
        printf("\n");
        if(strcmp(username,"rifat")==0 && strcmp(password,"mim")==0)
        {
            printf("\n");
            loading();
            break;
        }
        else
        {
            system("COLOR 0C");
            printf("\n\t\t\tPlease enter the valid password=>");

        }

    }
}
void Ad_pa(void)
{

    system("cls");
    title();
    system("COLOR 0B");

    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Student insert\n");
        printf("\t\t\t\t2.Student display\n");
        printf("\t\t\t\t3.Student search\n");
        printf("\t\t\t\t4.Student delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            ad_insert_record();
            break;
        case 2 :
            system("cls");
            ad_display_record();
            break;
        case 3 :
            system("cls");
            ad_serch_record();

            break;
        case 4:
            system("cls");
            ad_del_record();
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
void adm_pa(void)
{

    system("cls");
    title();
    system("COLOR 0B");

    int ch;

    while(ch!=5)
    {
        printf("\n\n\n\t\t\t\t1.Student insert\n");
        printf("\t\t\t\t2.Student display\n");
        printf("\t\t\t\t3.Student search\n");
        printf("\t\t\t\t4.Student delete\n");
        printf("\t\t\t\t5.back \n");
        printf("\n\t\t\t\tEnter your choose => ");
        scanf("%d",&ch);

        switch(ch)
        {


        case 1 :
            system("cls");
            ad_insert_record();
            break;
        case 2 :
            system("cls");
            ad_display_record();
            break;
        case 3 :
            system("cls");
            ad_serch_record();

            break;
        case 4:
            system("cls");
            ad_del_record();
            break;

        case 5:
            User();
        default:
        {
            printf("Wrong choice");
        }
        printf("Pass any key to continue............... ");


        }



    }
}
void ad_insert_record(void)
{
    FILE*ad;
    ad=fopen("admission.txt","a+");
    if(ad==NULL)
    {
        printf("\n\t\t\tError cannot open file \n");
        return;


    }
    printf("\n\t\t\tPrevious data\n ");
    ad_display_record();
    printf("\n\t\t\tEnter new Student data :\n");



    printf("\n\t\t1.Enter Student name :");
    getchar();
    gets(p.name);
    printf("\t\t2.Enter Student id :");
    scanf("\n%d",&p.id);
    fflush(stdin);

    printf("\t\t3.Enter Student  program :");
    gets(p.program);
    printf("\t\t4.Enter Student  email :");
    gets(p.email);
    printf("\t\t5.Enter Student  mobile :");
    gets(p.mobile);
    printf("\t\t6.Enter Student  blood group  :");
    gets(p.blood);
    printf("\t\t7.Enter Student address :");
    gets(p.address);
    //fflush(stdin);
    printf("\t\t8.Enter Student  intake_section :");
    gets(p.intake_section);
    fprintf(ad,"%s\n",p.name);
    fprintf(ad,"%d\n",p.id);
    fprintf(ad,"%s\n",p.program);
    fprintf(ad,"%s\n",p.email);
    fprintf(ad,"%s\n",p.mobile);
    fprintf(ad,"%s\n",p.blood);
    fprintf(ad,"%s\n",p.address);
    fprintf(ad,"%s\n",p.intake_section);

    {
        printf("\n\t\t\t****Admission  record inserted successfully*****\n");

    }
    fclose(ad);
    printf("\n\t\t\t##Update Record## \n");
    ad_display_record();

}

void ad_display_record(void)
{
    FILE*ad;
    ad=fopen("admission.txt","r");
    if(ad==NULL)
    {
        printf("\n\t\t\tNot open");
        return;
    }
    printf("\n\t\t\t\tAdmission details are as follows=>\n\n");

    while(!feof(ad))
    {
        fscanf(ad,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.program,&p.email,&p.mobile,&p.blood,&p.address,&p.intake_section);
        printf("%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.program,p.email,p.mobile,p.blood,p.address,p.intake_section);

    }
    fclose(ad);

}
void ad_serch_record(void)
{
    int adid,flag=0;
    FILE*ad;
    ad=fopen("admission.txt","r");
    if(ad==NULL)
    {
        printf("\n\n\t\t\tNot open\n\n");
        return;
    }
    printf("\n\n\t\t\t\tEnter a id which you want to search :");
    scanf("%d",&adid);
    while(!feof(ad))
    {
        fscanf(ad,"%s %d %s %s %s %s %s %s\n",&p.name,&p.id,&p.program,&p.email,&p.mobile,&p.blood,&p.address,&p.intake_section);
        if(p.id==adid)
        {
            printf("\n\n%s\t%d\t\%s\t%s\t%s\t%s\t%s\t%s\n",p.name,p.id,p.program,p.email,p.mobile,p.blood,p.address,p.intake_section);
            flag=1;
            break;
        }





    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!No such record found!!!!!!!!!\n");
    }



    fclose(ad);

}

void ad_del_record(void)
{
    char name[40];
    unsigned flag=0;
    FILE*ad,*add;
    ad=fopen("admission.txt","r");
    if(ad==NULL)
    {
        printf("\n\n\t\tError :Cannot open the file !!!!!!!!!!!!!!");
        return;
    }
    printf("\n\t\tPrevious stored data*****");
    ad_display_record();
    printf("\n\n\t\t!!!!!!Enter the name number which you want to delete =>");
    scanf("%s",&name);
    add=fopen("admission1.txt","a+");
    while(!feof(ad))
    {
        fscanf(ad,"%s %d %s %s %s %s %s %s",&p.name,&p.id,&p.program,&p.email,&p.mobile,&p.blood,&p.address,&p.intake_section);
        if(strcmp(name,p.name)!=0)
        {

            printf("\n\t\t\t\t#Record Deleted successfully\n");
            fprintf(add,"%s\n",p.name);
            fprintf(add,"%d\n",p.id);
            fprintf(add,"%s\n",p.program);
            fprintf(add,"%s\n",p.email);
            fprintf(add,"%s\n",p.mobile);
            fprintf(add,"%s\n",p.blood);
            fprintf(add,"%s\n",p.address);
            fprintf(add,"%s\n",p.intake_section);

        }
        else
            flag=1;


    }
    if(flag==0)
    {
        printf("\n\n\t\t\t!!!!!!!No such Record found!!!!!!!!");
    }
    fclose(ad);
    fclose(add);
    remove("admission.txt");
    rename("admission1.txt","admission.txt");
    printf("\n\t\t\t\t#Update Record ==>\n");
    ad_display_record();
}
