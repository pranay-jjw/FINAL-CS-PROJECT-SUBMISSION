#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
float probability=0.5;//setting probablity according to toughness
void countrycapitals()
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

        //a multidimensional array having name of countried stored
    char* data[193][2]= {{"Afghanistan","Kabul"},{"Albania","Tirane"},{"Algeria","Algiers"},{"Andorra","Andorra la Vella"},{"Angola","Luanda"},{"Antigua and Barbuda","Saint John's"},{"Argentina","Buenos Aires"},{"Armenia","Yerevas"},{"Australia","Canberra"},{"Austria","Vienna"},{"Azerbaijan","Baku"},{"Bahrain","Manama"},{"Bangladesh","Dhaka"},{"Barbados","Bridgetown"},{"Belarus","Minsk"},{"Belgium","Brussels"},{"Belize","Belmopan"},{"Benin","Porto-Novo"},{"Bhutan","Thimphu"},{"Bolivia","La Paz"},{"Bosnia and Herzegovina","Sarajevo"},{"Botswana","Gaborone"},{"Brazil","Brasilia"},{"Brunei","Bandar Seri Begawan"},{"Bulgaria","Sofia"},{"Burkina Faso","Ouagadougou"},{"Burma","Rangoon"},{"Burundi","Bujumbura"},{"Cambodia","Phnom Penh"},{"Cameroon","Yaounde"},{"Canada","Ottawa"},{"Cape Verde","Praia"},{"Central African Republic","Bangui"},{"Chad","N'Djamena"},{"Chile","Santiago"},{"China","Beijing"},{"Colombia","Bogota"},{"Comoros","Moroni"},{"Costa Rica","San Jose"},{"Cote d'Ivoire","Yamoussoukro"},{"Croatia","Zagreb"},{"Cuba","Havana"},{"Cyprus","Nicosia"},{"Czech Republic","Prague"},{"Democratic Republic of the Congo","Kinshasa"},{"Denmark","Copenhagen"},{"Djibouti","Djibouti"},{"Dominica","Roseau"},{"Dominican Republic","Santo Domingo"},{"East Timor","Dili"},{"Ecuador","Quito"},{"Egypt","Cairo"},{"El Salvador","San Salvador"},{"Equatorial Guinea","Malabo"},{"Eritrea","Asmara"},{"Estonia","Tallinn"},{"Ethiopia","Addis Ababa"},{"Federated States of Micronesia","Palikir"},{"Fiji","Suva"},{"Finland","Helsinki"},{"France","Paris"},{"Gabon","Libreville"},{"Georgia","Tbilisi"},{"Germany","Berlin"},{"Ghana","Accra"},{"Greece","Athens"},{"Grenada","Saint George's"},{"Guatemala","Guatemala City"},{"Guinea","Conakry"},{"Guinea-Bissau","Bissau"},{"Guyana","Georgetown"},{"Haiti","Port-au-Prince"},{"Honduras","Tegucigalpa"},{"Hungary","Budapest"},{"Iceland","Reykjavik"},{"India","New Delhi"},{"Indonesia","Jakarta"},{"Iran","Tehran"},{"Iraq","Baghdad"},{"Ireland","Dublin"},{"Israel","Jerusalem"},{"Italy","Rome"},{"Jamaica","Kingston"},{"Japan","Tokyo"},{"Jordan","Amman"},{"Kazakhstan","Astana"},{"Kenya","Nairobi"},{"Kiribati","Tarawa"},{"Kuwait","Kuwait City"},{"Kyrgyzstan","Bishtek"},{"Laos","Vientiane"},{"Latvia","Riga"},{"Lebanon","Beirut"},{"Lesotho","Maseru"},{"Liberia","Monrovia"},{"Libya","Tripoli"},{"Liechtenstein","Vaduz"},{"Lithuania","Vilnius"},{"Luxembourg","Luxembourg"},{"Macedonia","Skopje"},{"Madagascar","Antananarivo"},{"Malawi","Lilongwe"},{"Malaysia","Kuala Lumpur"},{"Maldives","Male"},{"Mali","Bamako"},{"Malta","Valletta"},{"Marshall Islands","Majuro"},{"Mauritania","Nouakchott"},{"Mauritius","Port Louis"},{"Mexico","Mexico City"},{"Moldova","Chisinau"},{"Monaco","Monaco"},{"Mongolia","Ulaanbaatar"},{"Morocco","Rabat"},{"Mozambique","Maputo"},{"Namibia","Windhoek"},{"Nauru","Yaren District"},{"Nepal","Kathmandu"},{"Netherlands","Amsterdam"},{"New Zealand","Wellington"},{"Nicaragua","Managua"},{"Niger","Niamey"},{"Nigeria","Abuja"},{"North Korea","Pyongyang"},{"Norway","Oslo"},{"Oman","Muscat"},{"Pakistan","Islamabad"},{"Palau","Koror"},{"Panama","Panama City"},{"Papua New Guinea","Port Moresby"},{"Paraguay","Asuncion"},{"Peru","Lima"},{"Philippines","Manila"},{"Poland","Warsaw"},{"Portugal","Lisbon"},{"Qatar","Doha"},{"Republic of the Congo","Brazzaville"},{"Romania","Bucharest"},{"Russia","Moscow"},{"Rwanda","Kigali"},{"Saint Kitts and Nevis","Basseterre"},{"Saint Lucia","Castries"},{"Saint Vincent and the Grenadines","Kingstown"},{"Samoa","Apia"},{"San Marino","San Marino"},{"Sao Tome and Principe","Sao Tome"},{"Saudi Arabia","Riyadh"},{"Senegal","Dakar"},{"Serbia and Montenegro","Belgrade"},{"Seychelles","Victoria"},{"Sierra Leone","Freetown"},{"Singapore","Singapore"},{"Slovakia","Bratislava"},{"Slovenia","Ljubljana"},{"Solomon Islands","Honiara"},{"Somalia","Mogadishu"},{"South Africa","Pretoria"},{"South Korea","Seoul"},{"Spain","Madrid"},{"Sri Lanka","Colombo"},{"Sudan","Khartoum"},{"Suriname","Paramaribo"},{"Swaziland","Mbabana"},{"Sweden","Stockholm"},{"Switzerland","Bern"},{"Syria","Damascus"},{"Taiwan","Taipei"},{"Tajikistan","Dushanbe"},{"Tanzania","Dar es Salaam"},{"Thailand","Bangkok"},{"The Bahamas","Nassau"},{"The Gambia","Banjul"},{"Togo","Lome"},{"Tonga","Nuku'alofa"},{"Trinidad and Tobago","Port of Spain"},{"Tunisia","Tunis"},{"Turkey","Ankara"},{"Turkmenistan","Ashgabat"},{"Tuvalu","Funafuti"},{"Uganda","Kampala"},{"Ukraine","Kiev"},{"United Arab Emirates","Abu Dhabi"},{"United Kingdom","London"},{"United States","Washington D.C."},{"Uruguay","Montevideo"},{"Uzbekistan","Tashkent"},{"Vanuatu","Port-Vila"},{"Vatican City","Vatican City"},{"Venezuela","Caracas"},{"Vietnam","Hanoi"},{"Yemen","Sanaa"},{"Zambia","Lusaka"},{"Zimbabwe","Harare"}};
    srand(time(0));
    {
        //to choose a random country
        int r = rand()%193;
        //to compare with the set probablity
        float k = (float)(rand()%1000)/1000;

        if (k<=probability)  //if random variable less than probablity correcr country and capital
        {
            char* country=data[r][0];
            char* capital=data[r][1];
            display_screen(country,capital);
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
        }

        else //if random variable is greater than probablity wrong country and capital
        {
            char* country=data[r][0];
            int f=(int)(k*1000)%193;
            if (f==r)
            {
                f=(int)(k*1000+1)%193;
            }
            char* capital=data[f][1];
            display_screen(country,capital);
            al_wait_for_event(event_queue,&events);
             if(events.type==ALLEGRO_EVENT_TIMER)
        {
            return;
        }
            if(events.type=ALLEGRO_EVENT_KEY_DOWN)
            {
                switch(events.keyboard.keycode)
                {
                case ALLEGRO_KEY_Y : //if player1 presses the key
                    score1--;

                    pi1=convert(score1);
                    pi2=convert(score2);
                    b=al_load_bitmap("smile.png");
                    a=al_load_bitmap("sad.png");
                    display_smile(a,b);
                    break;
                case ALLEGRO_KEY_P : //if player2 presses the key
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

        }

    }



}
