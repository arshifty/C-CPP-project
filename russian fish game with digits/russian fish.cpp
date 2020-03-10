#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
class player1
{
public:
    int a[20];
    void get_student1();
    void display_student1();
} ;
void player1::get_student1()
{

    int i;
    cout<<"\nCHOOSE DIGITS -> OBEYING GAME RULES \n";
    for(i=1;i<=5;i++)
    {
        cin>>a[i];
    }
}
void player1::display_student1()
{

    int i;
    cout<<endl;
    cout<<"\n\nYOUR SELECTED DIGITS ARE GIVEN BELOW : \n"<<endl;
    cout<<"NO :   SELECTED DIGITS "<<endl;
    cout<<"____   ________________"<<endl;
    for(i=1;i<=5;i++)
    {
        cout<<i<<"          "<<a[i]<<endl;
    }
    cout<<endl;
}

class player2
{
public:
    int b[20];
    void get_student2();
    void display_student2();
} ;
void player2::get_student2()
{
    int i;
    cout<<"\nCHOOSE DIGITS -> OBEYING GAME RULES \n";
     for(i=1;i<=5;i++)
    {
        cin>>b[i];
    }
}
void player2::display_student2()
{
    int i;
    cout<<endl;
    cout<<"\n\nYOUR SELECTED DIGITS ARE GIVEN BELOW : \n"<<endl;
    cout<<"NO :   SELECTED DIGITS "<<endl;
    cout<<"____   ________________"<<endl;
    for(i=1;i<=5;i++)
    {
        cout<<i<<"          "<<b[i]<<endl;
    }
    cout<<endl;
}
class start : public player1 , public player2
{
    public:
        int c[10];
        int sum1=0,sum2=0;
        void play_card();
        void result();


};
void start :: result()
{
    cout<<"\n\nPLAYER ONE SCORE   : "<<sum1;
    cout<<"\n\nPLAYER TWO SCORE   : "<<sum2;
    if(sum1>sum2)
    {
        cout<<"\n\n\nWINNER    -> PLAYER TWO "<<endl;
        cout<<"_________________________________________________________________________________"<<endl;
    }
    if(sum2>sum1)
    {
        cout<<"\n\n\nWINNER    -> PLAYER ONE "<<endl;
         cout<<"_________________________________________________________________________________"<<endl;
    }
     if(sum2==sum1)
    {
        cout<<"\n\n\nSAME RESULT......\n"<<endl;
         cout<<"_________________________________________________________________________________"<<endl;
    }

}
void start :: play_card()
{
    int i,j,o,t,s;
    for(i=1,j=1;i<=5;i++,j++)
    {
        cout<<"\nPLAYER ONE : \n\nPress 1 for show card :   \n";
        cin>>o;
        if(o==1)
        {
            display_student1();
            cout<<"\n  >>>>   PLAY  :"<<j<<" NO. DIGIT     :";
            cin>>t;
            if(a[i] !=t)
            {
                cout<<"\n\nWRONG KEY............."<<endl;
                 break;
            }
            system("cls");
        }
        else
        {
        cout<<"\n\nWRONG KEY............."<<endl;
        break;
        }
        cout<<"\nPLAYER TWO : \n\nPress 1 for show card :   \n";
        cin>>o;
        if(o==1)
        {
            display_student2();
            cout<<"\n  >>>>   PLAY  :"<<j<<" NO. DIGIT     :";
            cin>>s;
            if(b[i] !=s)
            {
                cout<<"\n\nWRONG KEY............."<<endl;
                 break;
            }
            system("cls");
        }
        else
        {
        cout<<"\n\nWRONG KEY............."<<endl;
        break;
        }
        if(t>s)
        {
            sum1 +=1;
        }
        if(s>t)
        {
            sum2 +=1;
        }
    }

}
int main()
{

    player1 s;
    player2 r;
    start z;
    xy :
     system("cls");
    cout<<"               .....*****  RUSSIAN FISH  *****....."<<endl;

    system("color 9E");

    cout<<"\n\n\n>>\nRULES...\n 1 -> PLAYER ONE FIRST CHOOSE DIGITS FROM ' 1 TO 10 ' WILLINGLY.\n 2 -> PLAYER TWO HENCE CHOOSE DIGITS FROM ' 1 TO 10 ' WILLINGLY.\n 3 -> BOTH PLAYER MUST TAKE 5 DIGITS. \n 4 -> DO NOT USE CHARACTER KEY. \n 5 -> THE PLAYER WHO WILL SCORE LESS POINTS WILL BE THE WINNER."<<endl;
    cout<<"\n\n\n\nPRESS ... 1  -> FOR PLAYER ONE ..."<<endl;
    cout<<"PRESS ... 2  -> FOR PLAYER TWO ..."<<endl;
    cout<<"PRESS ... 3  -> FOR PLAYING GAME ..."<<endl;
    cout<<"PRESS ... 4  -> FOR SHOWING RESULT ..."<<endl;
    cout<<"PRESS ... 5  -> FOR TERMINATING THE GAME ..."<<endl;
    char q;
    cin>>q;
    if(q=='1')
    {
        system("cls");
         system("color 3F");
    cout<<"\n\nFEATURE OF PLAYER ONE :\n"<<endl;
    z.get_student1();
    z.display_student1();
     goto xy;
    }
   if(q=='2')
   { system("cls");
         system("color 2F");
    cout<<"\n\nFEATURE OF PLAYER TWO :\n"<<endl;
    z.get_student2();
    z.display_student2();
     goto xy;
    }
    if(q=='3')
    {
        system("color 5E");
      z.play_card();

      goto xy;
    }
    if(q=='4')
    {
        z.result();

    }
    if(q=='5')
    {
       return 0;

    }

}
