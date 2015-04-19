void display_smile(ALLEGRO_BITMAP *a,ALLEGRO_BITMAP *b)
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
    al_draw_text(font,al_map_rgb(0,0,255),275,510,ALLEGRO_ALIGN_RIGHT,"score");
    al_draw_text(font,al_map_rgb(0,0,255),1175,510,ALLEGRO_ALIGN_RIGHT,"score");
    al_draw_text(font,al_map_rgb(0,0,255),225,600,ALLEGRO_ALIGN_RIGHT,pi1);
    al_draw_text(font,al_map_rgb(0,0,255),1125,600,ALLEGRO_ALIGN_RIGHT,pi2);
    al_draw_bitmap(a,50,200,ALLEGRO_FLIP_HORIZONTAL);
    al_draw_bitmap(b,950,200,ALLEGRO_FLIP_HORIZONTAL);
    al_flip_display();
    al_rest(1.0);
}
