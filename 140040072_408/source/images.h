void display_image(ALLEGRO_BITMAP *z) //display image once the image is passed
{
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
    al_draw_bitmap(z,400,0,ALLEGRO_FLIP_HORIZONTAL);
    al_flip_display();
}

void images(int u)
{
    //user input
    ALLEGRO_TIMER *timer = NULL;
    timer=al_create_timer(3.0);
    al_install_keyboard();
    ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
    al_register_event_source(event_queue,al_get_keyboard_event_source());
    ALLEGRO_EVENT events;
    ALLEGRO_BITMAP *img; //image variable to display image
    al_register_event_source(event_queue,al_get_timer_event_source(timer));
    ALLEGRO_EVENT ev;
    al_start_timer(timer);
    switch(u)
    {

    case 1:

        img=al_load_bitmap("kola1.png");
        display_image(img);
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

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;


    case 2:


        img=al_load_bitmap("dog.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

    case 3:


        img=al_load_bitmap("kola3.png");
        display_image(img);
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

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

    case 4:


        img=al_load_bitmap("dino.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

    case 5:


        img=al_load_bitmap("lion.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

    case 6:


        img=al_load_bitmap("bird.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

    case 7:


        img=al_load_bitmap("cat.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

    case 8:

        img=al_load_bitmap("bear.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

    case 9:

        img=al_load_bitmap("tiger.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

    case 10:

        img=al_load_bitmap("giraffe.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

        case 11:

        img=al_load_bitmap("zebra.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

        case 12:

        img=al_load_bitmap("deer.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;

        case 13:

        img=al_load_bitmap("monkey.png");
        display_image(img);
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
                score1--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        b=al_load_bitmap("smile.png");
                                        a=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2--;
 pi1=convert(score1);
            pi2=convert(score2);
                                        a=al_load_bitmap("smile.png");
                                        b=al_load_bitmap("sad.png");
                                        display_smile(a,b);
                break;
            }

            pi1=convert(score1);
            pi2=convert(score2);
        }
        break;
    }

}
