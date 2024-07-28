#include<iostream>
#include<graphics.h>
using namespace std;
void name_print();
int main()
{

    int ch;

    cout<< "\tWelcome to my project\n\t=======================================";
    cout<< "\nMenu\n1.Name print\n2.Emoji print\n3.DDA Algorithm\n4.Bresenham line drawing algorithm\n";
    cout<< "5.MId point circle algorithm\6.Clock\n7.Programmer\n0.Exit\n";


    while(true)
    {
        cout << "\nEnter your choice: ";
        cin>> ch;


        switch(ch)
        {

        case 1:
        {

            name_print();

            break;

        }
        case 2:
        {


            break;
        }
        case 3:
        {


            break;
        }
        case 4:
        {


            break;
        }
        case 5:
        {


            break;
        }
        case 6:
        {



            break;
        }
        case 7:
        {


            break;
        }
        case 0:
        {
            exit(0);


        }
        default:

            cout<< "Invalid choice. Please try again.\n";

        }


    }


    return 0;
}
void name_print()
{



    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    line(50, 10, 10, 100);
    line(50, 10, 100, 100);
    line(25, 65, 80, 65);
    line(110, 10, 110, 100);
    line(110, 100,170, 100);
    line(230, 10, 180, 100);
    line(230,10, 280, 100);
    line(200, 65,260, 65);
    line(290, 10, 290, 100);
    line(290, 10, 340, 50);
    line(390, 10, 340, 50);
    line(390, 10,390,100);
    line(400, 10,450, 10);
    line(425,10, 425, 100);
    line(400, 100, 450, 100);
    line(460, 10, 460, 100);
    line(460, 10, 560,100);
    line(560, 10, 560, 100);


    getch();
    closegraph();



}
