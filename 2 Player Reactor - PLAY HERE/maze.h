

void maze(int u)
{
    ALLEGRO_TIMER *timer = NULL;
    timer=al_create_timer(4.0);
    al_install_keyboard();
    ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
    al_register_event_source(event_queue,al_get_keyboard_event_source());
    ALLEGRO_EVENT events;
    al_register_event_source(event_queue,al_get_timer_event_source(timer));
    ALLEGRO_EVENT ev;
    ALLEGRO_BITMAP *img;
    al_start_timer(timer);

    switch(u)
    {

    case 1:


        img=al_load_bitmap("maze-yes1.png");
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


        img=al_load_bitmap("maze-yes2.png");
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

    case 3:


        img=al_load_bitmap("maze-yes3.png");
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


        img=al_load_bitmap("maze-no1.png");
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


        img=al_load_bitmap("maze-no2.png");
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


        img=al_load_bitmap("maze-no3.png");
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


        img=al_load_bitmap("maze-no5.png");
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


        img=al_load_bitmap("maze-no4.png");
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
  al_stop_timer(timer);
}


