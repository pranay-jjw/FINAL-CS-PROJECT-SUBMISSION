void displaycolor(int x,int y,int z,char *eq1)
{
    //background to black
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
    al_draw_text(font1,al_map_rgb(x,y,z),700,250,ALLEGRO_ALIGN_RIGHT,eq1);
    al_draw_text(font,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
    al_draw_text(font,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
    al_draw_text(font1,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
    al_draw_text(font1,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);

    al_flip_display();
    al_rest(1.0);
    al_destroy_font(font);
    al_destroy_font(font1);
    return;

}
void color()
{
    al_install_keyboard();
    ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
    al_register_event_source(event_queue,al_get_keyboard_event_source());
    ALLEGRO_EVENT events;
    ALLEGRO_TIMER *timer = NULL;
    timer=al_create_timer(3.0);
    al_register_event_source(event_queue,al_get_timer_event_source(timer));
    ALLEGRO_EVENT ev;
    srand(time(0));
    int x,y,z;  //coordinates for color in rgb
    int cordinate=rand()%6;
    int name=rand()%6;
    char* colour;
    switch(cordinate)
    {
    case 1:
        x=0;
        y=0;
        z=255;
        break;
    case 2:
        x=0;
        y=255;
        z=0;
        break;
    case 3:
        x=255;
        y=0;
        z=0;
        break;
    case 4:
        x=128;
        y=0;
        z=128;
        break;
    case 5:
        x=255;
        y=255;
        z=0;
        break;
    }
    al_start_timer(timer);
    switch(name)
    {
    case 1:
        colour="BLUE";
        displaycolor(x,y,z,colour);
        //user input
        al_wait_for_event(event_queue,&events);
        if(ev.type==ALLEGRO_EVENT_TIMER)
        {
            return;
        }
        if(events.type=ALLEGRO_EVENT_KEY_DOWN)
        {
            switch(events.keyboard.keycode)
            {
            case ALLEGRO_KEY_Y :
                if(cordinate==name)
                   {

                    score1++;
                pi1=convert(score1);
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                   }
                else
                  {

                    score1--;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                  }
                break;
            case ALLEGRO_KEY_P :
                if(cordinate==name)
                   {

                    score2++;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                   }
                else
                   {

                    score2--;
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                   }
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;
    case 2:
        colour="GREEN";
        displaycolor(x,y,z,colour);
        //user input
        al_wait_for_event(event_queue,&events);
        if(ev.type==ALLEGRO_EVENT_TIMER)
        {
            return;
        }
        if(events.type=ALLEGRO_EVENT_KEY_DOWN)
        {
            switch(events.keyboard.keycode)
            {
            case ALLEGRO_KEY_Y :
                if(cordinate==name)
                 {
                    score1++;
                pi1=convert(score1);
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                 }
                else
                    score1--;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                if(cordinate==name)
                  {
                 score2++;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                  }
                else
               {

                 score2--;
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                break;
               }
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;
    case 3:
        colour="RED";
        displaycolor(x,y,z,colour);
        //user input
        al_wait_for_event(event_queue,&events);
        if(ev.type==ALLEGRO_EVENT_TIMER)
        {
            return;
        }
        if(events.type=ALLEGRO_EVENT_KEY_DOWN)
        {
            switch(events.keyboard.keycode)
            {
            case ALLEGRO_KEY_Y :
                if(cordinate==name)
                {

                   score1++;
                pi1=convert(score1);
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                }
                else
                 {

                    score1--;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                 }
                break;
            case ALLEGRO_KEY_P :
                if(cordinate==name)
                 {

                   score2++;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                 }
                else
                  {

                    score2--;
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                  }
                break;
            }

        }
        break;
    case 4:
        colour="PURPLE";
        displaycolor(x,y,z,colour);
        //user input
        al_wait_for_event(event_queue,&events);
        if(ev.type==ALLEGRO_EVENT_TIMER)
        {
            return;
        }
        if(events.type=ALLEGRO_EVENT_KEY_DOWN)
        {
            switch(events.keyboard.keycode)
            {
            case ALLEGRO_KEY_Y :
                if(cordinate==name)
                 {

                    score1++;
                pi1=convert(score1);
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                 }
                else
                  {

                    score1--;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                  }
                break;
            case ALLEGRO_KEY_P :
                if(cordinate==name)
                 {

                   score2++;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                 }
                else
                  {

                    score2--;
                pi1=convert(score1);
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                  }
                break;
            }


        }
        break;
    case 5:
        colour="YELLOW";
        displaycolor(x,y,z,colour);
        //user input
        al_wait_for_event(event_queue,&events);
        if(ev.type==ALLEGRO_EVENT_TIMER)
        {
            return;
        }
        if(events.type=ALLEGRO_EVENT_KEY_DOWN)
        {
            switch(events.keyboard.keycode)
            {
            case ALLEGRO_KEY_Y :
                if(cordinate==name)
                 {

                    score1++;
                pi1=convert(score1);
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                 }
                else
                  {

                    score1--;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                  }
                break;
            case ALLEGRO_KEY_P :
                if(cordinate==name)
                  {

                    score2++;
                pi1=convert(score1);
                pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                  }
                else
                   {

                    score2--;
                pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                   }
                                break;
            }

        }
        break;


    }


}
