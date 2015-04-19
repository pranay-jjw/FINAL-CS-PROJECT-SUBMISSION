#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
    void whitescreen()
        {

          ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
             ALLEGRO_TIMER *timer = NULL;
            timer=al_create_timer(3.0); //timer event after 3 seconds
            al_register_event_source(event_queue,al_get_timer_event_source(timer));
            srand(time(0));
               //random time for white screen to appear
                int p =rand()%5;

            al_clear_to_color(al_map_rgb(0,0,0));
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
                al_draw_text(font,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
                al_draw_text(font,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
                al_draw_text(font,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
                al_draw_text(font,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);

 /*al_install_keyboard();
ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
al_register_event_source(event_queue,al_get_keyboard_event_source());
          ALLEGRO_EVENT events;
al_wait_for_event(event_queue,&events);
         {
           switch(events.keyboard.keycode)
            {
                case ALLEGRO_KEY_Y :
                  score1--;
                   break;
                case ALLEGRO_KEY_P :
                  score2--;
                   break;
            }

          pi1=convert(score1);
          pi2=convert(score2);
         }*/

            al_flip_display();
            al_rest(p); //screen restiing for a random time obtained
            al_start_timer(timer);
            al_draw_filled_rectangle(400,0,900,700,al_map_rgb(255,255,255));
            al_flip_display();

          //taking input from user
            al_install_keyboard();
            al_register_event_source(event_queue,al_get_keyboard_event_source());
                ALLEGRO_EVENT events;
                ALLEGRO_EVENT ev;
                             if(ev.type==ALLEGRO_EVENT_TIMER)
         {
             return;
         }
            al_wait_for_event(event_queue,&events);
                    if(events.type=ALLEGRO_EVENT_KEY_DOWN)
                        {
                            switch(events.keyboard.keycode)
                                {
                                    case ALLEGRO_KEY_Y :
                                        score1++;
                                         pi1=convert(score1);
                                         pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                                        break;
                                    case ALLEGRO_KEY_P :
                                        score2++;
                                         pi1=convert(score1);
                                         pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                                        break;
                                }


                        }
         al_rest(1.0);

         al_destroy_font(font);
         al_destroy_font(font1);
        }
