#include<iostream>
#include<string.h>
using namespace std;
class student
{
public:
    int roll;
    int mark;
    char name[100];
    char sub[100];
    int sum;
    int n;
};
class temp
{
public:
    int roll;
    int mark;
    char name[100];
    char sub[100];
    int sum;
    int n;
};
int main()
{
///    system("color 2B");
    student s[20];
    temp t;
    int roll;
    int mark;
    int sum;
    char name[100];
    char sub[100];
    int i,j,k,n;
    int q,w;
    cout<<"How many students ????  :";
    cin>>q;
    cout<<"enter subject amount ???? : ";
    cin>>w;
    for(i=0;i<q;i++)
    {
        cout<<"name :";
        cin>>s[i].name;
        cout <<"roll :";
        cin>>s[i].roll;
        cout<<"ENTER SUBJECT AND MARK :"<<endl;
       sum=0;
        for(j=0;j<w;j++)
   {
        cin>>s[j].sub;
         cin>>s[j].mark;
      sum+=s[j].mark;
   }
   s[i].n=sum;

}
    for(i=0;i<q;i++)
    {

          cout<<"\nNAME : "<<s[i].name;
         cout<<"\nROLL : "<<s[i].roll<<endl;
         cout<<"total marks :"<<s[i].n<<endl<<endl;
    }
    for(i=0;i<q;i++)
    {
        for(j=i+1;j<q;j++)
        {
            if(s[i].n<s[j].n)
            {
                strcpy(t.name,s[i].name);
                t.roll=s[i].roll;
                t.n=s[i].n;

                strcpy(s[i].name,s[j].name);
                s[i].roll= s[j].roll;
                s[i].n=s[j].n;

                strcpy(s[j].name,t.name);
                s[j].roll=t.roll;
                s[j].n= t.n;



            }
        }
    }
cout<<"The Results Of The Students Are Listed From >> HIGHEST TO LOWEST << is given below  :"<<endl<<endl<<endl;
    for(i=0;i<q;i++)
    {

          cout<<"\nNAME : "<<s[i].name;
         cout<<"\nROLL : "<<s[i].roll<<endl;
         cout<<"total marks :"<<s[i].n<<endl<<endl;
    }
    cout<<"\n\nIF YOU WANT TO KNOW ABOUT STUDENTS EXAM DATA \n press >>\n   1->> FOR SEARCH BOX.\n    2->>FOR EXIT."<<endl;
    int y;
    cout<<"press :";
    cin>>y;
    if(y==1)
    {
        int o;
        cout<<"Enter roll number :";
        cin>>o;
        for(i=0;i<q;i++)
        {
            if(s[i].roll==o)
            {
                cout<<"\nNAME : "<<s[i].name;
         cout<<"\nROLL : "<<s[i].roll<<endl;
         cout<<"total marks :"<<s[i].n<<endl<<endl;
         break;
            }
        }
    }
    else if(y==2)
    {
        return 0;
    }
    else
        cout<<"......WRONG KEY......"<<endl<<endl;
    return 0;


}
