
void equations(int z)
{

    al_install_keyboard();
    ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
    al_register_event_source(event_queue,al_get_keyboard_event_source());
    ALLEGRO_EVENT events;
    ALLEGRO_TIMER *timer = NULL;
    timer=al_create_timer(3.0);
    al_register_event_source(event_queue,al_get_timer_event_source(timer));
    ALLEGRO_EVENT ev;
    char* eq;
    al_start_timer(timer);
    switch(z)
    {

    case 1:

        eq= "3 + 3 =6 ";
        display_screen(eq);
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
        eq= "5 + 4 = 9";
        display_screen(eq);
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
        eq= "2>31/9";
        display_screen(eq);
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

    case 4:
        eq= "3 + 3 = 9 ";
        display_screen(eq);
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
        eq= "29/4>7";
        display_screen(eq);
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
    case 16:
        eq= "87 is prime";
        display_screen(eq);
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
        eq= "4 < 11/3";
        display_screen(eq);
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
        eq= "27/3 < 10";
        display_screen(eq);
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
    case 8:
        eq= "119 is prime";
        display_screen(eq);
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
        eq= "1 is prime";
        display_screen(eq);
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
        eq= "62 is prime";
        display_screen(eq);
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
        eq= "20/7 < 3";
        display_screen(eq);
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
    case 12:
        eq= "14+11=15";
        display_screen(eq);
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
        eq= "4 < 26/6";
        display_screen(eq);
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
    case 14:
        eq= "14-7=11";
        display_screen(eq);
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

    case 15:
        eq= "161 is prime";
        display_screen(eq);
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
