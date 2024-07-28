
#include<iostream>
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void name_print();
void emoji();
void DDA_Algorithm();
void mid_circle();
void analog_clock();

int main()
{

    int ch;

    cout<< "\tWelcome to my project\n=======================================";
    cout<< "\nMenu\n1.Name print\n2.Emoji print\n3.DDA Algorithm\n4.Bresenham line drawing algorithm\n";
    cout<< "5.MId point circle algorithm\n6.Clock\n7.Mosque\n0.Exit\n";


    while(true)
    {
        cout << "\nEnter your choice: ";
        cin>> ch;


        switch(ch)
        {

        case 1:
        {

            name_print();



        }
        case 2:
        {

            emoji();
        }
        case 3:
        {

            DDA_Algorithm();
        }
        case 4:
        {


        }
        case 5:
        {
            mid_circle();

        }
        case 6:
        {
analog_clock();


        }
        case 7:
        {


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

void emoji()
{

    int gd= DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(1200, 1200, "Smile Emoji");
    setcolor(RED);
    line(345, 350, 455, 350);
    ellipse(400, 350, 180, 360, 55, 50);
    setfillstyle(2, WHITE);
    floodfill(346, 351, RED);
    setcolor(RED);
    circle(400, 310, 150);
    setfillstyle(1,GREEN);
    floodfill(430, 315, RED);
    setcolor(WHITE);
    circle(350, 260, 30);
    setfillstyle(1,BLUE);
    floodfill(351, 261, WHITE);
    setcolor(BLACK);
    circle(350, 260, 10);
    setfillstyle(1,BLACK);
    floodfill(351, 261, BLACK);
    setcolor(WHITE);
    circle(450, 260, 30);
    setfillstyle(1,BLUE);
    floodfill(450, 260, WHITE);
    setcolor(BLACK);
    circle(450, 260, 10);
    setfillstyle(1,BLACK);
    floodfill(451, 261, BLACK);
    setcolor(WHITE);
    line(400, 310, 420, 330);
    line(400, 310, 380, 330);
    line(380, 330, 420, 330);
    setfillstyle(1,BLUE);
    floodfill(400, 315, WHITE);
    getch();
    closegraph();
}


void DDA_Algorithm()
{
    float x1,x2,y1,y2,step;
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    cout<<("Enter the value x1 & y1:");
    cin >>x1>>y1;
    cout<<("Enter the value x2 & y2:");
    cin >>x2>>y2;
    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    cout << dx <<" " << dy << endl;
    if(dx>dy)
    {
        step=dx;
    }
    else
    {
        step = dy;
    }
    cout << "Step :" << step << endl;
    float xin,yin;
    xin=dx/step;
    yin=dy/step;
    cout << xin <<" " << yin << endl;
    int x=x1;
    int y=y1;
    for(int i=0; i<step; i++)
    {
        putpixel(x,y,GREEN);
        x=x+xin;
        y=y+yin;
        cout << x <<" " << y << endl;
        delay(150);
    }
    getch();
    closegraph();

}


void mid_circle()
{
    int gd=DETECT,gm;

    initwindow(800,700,"Circle Algorithm");

    outtextxy(150,50,"Name: Alamin");

    int x,y,r;
    cout << "Enter the value of x, y & r: ";
    cin >> x >> y >> r;

    int x1=0;
    int y1=r;
    int p0=1-r;
    putpixel(x,y,7);

    while(x1<y1)
    {
        if(p0<0)
        {
            x1=x1+1;
            p0=p0+2*x1+1;
        }
        else
        {
            x1=x1+1;
            y1=y1-1;
            p0=p0+2*x1+1-2*y1;
        }
        cout << "(" << x1  <<"," << y1 <<")"<<endl;
        putpixel(x+x1,y+y1,7);
        putpixel(x+x1,y-y1,7);
        putpixel(x-x1,y+y1,7);
        putpixel(x-x1,y-y1,7);
        putpixel(x+y1,y+x1,7);
        putpixel(x+y1,y-x1,7);
        putpixel(x-y1,y+x1,7);
        putpixel(x-y1,y-x1,7);
        delay(70);

    }

    getch();
    closegraph();

}

void analog_clock()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
initwindow(1200, 1200, "Analog Clock");

    setfillstyle(SOLID_FILL, BLACK);
    floodfill(1, 1, BLACK);

    setcolor(WHITE);
    circle(300, 300, 200);
    circle(300, 300, 202);

    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(300, 300, WHITE);
    setcolor(WHITE);
    for (int i = 0; i < 4; i++) {
        circle(300, 300, 200 + i);
    }

    outtextxy(295, 100, "12");
    outtextxy(390, 130, "1");
    outtextxy(440, 180, "2");
    outtextxy(470, 295, "3");
    outtextxy(440, 410, "4");
    outtextxy(390, 460, "5");
    outtextxy(295, 490, "6");
    outtextxy(200, 460, "7");
    outtextxy(150, 410, "8");
    outtextxy(120, 295, "9");
    outtextxy(150, 180, "10");
    outtextxy(200, 130, "11");

    setcolor(WHITE);
    line(300, 300, 400, 200);

    setcolor(WHITE);
    line(300, 300, 450, 300);

    setcolor(RED);
    line(300, 300, 300, 470);

    getch();
    closegraph();
}


