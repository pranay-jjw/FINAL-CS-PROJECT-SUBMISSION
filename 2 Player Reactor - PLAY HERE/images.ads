void images()
{

ALLEGRO_BITMAP *kola1 = al_load_bitmap("kola1.jpeg");
ALLEGRO_BITMAP *kola2 = al_load_bitmap("kola2.jpeg");
ALLEGRO_BITMAP *kola3 = al_load_bitmap("kola3.jpeg");
ALLEGRO_BITMAP *lion = al_load_bitmap("lion.jpeg");
ALLEGRO_BITMAP *bird = al_load_bitmap("bird.jpeg");
ALLEGRO_BITMAP *dino = al_load_bitmap("dino.jpeg");
ALLEGRO_BITMAP *cat = al_load_bitmap("cat.jpeg");

al_install_keyboard();
ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();
al_register_event_source(event_queue,al_get_keyboard_event_source());
          ALLEGRO_EVENT events;




     switch(int a)
    {

     case 1:


al_clear_to_color(al_map_rgb(0,0,0));

  al_init_font_addon();
  al_init_ttf_addon();
   al_init_primitives_addon();
  ALLEGRO_COLOR electricblue = al_map_rgb(44,100,255);
  al_draw_line(400,0,400,700,electricblue,3.0);
  al_draw_line(900,0,900,700,electricblue,3.0);
  ALLEGRO_FONT *font= al_load_font("gomarice_rockin_record.ttf",72,NULL);
  al_draw_text(font,al_map_rgb(44,255,0),200,150,ALLEGRO_ALIGN_CENTRE,p1);
  al_draw_text(font,al_map_rgb(44,255,0),1100,150,ALLEGRO_ALIGN_CENTRE,p2);
 ALLEGRO_FONT *font1= al_load_font("A little sunshine.ttf",72,NULL);
  al_draw_text(font1,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
 al_draw_text(font1,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);
   al_draw_bitmap(kola1,500,0,ALLEGRO_FLIP_HORIZONTAL);
al_wait_for_event(event_queue,&events);
      if(events.type=ALLEGRO_EVENT_KEY_DOWN)
         {
           switch(events.keyboard.keycode)
            {
                case ALLEGRO_KEY_Y :
                  score1++;
                   break;
                case ALLEGRO_KEY_P :
                  score2++;
                   break;
            }

          pi1=convert(score1);
          pi2=convert(score2);
         }
     break;

        case 2:

al_clear_to_color(al_map_rgb(0,0,0));

  al_init_font_addon();
  al_init_ttf_addon();
   al_init_primitives_addon();
  ALLEGRO_COLOR electricblue = al_map_rgb(44,100,255);
  al_draw_line(400,0,400,700,electricblue,3.0);
  al_draw_line(900,0,900,700,electricblue,3.0);
  ALLEGRO_FONT *font= al_load_font("gomarice_rockin_record.ttf",72,NULL);
  al_draw_text(font,al_map_rgb(44,255,0),200,150,ALLEGRO_ALIGN_CENTRE,p1);
  al_draw_text(font,al_map_rgb(44,255,0),1100,150,ALLEGRO_ALIGN_CENTRE,p2);
 ALLEGRO_FONT *font1= al_load_font("A little sunshine.ttf",72,NULL);
  al_draw_text(font1,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
 al_draw_text(font1,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);
   al_draw_bitmap(kola2,500,0,ALLEGRO_FLIP_HORIZONTAL);
al_wait_for_event(event_queue,&events);
      if(events.type=ALLEGRO_EVENT_KEY_DOWN)
         {
           switch(events.keyboard.keycode)
            {
                case ALLEGRO_KEY_Y :
                  score1++;
                   break;
                case ALLEGRO_KEY_P :
                  score2++;
                   break;
            }

          pi1=convert(score1);
          pi2=convert(score2);
         }
     break;
       case 3:

al_clear_to_color(al_map_rgb(0,0,0));

  al_init_font_addon();
  al_init_ttf_addon();
   al_init_primitives_addon();
  ALLEGRO_COLOR electricblue = al_map_rgb(44,100,255);
  al_draw_line(400,0,400,700,electricblue,3.0);
  al_draw_line(900,0,900,700,electricblue,3.0);
  ALLEGRO_FONT *font= al_load_font("gomarice_rockin_record.ttf",72,NULL);
  al_draw_text(font,al_map_rgb(44,255,0),200,150,ALLEGRO_ALIGN_CENTRE,p1);
  al_draw_text(font,al_map_rgb(44,255,0),1100,150,ALLEGRO_ALIGN_CENTRE,p2);
 ALLEGRO_FONT *font1= al_load_font("A little sunshine.ttf",72,NULL);
  al_draw_text(font1,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
 al_draw_text(font1,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);
   al_draw_bitmap(kola3,500,0,ALLEGRO_FLIP_HORIZONTAL);
al_wait_for_event(event_queue,&events);
      if(events.type=ALLEGRO_EVENT_KEY_DOWN)
         {
           switch(events.keyboard.keycode)
            {
                case ALLEGRO_KEY_Y :
                  score1++;
                   break;
                case ALLEGRO_KEY_P :
                  score2++;
                   break;
            }

          pi1=convert(score1);
          pi2=convert(score2);
         }
     break;

     case 4:

al_clear_to_color(al_map_rgb(0,0,0));

  al_init_font_addon();
  al_init_ttf_addon();
   al_init_primitives_addon();
  ALLEGRO_COLOR electricblue = al_map_rgb(44,100,255);
  al_draw_line(400,0,400,700,electricblue,3.0);
  al_draw_line(900,0,900,700,electricblue,3.0);
  ALLEGRO_FONT *font= al_load_font("gomarice_rockin_record.ttf",72,NULL);
  al_draw_text(font,al_map_rgb(44,255,0),200,150,ALLEGRO_ALIGN_CENTRE,p1);
  al_draw_text(font,al_map_rgb(44,255,0),1100,150,ALLEGRO_ALIGN_CENTRE,p2);
 ALLEGRO_FONT *font1= al_load_font("A little sunshine.ttf",72,NULL);
  al_draw_text(font1,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
 al_draw_text(font1,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);
   al_draw_bitmap(lion,500,0,ALLEGRO_FLIP_HORIZONTAL);
al_wait_for_event(event_queue,&events);
      if(events.type=ALLEGRO_EVENT_KEY_DOWN)
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
         }
     break;


     case 5:

al_clear_to_color(al_map_rgb(0,0,0));

  al_init_font_addon();
  al_init_ttf_addon();
   al_init_primitives_addon();
  ALLEGRO_COLOR electricblue = al_map_rgb(44,100,255);
  al_draw_line(400,0,400,700,electricblue,3.0);
  al_draw_line(900,0,900,700,electricblue,3.0);
  ALLEGRO_FONT *font= al_load_font("gomarice_rockin_record.ttf",72,NULL);
  al_draw_text(font,al_map_rgb(44,255,0),200,150,ALLEGRO_ALIGN_CENTRE,p1);
  al_draw_text(font,al_map_rgb(44,255,0),1100,150,ALLEGRO_ALIGN_CENTRE,p2);
 ALLEGRO_FONT *font1= al_load_font("A little sunshine.ttf",72,NULL);
  al_draw_text(font1,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
 al_draw_text(font1,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);
   al_draw_bitmap(dino,500,0,ALLEGRO_FLIP_HORIZONTAL);
al_wait_for_event(event_queue,&events);
      if(events.type=ALLEGRO_EVENT_KEY_DOWN)
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
         }
     break;


     case 6:

al_clear_to_color(al_map_rgb(0,0,0));

  al_init_font_addon();
  al_init_ttf_addon();
   al_init_primitives_addon();
  ALLEGRO_COLOR electricblue = al_map_rgb(44,100,255);
  al_draw_line(400,0,400,700,electricblue,3.0);
  al_draw_line(900,0,900,700,electricblue,3.0);
  ALLEGRO_FONT *font= al_load_font("gomarice_rockin_record.ttf",72,NULL);
  al_draw_text(font,al_map_rgb(44,255,0),200,150,ALLEGRO_ALIGN_CENTRE,p1);
  al_draw_text(font,al_map_rgb(44,255,0),1100,150,ALLEGRO_ALIGN_CENTRE,p2);
 ALLEGRO_FONT *font1= al_load_font("A little sunshine.ttf",72,NULL);
  al_draw_text(font1,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
 al_draw_text(font1,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);
   al_draw_bitmap(bird,500,0,ALLEGRO_FLIP_HORIZONTAL);
al_wait_for_event(event_queue,&events);
      if(events.type=ALLEGRO_EVENT_KEY_DOWN)
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
         }
     break;


     case 7:

al_clear_to_color(al_map_rgb(0,0,0));

  al_init_font_addon();
  al_init_ttf_addon();
   al_init_primitives_addon();
  ALLEGRO_COLOR electricblue = al_map_rgb(44,100,255);
  al_draw_line(400,0,400,700,electricblue,3.0);
  al_draw_line(900,0,900,700,electricblue,3.0);
  ALLEGRO_FONT *font= al_load_font("gomarice_rockin_record.ttf",72,NULL);
  al_draw_text(font,al_map_rgb(44,255,0),200,150,ALLEGRO_ALIGN_CENTRE,p1);
  al_draw_text(font,al_map_rgb(44,255,0),1100,150,ALLEGRO_ALIGN_CENTRE,p2);
 ALLEGRO_FONT *font1= al_load_font("A little sunshine.ttf",72,NULL);
  al_draw_text(font1,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
 al_draw_text(font1,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
 al_draw_text(font1,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);
   al_draw_bitmap(cat,500,0,ALLEGRO_FLIP_HORIZONTAL);
al_wait_for_event(event_queue,&events);
      if(events.type=ALLEGRO_EVENT_KEY_DOWN)
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
         }
     break;
    }

