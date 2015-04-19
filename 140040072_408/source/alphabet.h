
void alphabet(int p)
{
    ALLEGRO_TIMER *timer = NULL;
    timer=al_create_timer(4.0);//a timer event which occurs every 4sec
    al_install_keyboard();
    ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
    al_register_event_source(event_queue,al_get_keyboard_event_source());
    ALLEGRO_EVENT events;
    al_register_event_source(event_queue,al_get_timer_event_source(timer));
    ALLEGRO_EVENT ev;
    al_start_timer(timer);
    char* r; // to store the alphabets
    char* q;
    char* w;
    switch(p) //switching the random variable obtained from the main
    {

    case 1:
        r="ABCDEFGHI";
        q="JKLMNOPQR";
        w="STUVWXYZ";

        display_alphabet(r,q,w); // function to display the alphabets
        al_wait_for_event(event_queue,&events);
        if(events.type==ALLEGRO_EVENT_TIMER) //if 4 seconds are  over
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

 pi1=convert(score1);
            pi2=convert(score2);
                a=al_load_bitmap("smile.png");
                b=al_load_bitmap("sad.png");
                display_smile(a,b);
                break;
            case ALLEGRO_KEY_P :
                score2++;
                pi1=convert(score1);

 pi1=convert(score1);
            pi2=convert(score2);
                b=al_load_bitmap("smile.png");
                a=al_load_bitmap("sad.png");
                display_smile(a,b);
                break;
            }


        }
        break;


    case 2:
        r="ABDCEFGHI";
        q="JKLMNOPQR";
        w="STUVWXYZ";
        display_alphabet(r,q,w);
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

            }


            r="ABdcEFGHI";
            q="JKLMNOPQR";
            w="STUVWXYZ";
            display_alphabet(r,q,w);
            al_rest(2);
        }
        break;

    case 3:
        r="ABCDEFGHI";
        q="KJLMNOPQR";
        w="STUVWXYZ";
        display_alphabet(r,q,w);
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

            }

            r="ABDCEFGHI";
            q="kjLMNOPQR";
            w="STUVWXYZ";
            display_alphabet(r,q,w);
            al_rest(2.0);
        }
        break;

    case 4:
        r="ABCDEFGHI";
        q="JKLMNOPQR";
        w="STUVWXYZ";
        display_alphabet(r,q,w);
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


        }
        break;

    case 5:
        r="ABCDEFGHI";
        q="JKLONMPQR";
        w="STUVWXYZ";
        display_alphabet(r,q,w);
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


            r="ABCDEFGHI";
            q="JKLonmPQR";
            w="STUVWXYZ";
            display_alphabet(r,q,w);
            al_rest(2.0);
        }
        break;

    case 6:
        r="ABCDEGFHI";
        q="JKLMNOQPR";
        w="STUVWXYZ";
        display_alphabet(r,q,w);
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


            r="ABCDEgfHI";
            q="JKLMNOQPR";
            w="STUVWXYZ";
            display_alphabet(r,q,w);
            al_rest(2.0);
        }
        break;

    case 7:
        r="ABCDEFGHI";
        q="JKLMNOPQR";
        w="STUVWXYZ";
        display_alphabet(r,q,w);
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


            al_rest(2.0);
        }
        break;

    case 8:
        r="ABCDEFGHI";
        q="JKLMNOPQR";
        w="STUVWXYZ";
        display_alphabet(r,q,w);
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


        }
        break;

    case 9:
        r="ABCDEFGHI";
        q="JKLMNOPQR";
        w="STUWVXYZ";
        display_alphabet(r,q,w);
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



            r="ABCDEFGHI";
            q="JKLMNOPQR";
            w="STUwvXYZ";
            display_alphabet(r,q,w);
            al_rest(2.0);
        }
    }
    al_stop_timer(timer);

}

