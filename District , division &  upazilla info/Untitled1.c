#include<stdio.h>
int main()
{
system("color 2F");
int n;

printf("\t\tWELCOME\tTO THE \tUNIVERSITY OF BARISAL\n\n");

printf("\t\t\t  I AM ASHIF RAHMAN\n\n");

printf("PROGRAM TOPIC = THE DIVISION  DISTRICT  AND  UPAZILA   OF BANGLADESH.\n\n\n\n");
print:
printf("\n\nDIVISIONS ARE GIVEN BELOW :\n\n\n");
printf("1=DHAKA.\n2=KHULNA.\n3=RAJSHAHI.\n4=SYLHET.\n5=BARISAL .\n6=CHITTAGONG.\n7=RANGPUR.\n\n\n\n");
printf("Enter the division number which are given and see the districts and their upazila of your desire   division=\n\n");



while(scanf("%d",&n) !=EOF)
{


    if(n==1)
    {

      FILE *f1;
      char c;
      f1=fopen("DHAKA.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

       int a;
       printf("\n >>IF YOU WANT TO SEE THE DISTRICT AND THEIR UPAZILZ PRESS :1\n\n >> OR PRESS :2 FOR SEEING ANOTHER DIVISION \n\n >>PRESS0 :3 FOR TERMINATE \nENTER YOUR EXPECTATION :`");
      scanf("%d",&a);
      if(a==1)
      {
          int x;
          printf("\nWHICH DISTRICT'S UPAZILA DO YOU WNANT TO SEE\n1  Dhaka  \n2  Faridpur\n3  Gazipur  \n4  Gopalganj\n5  Madaripur\n6  Manikganj\n7  Munshiganj\n8  Narayanganj\n9  Norshingdi \n10 Rajbari  \n11 Shariatpur\n12 Jamalpur\n13 Kishoreganj \n14 Mymensingh\n15 Netrokona\n16 Sherpur\n17 Tangail \n");
          scanf("%d",&x);
          if(x==1)
          {
             FILE *f1;
      char c;
      f1=fopen("haka.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

           }
          else if(x==2)
           {
              FILE *f1;
      char c;
      f1=fopen("Faridpur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==3)
           {
               FILE *f1;
      char c;
      f1=fopen("Gazipur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==4)
           {
               FILE *f1;
      char c;
      f1=fopen("Gopalganj.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
             else if(x==5)
            {
               FILE *f1;
      char c;
      f1=fopen("Madaripur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
           else if(x==6)
            {
                FILE *f1;
      char c;
      f1=fopen("Manikganj.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
             else if(x==7)
             {
                 FILE *f1;
      char c;
      f1=fopen("Munshiganj.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
             }
              else if(x==8)
              {
                  FILE *f1;
      char c;
      f1=fopen("Narayanganj.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }

              else if(x==9)
              {
                  FILE *f1;
      char c;
      f1=fopen("Norshingdi.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==10)
              {
                  FILE *f1;
      char c;
      f1=fopen("Rajbari.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==11)
              {
                  FILE *f1;
      char c;
      f1=fopen("Shariatpur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==12)
              {
                  FILE *f1;
      char c;
      f1=fopen("Jamalpur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==13)
              {
                  FILE *f1;
      char c;
      f1=fopen("Kishoreganj.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==14)
              {
                  FILE *f1;
      char c;
      f1=fopen("Mymensingh.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
             else if(x==15)
              {
                  FILE *f1;
      char c;
      f1=fopen("Netrokona.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==16)
              {
                  FILE *f1;
      char c;
      f1=fopen("Sherpur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==17)
              {
                  FILE *f1;
      char c;
      f1=fopen("Tangail.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else
              {
                  printf("WRONG KEY");
              }



        }
        else if(a==2)
        {
            goto print;
        }
        else if(a==3)
        {
            return 0;
        }

    }
    else if(n==2)
    {
        FILE *f1;
      char c;
      f1=fopen("KHULNA.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

       int a;
       printf("\n >>IF YOU WANT TO SEE THE DISTRICT AND THEIR UPAZILZ PRESS :1\n\n >> OR PRESS :2 FOR SEEING ANOTHER DIVISION \n\n >>PRESS0 :3 FOR TERMINATE \nENTER YOUR EXPECTATION :`");
      scanf("%d",&a);
      if(a==1)
      {
          int x;
          printf("\nWHICH DISTRICT'S UPAZILA DO YOU WNANT TO SEE \n1  Bagerhat\n2  Chuadanga\n3  Jessore\n4  Jhenaidah\n5  Khulna\n6  Kushtia\n7  Magura\n8  Meherpur\n9  Narail\n10  Satkhira\n");

          scanf("%d",&x);
          if(x==1)
          {
             FILE *f1;
      char c;
      f1=fopen("Bagerhat.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

           }
           else if(x==2)
           {
              FILE *f1;
      char c;
      f1=fopen("Chuadanga.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==3)
           {
               FILE *f1;
      char c;
      f1=fopen("Jessore.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==4)
           {
               FILE *f1;
      char c;
      f1=fopen("Jhenaidah.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
             else if(x==5)
            {
               FILE *f1;
      char c;
      f1=fopen("hulna.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
           else if(x==6)
            {
                FILE *f1;
      char c;
      f1=fopen("Kushtia.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
             else if(x==7)
             {
                 FILE *f1;
      char c;
      f1=fopen("Magura.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
             }
              else if(x==8)
              {
                  FILE *f1;
      char c;
      f1=fopen("Meherpur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }

              else if(x==9)
              {
                  FILE *f1;
      char c;
      f1=fopen("Narail.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==10)
              {
                  FILE *f1;
      char c;
      f1=fopen("Satkhira.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else
              {
                  printf("WRONG KEY");
              }
    }
    else if(a==2)
        {
            goto print;
        }
        else if(a==3)
        {
            return 0;
        }


    }
    else if(n==3)
    {
      FILE *f1;
      char c;
      f1=fopen("RAJSHAHI.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

       int a;
       printf("\n >>IF YOU WANT TO SEE THE DISTRICT AND THEIR UPAZILZ PRESS :1\n\n >> OR PRESS :2 FOR SEEING ANOTHER DIVISION \n\n >>PRESS0 :3 FOR TERMINATE \nENTER YOUR EXPECTATION :`");
      scanf("%d",&a);
      if(a==1)
      {
          int x;
          printf("\nWHICH DISTRICT'S UPAZILA DO YOU WNANT TO SEE \n1  Bogra\n2  Chapai Nawabganj\n3  Joypurhat\n4  Naogaon\n5  Natore\n6  Pabna\n7  Rajshahi\n8  Sirajganj\n\n");

          scanf("%d",&x);
          if(x==1)
          {
             FILE *f1;
      char c;
      f1=fopen("Bogra.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

           }
           else if(x==2)
           {
              FILE *f1;
      char c;
      f1=fopen("Chapai Nawabganj.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==3)
           {
               FILE *f1;
      char c;
      f1=fopen("Joypurhat.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==4)
           {
               FILE *f1;
      char c;
      f1=fopen("Naogaon.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
             else if(x==5)
            {
               FILE *f1;
      char c;
      f1=fopen("Natore.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
           else if(x==6)
            {
                FILE *f1;
      char c;
      f1=fopen("Pabna.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
             else if(x==7)
             {
                 FILE *f1;
      char c;
      f1=fopen("ajshahi.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
             }
              else if(x==8)
              {
                  FILE *f1;
      char c;
      f1=fopen("Sirajganj.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else
              {
                  printf("WRONG KEY");
              }
    }
    else if(a==2)
        {
            goto print;
        }
        else if(a==3)
        {
            return 0;
        }

    }
    else if(n==4)
    {
        FILE *f1;
      char c;
      f1=fopen("SYLHET.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

       int a;
       printf("\n >>IF YOU WANT TO SEE THE DISTRICT AND THEIR UPAZILZ PRESS :1\n\n >> OR PRESS :2 FOR SEEING ANOTHER DIVISION \n\n >>PRESS0 :3 FOR TERMINATE \nENTER YOUR EXPECTATION :`");
      scanf("%d",&a);
      if(a==1)
      {
          int x;
          printf("\nWHICH DISTRICT'S UPAZILA DO YOU WNANT TO SEE \n1  Habiganj\n2  Moulvibazar\n3  Sunamganj\n4  Sylhet\n\n");

          scanf("%d",&x);
          if(x==1)
          {
             FILE *f1;
      char c;
      f1=fopen("Habiganj.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

           }
           else if(x==2)
           {
              FILE *f1;
      char c;
      f1=fopen("Moulvibazar.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==3)
           {
               FILE *f1;
      char c;
      f1=fopen("Sunamganj.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==4)
           {
               FILE *f1;
      char c;
      f1=fopen("ylhet.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }

              else
              {
                  printf("WRONG KEY");
              }
    }
    else if(a==2)
        {
            goto print;
        }
        else if(a==3)
        {
            return 0;
        }


    }
    else if(n==5)
    {
        FILE *f1;
      char c;
      f1=fopen("BARISAL.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

       int a;
       printf("\n >>IF YOU WANT TO SEE THE DISTRICT AND THEIR UPAZILZ PRESS :1\n\n >> OR PRESS :2 FOR SEEING ANOTHER DIVISION \n\n >>PRESS0 :3 FOR TERMINATE \nENTER YOUR EXPECTATION :`");
      scanf("%d",&a);
      if(a==1)
      {
          int x;
          printf("\nWHICH DISTRICT'S UPAZILA DO YOU WNANT TO SEE \n1  Barguna\n2  Barisal\n3  Bhola\n4  Jhalokathi\n5  Patuakhali\n6  Perojpur\n\n");

          scanf("%d",&x);
          if(x==1)
          {
             FILE *f1;
      char c;
      f1=fopen("Barguna.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

           }
           else if(x==2)
           {
              FILE *f1;
      char c;
      f1=fopen("arisal.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==3)
           {
               FILE *f1;
      char c;
      f1=fopen("Bhola.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==4)
           {
               FILE *f1;
      char c;
      f1=fopen("Jhalokathi.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
             else if(x==5)
            {
               FILE *f1;
      char c;
      f1=fopen("Patuakhali.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
           else if(x==6)
            {
                FILE *f1;
      char c;
      f1=fopen("Perojpur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }

              else
              {
                  printf("WRONG KEY");
              }
    }
    else if(a==2)
        {
            goto print;
        }
        else if(a==3)
        {
            return 0;
        }


    }
    else if(n==6)
    {
        FILE *f1;
      char c;
      f1=fopen("CHITTAGONG.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

       int a;
       printf("\n >>IF YOU WANT TO SEE THE DISTRICT AND THEIR UPAZILZ PRESS :1\n\n >> OR PRESS :2 FOR SEEING ANOTHER DIVISION \n\n >>PRESS0 :3 FOR TERMINATE \nENTER YOUR EXPECTATION :`");
      scanf("%d",&a);
      if(a==1)
      {
          int x;
          printf("\nWHICH DISTRICT'S UPAZILA DO YOU WNANT TO SEE \n1  Bandarban\n2  Brahmanbaria\n3  Chandpur\n4  Chittagong\n5  Comilla\n6  Cox's Bazar\n7  Feni\n8  Khagrachari\n9  Laksmipur\n10  Noakhali\n11  Rangamati\n\n");

          scanf("%d",&x);
          if(x==1)
          {
             FILE *f1;
      char c;
      f1=fopen("Bandarban.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

           }
           else if(x==2)
           {
              FILE *f1;
      char c;
      f1=fopen("Brahmanbaria.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==3)
           {
               FILE *f1;
      char c;
      f1=fopen("Chandpur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==4)
           {
               FILE *f1;
      char c;
      f1=fopen("hittagong.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
             else if(x==5)
            {
               FILE *f1;
      char c;
      f1=fopen("Comilla.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
           else if(x==6)
            {
                FILE *f1;
      char c;
      f1=fopen("Cox's Bazar.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
             else if(x==7)
             {
                 FILE *f1;
      char c;
      f1=fopen("Feni.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
             }
              else if(x==8)
              {
                  FILE *f1;
      char c;
      f1=fopen("Khagrachari.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }

              else if(x==9)
              {
                  FILE *f1;
      char c;
      f1=fopen("Laksmipur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==10)
              {
                  FILE *f1;
      char c;
      f1=fopen("Noakhali.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else if(x==11)
              {
                  FILE *f1;
      char c;
      f1=fopen("Rangamati.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }
              else
              {
                  printf("WRONG KEY");
              }
    }
    else if(a==2)
        {
            goto print;
        }
        else if(a==3)
        {
            return 0;
        }


    }
    else if(n==7)
    {
        FILE *f1;
      char c;
      f1=fopen("RANGPUR.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

       int a;
       printf("\n >>IF YOU WANT TO SEE THE DISTRICT AND THEIR UPAZILZ PRESS :1\n\n >> OR PRESS :2 FOR SEEING ANOTHER DIVISION \n\n >>PRESS0 :3 FOR TERMINATE \nENTER YOUR EXPECTATION :`");
      scanf("%d",&a);
      if(a==1)
      {
          int x;
          printf("\nWHICH DISTRICT'S UPAZILA DO YOU WNANT TO SEE \n1  Dinajpur\n2  Gaibandha\n3  Kurigram\n4  Lalmonirhat\n5  Nilphamari\n6  Panchagarh\n7  Rangpur\n8  Thakurgaon\n\n");

          scanf("%d",&x);
          if(x==1)
          {
             FILE *f1;
      char c;
      f1=fopen("Dinajpur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);

           }
           else if(x==2)
           {
              FILE *f1;
      char c;
      f1=fopen("Gaibandha.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==3)
           {
               FILE *f1;
      char c;
      f1=fopen("Kurigram.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
           else if(x==4)
           {
               FILE *f1;
      char c;
      f1=fopen("Lalmonirhat.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
           }
             else if(x==5)
            {
               FILE *f1;
      char c;
      f1=fopen("Nilphamari.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
           else if(x==6)
            {
                FILE *f1;
      char c;
      f1=fopen("Panchagarh.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
            }
             else if(x==7)
             {
                 FILE *f1;
      char c;
      f1=fopen("angpur.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
             }
              else if(x==8)
              {
                  FILE *f1;
      char c;
      f1=fopen("Thakurgaon.txt","r");
      while((c=getc(f1)) !=EOF)
      {
          printf("%c",c);
      }
      fclose(f1);
              }


              else
              {
                  printf("WRONG KEY");
              }
    }
    else if(a==2)
        {
            goto print;
        }
        else if(a==3)
        {
            return 0;
        }

   }
    else
        printf(">>  YOU PRESSED WRONG KEY   <<");
        printf("\n\nPRESS ( CTRL + Z THEN PRESS ENTER ) TO TERMINATE THE PROGRAM");
}
return 0;
}




