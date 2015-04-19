void display_alphabet(char*a=" ",char*b=" ",char*c=" ")
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
    ALLEGRO_FONT *font1= al_load_font("ahronbd.ttf",65,NULL);
    al_draw_text(font1,al_map_rgb(255,255,155),820,100,ALLEGRO_ALIGN_RIGHT,a);
    al_draw_text(font1,al_map_rgb(255,255,155),830,250,ALLEGRO_ALIGN_RIGHT,b);
    al_draw_text(font1,al_map_rgb(255,255,155),820,400,ALLEGRO_ALIGN_RIGHT,c);
    al_draw_text(font,al_map_rgb(0,0,255),275,500,ALLEGRO_ALIGN_RIGHT,"score");
    al_draw_text(font,al_map_rgb(0,0,255),1175,500,ALLEGRO_ALIGN_RIGHT,"score");
    al_draw_text(font,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
    al_draw_text(font,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);

    al_flip_display();


    return;

}
