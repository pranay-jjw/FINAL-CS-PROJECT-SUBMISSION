#include<allegro5/allegro.h>
#include<allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>
#include<allegro5/allegro_ttf.h>
#include<allegro5/allegro_font.h>
#include<allegro5\allegro_image.h>
#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<cstdio>


using namespace std;
char* pi1;
char* pi2;
char* p1;
char* p2;
char player1[20],player2[20];
int score1=0, score2 = 0;
double mathexp;
int c,x,y;
char hit;
ALLEGRO_BITMAP *a;
ALLEGRO_BITMAP *b;
#include"display_screen.h"
#include"dis_smile.h"
#include "convert.h"
#include "eqqq.h"
#include"country.h"
#include "display.h"
#include "whitescreen.h"
#include"color.h"
#include"images.h"
#include"maze.h"
#include"smiles.h"
#include"display_alphabet.h"
#include"alphabet.h"
void aftergame(char*eq1=" ",char*eq2=" ",char* eq3=" ")
{

    al_clear_to_color(al_map_rgb(0,0,0)); //set background to black

    al_init_font_addon();
    al_init_ttf_addon();
    al_init_primitives_addon();

    ALLEGRO_COLOR electricblue = al_map_rgb(44,100,255);

    al_draw_line(400,0,400,700,electricblue,3.0);
    al_draw_line(900,0,900,700,electricblue,3.0);

    ALLEGRO_FONT *font= al_load_font("gomarice_rockin_record.ttf",60,NULL);

    al_draw_text(font,al_map_rgb(44,255,0),200,100,ALLEGRO_ALIGN_CENTRE,p1);
    al_draw_text(font,al_map_rgb(44,255,0),1100,100,ALLEGRO_ALIGN_CENTRE,p2);

    ALLEGRO_FONT *font1= al_load_font("A little sunshine.ttf",72,NULL);

    al_draw_text(font1,al_map_rgb(255,102,102),785,250,ALLEGRO_ALIGN_RIGHT,eq1);
    al_draw_text(font1,al_map_rgb(255,102,102),825,350,ALLEGRO_ALIGN_RIGHT,eq2);
    al_draw_text(font1,al_map_rgb(255,102,102),850,450,ALLEGRO_ALIGN_RIGHT,eq3);
    al_draw_text(font,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
    al_draw_text(font,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
    al_draw_text(font,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
    al_draw_text(font,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);

    al_flip_display();
    al_rest(2.0);
    return;

}


int main()
{

    char player1[20],player2[20];
    cout<<"type Player 1 name \n";
    gets(player1);
    cout<<" type Player 2 name \n";
    gets(player2);
    p1= player1;
    p2= player2;

    ALLEGRO_DISPLAY *display; //create display screen

    al_init();
    al_init_font_addon();
    al_init_ttf_addon();
    al_init_image_addon();
    al_install_mouse();
    al_install_keyboard();
    ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
    ALLEGRO_EVENT_QUEUE *event_queue1=al_create_event_queue();
    al_register_event_source(event_queue,al_get_mouse_event_source());
    ALLEGRO_EVENT events;
    ALLEGRO_EVENT events1;
    al_register_event_source(event_queue1,al_get_keyboard_event_source());

    //1st screen
    ALLEGRO_BITMAP *background = al_load_bitmap("ba.png"); //image variable
    display = al_create_display(1300,700);
    //intialize font variable
    ALLEGRO_FONT *font= al_load_font("RiseInside-Regular.ttf",200,NULL);

    al_clear_to_color(al_map_rgb(0,0,0));
    //to draw line
    al_init_primitives_addon();
    ALLEGRO_COLOR electricblue = al_map_rgb(44,100,255);
    al_draw_bitmap(background,0,0,ALLEGRO_FLIP_HORIZONTAL);
    al_draw_text(font,al_map_rgb(250,0,0),650,20,ALLEGRO_ALIGN_CENTRE,"2 Player");
    al_draw_text(font,al_map_rgb(250,0,0),650,500,ALLEGRO_ALIGN_CENTRE,"Reactor");
    al_flip_display();
    al_rest(1.0);
X:
    //2nd screen
    al_clear_to_color(al_map_rgb(0,0,0));

    ALLEGRO_FONT *fontp= al_load_font("RiseInside-Regular.ttf",175,NULL);
    al_draw_text(fontp,al_map_rgb(44,255,0),650,50,ALLEGRO_ALIGN_CENTRE,"PLAY");

    ALLEGRO_FONT *fonti= al_load_font("RiseInside-Regular.ttf",100,NULL);
    al_draw_text(fonti,al_map_rgb(44,255,0),650,325,ALLEGRO_ALIGN_CENTRE,"Instructions");
    al_draw_text(fonti,al_map_rgb(44,255,0),650,550,ALLEGRO_ALIGN_CENTRE,"About the developer");

    al_flip_display();


    al_wait_for_event(event_queue,&events);


    while (events.type!=ALLEGRO_EVENT_MOUSE_BUTTON_UP)
    {
        al_wait_for_event(event_queue,&events);
        x=events.mouse.x;
        y=events.mouse.y;
    }
    if (y>325 && y<=550)
    {
        al_clear_to_color(al_map_rgb(0,0,0));
        ALLEGRO_FONT *fontx= al_load_font("RiseInside-Regular.ttf",36,NULL);
        al_draw_text(fonti,al_map_rgb(255,51,51),650,22,ALLEGRO_ALIGN_CENTRE,"INSTRUCTION");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,125,ALLEGRO_ALIGN_LEFT,"1. 2 player reactor is a multiplayer game ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,175,ALLEGRO_ALIGN_LEFT,"2. Each player will be assigned a key ");
        al_draw_text(fontx,al_map_rgb(102,178,255),145,225,ALLEGRO_ALIGN_LEFT,"Player 1: Y ");
        al_draw_text(fontx,al_map_rgb(102,178,255),145,275,ALLEGRO_ALIGN_LEFT,"Player 2: P ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,325,ALLEGRO_ALIGN_LEFT,"3. Hit the key if you spot the right answer ! ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,375,ALLEGRO_ALIGN_LEFT,"4. Score increases by one for every correct input  ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,425,ALLEGRO_ALIGN_LEFT,"5. Score decreases by one for every wrong input  ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,475,ALLEGRO_ALIGN_LEFT,"6. Enter your input faster than your opponent ");
        al_draw_text(fontx,al_map_rgb(102,178,255),145,525,ALLEGRO_ALIGN_LEFT,"to make it count ! ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,575,ALLEGRO_ALIGN_LEFT,"7. Ultimate rule is to play fair ! ");
        al_draw_text(fontx,al_map_rgb(102,178,255),970,600,ALLEGRO_ALIGN_LEFT,"Press any key ");
        al_draw_text(fontx,al_map_rgb(102,178,255),1000,650,ALLEGRO_ALIGN_LEFT,"To Exit ");
        al_flip_display();
        al_wait_for_event(event_queue1,&events1);
        if(events1.type=ALLEGRO_EVENT_KEY_DOWN)
        {
            goto X;
        }
    }
    else if (y>550 && y<=700)
    {
        al_clear_to_color(al_map_rgb(0,0,0));
        ALLEGRO_FONT *fontx= al_load_font("RiseInside-Regular.ttf",36,NULL);
        al_draw_text(fonti,al_map_rgb(255,51,51),650,22,ALLEGRO_ALIGN_CENTRE,"ABOUT THE DEVELOPER");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,125,ALLEGRO_ALIGN_LEFT,"Fantastic four from Civil department IIT Bombay ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,200,ALLEGRO_ALIGN_LEFT,"Piyush Jain (140040029)");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,250,ALLEGRO_ALIGN_LEFT,"Heet Shah (140040002) ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,300,ALLEGRO_ALIGN_LEFT,"Pranay Jhunjhunwala (140040072) ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,350,ALLEGRO_ALIGN_LEFT,"Harsh Ranjan (140040022)");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,425,ALLEGRO_ALIGN_LEFT,"under the guidance of Prakhar Gupta ");
        al_draw_text(fontx,al_map_rgb(102,178,255),100,475,ALLEGRO_ALIGN_LEFT,"and  Prof. Kavi Arya ! ");
        al_draw_text(fontx,al_map_rgb(102,178,255),970,600,ALLEGRO_ALIGN_LEFT,"Press any key ");
        al_draw_text(fontx,al_map_rgb(102,178,255),1000,650,ALLEGRO_ALIGN_LEFT,"To Exit ");
        al_flip_display();
        al_wait_for_event(event_queue1,&events1);
        if(events1.type=ALLEGRO_EVENT_KEY_DOWN)
        {
            goto X;
        }

    }
    else if (y>0 && y<=325)
    {


        pi1=convert(score1);
        pi2=convert(score2);
        srand(time(0));


        //game challenge1

        aftergame("challenge 1: ","hit when color ","matches the word");

        for(int i=0; i<10; i++)
        {
            color();
            al_clear_to_color(al_map_rgb(0,0,0));
            al_flip_display();
            al_rest(0.3);
        }

        //challenge 2
        aftergame("challenge 2: " ,"hit when equation","is correct");

        for(int i=0; i<6; i++)
        {
            c=rand()%16 + 1;
            equations(c);
            al_clear_to_color(al_map_rgb(0,0,0));
            al_flip_display();
            al_rest(0.3);
        }

        //challenge 3
        aftergame("challenge 3: ","hit when the","capital is correct");

        for(int i=0; i<6; i++)
        {
            countrycapitals();
            al_clear_to_color(al_map_rgb(0,0,0));
            al_flip_display();
            al_rest(0.3);
        }

        //challenge 4
        aftergame("challenge 4:","hit when the ","screen is white" );

        for(int i=0; i<6; i++)
        {
            whitescreen();
        }


        aftergame("challenge 5:","hit when the ","animal is koala " );

        for(int i=0; i<6; i++)
        {
            c=rand()%13 + 1;
            images(c);
            al_clear_to_color(al_map_rgb(0,0,0));
            al_flip_display();
            al_rest(0.3);
        }

        //challenge 6
        aftergame("challenge 6:","hit when the ultraton ","can reach the monster");
        for(int i=0; i<6; i++)
        {
            c=rand()%7 + 1;
            maze(c);
            al_clear_to_color(al_map_rgb(0,0,0));
            al_flip_display();
            al_rest(0.3);
        }

        //challenge 7
        aftergame("challenge 7:","hit when you find ","a sad smiley");
        for(int i=0; i<6; i++)
        {
            c=rand()%7 + 1;
            smiles(c);
            al_clear_to_color(al_map_rgb(0,0,0));
            al_flip_display();
            al_rest(0.3);
        }

        //challenge 8
        aftergame("challenge 8:","hit when alphabet","is in correct order");
        for(int i=0; i<8; i++)
        {
            c=rand()%9 + 1;
            alphabet(c);
            al_clear_to_color(al_map_rgb(0,0,0));
            al_flip_display();
            al_rest(0.3);
        }
        al_clear_to_color(al_map_rgb(0,0,0));
        al_init_font_addon();
        al_init_ttf_addon();
        ALLEGRO_FONT *fonte= al_load_font("RiseInside-Regular.ttf",150,NULL);
        if(score1>score2)
        {
            al_draw_text(fonte,al_map_rgb(255,0,0),650,200,ALLEGRO_ALIGN_CENTRE,p1);
            al_draw_text(fonte,al_map_rgb(255,0,0),650,400,ALLEGRO_ALIGN_CENTRE,"wins");
            al_flip_display();
            al_rest(2.0);
        }
        else if(score2>score1)
        {
            al_draw_text(fonte,al_map_rgb(255,0,0),650,100,ALLEGRO_ALIGN_CENTRE,p2);
            al_draw_text(fonte,al_map_rgb(255,0,0),650,500,ALLEGRO_ALIGN_CENTRE,"wins");
            al_flip_display();
            al_rest(2.0);
        }
        else
        {
            al_draw_text(fonte,al_map_rgb(255,0,0),650,200,ALLEGRO_ALIGN_CENTRE,"Match draws");
            al_flip_display();
            al_rest(2.0);
        }
        //destroying dyanmic font and display variables
        al_destroy_font(fonte);
        al_destroy_font(fontp);
        al_destroy_font(fonti);
        al_destroy_font(font);
        al_destroy_bitmap(background);
        al_destroy_display(display);



    }
    return 0;
}



