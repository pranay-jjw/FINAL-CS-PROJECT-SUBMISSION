

void smiles(int u)
{
    al_install_keyboard();
    ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
    al_register_event_source(event_queue,al_get_keyboard_event_source());
    ALLEGRO_EVENT events;
    ALLEGRO_TIMER *timer = NULL;
    timer=al_create_timer(4.0);
    al_register_event_source(event_queue,al_get_timer_event_source(timer));
    ALLEGRO_EVENT ev;
    al_start_timer(timer);


    ALLEGRO_BITMAP *img;

    switch(u)
    {

    case 1:


        img=al_load_bitmap("sad1.png");
        display_image(img);
        al_wait_for_event(event_queue,&events);
                 if(events.type==ALLEGRO_EVENT_TIMER)
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


        img=al_load_bitmap("sad2.png");
        display_image(img);
        al_wait_for_event(event_queue,&events);
                 if(events.type==ALLEGRO_EVENT_TIMER)
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


        img=al_load_bitmap("sad3.png");
        display_image(img);
        al_wait_for_event(event_queue,&events);
                 if(events.type==ALLEGRO_EVENT_TIMER)
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


        img=al_load_bitmap("happy1.png");
        display_image(img);
        al_wait_for_event(event_queue,&events);
                 if(events.type==ALLEGRO_EVENT_TIMER)
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


        img=al_load_bitmap("happy2.png");
        display_image(img);
        al_wait_for_event(event_queue,&events);
                 if(events.type==ALLEGRO_EVENT_TIMER)
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


        img=al_load_bitmap("happy3.png");
        display_image(img);
        al_wait_for_event(event_queue,&events);
                 if(events.type==ALLEGRO_EVENT_TIMER)
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


        img=al_load_bitmap("happy5.png");
        display_image(img);
        al_wait_for_event(event_queue,&events);
                 if(events.type==ALLEGRO_EVENT_TIMER)
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



