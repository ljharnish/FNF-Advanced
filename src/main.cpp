#include "bn_core.h"
#include "bn_memory.h"
#include "bn_string_view.h"
#include<stdio.h>
#include<stdlib.h>
#include "bn_fixed.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_music.h"
#include "bn_optional.h"
#include "bn_optional_fwd.h"
#include <time.h>
#include "bn_music_item.h"
#include "bn_music_items.h"
#include "bn_music_items_info.h"
#include "bn_sprite_items_leftreceptor.h"
#include "bn_sprite_items_sick1.h"
#include "bn_sprite_items_sick2.h"
#include "bn_sprite_items_left.h"
#include "bn_sprite_items_downreceptor.h"
#include "bn_sprite_items_upreceptor.h"
#include "bn_sprite_items_rightreceptor.h"
#include "bn_sprite_items_leftarrow.h"
#include "bn_sprite_items_downarrow.h"
#include "bn_sprite_items_uparrow.h"
#include "bn_sprite_items_rightarrow.h"
#include "bn_sprite_ptr.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_items_bgtest.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x16_sprite_font.h"



   void delay(int time){
       for(int index = 0; index < time; ++index)
        {
            bn::core::update();
        }
   }
  

/*  
    leftarr.set_y(leftarr.y() + 0.5);
    rightarr.set_y(rightarr.y() + 0.5);
    uparr.set_y(uparr.y() + 0.5);
    downarr.set_y(downarr.y() + 0.5);
*/
   

int main()
{ 
    bn::core::init();
      
        //bn::optional<bn::scene_type> next_scene = bn::scene_type::TITLE;
        bn::optional<bn::sprite_ptr> leftarr;
        bn::optional<bn::sprite_ptr> rightarr;
        bn::optional<bn::sprite_ptr> uparr;
        bn::optional<bn::sprite_ptr> downarr;
        bn::optional<bn::sprite_ptr> sick1;
        bn::optional<bn::sprite_ptr> sick2;
        
        bn::regular_bg_ptr regular_bg = bn::regular_bg_items::bgtest.create_bg(100, 0);
        sick1 = bn::sprite_items::sick1.create_sprite(0, 70);
        sick2 = bn::sprite_items::sick2.create_sprite(16, 70);
        bn::sprite_ptr leftrec = bn::sprite_items::leftreceptor.create_sprite(45, 67);
        bn::sprite_ptr downrec = bn::sprite_items::downreceptor.create_sprite(65, 67);
        bn::sprite_ptr uprec = bn::sprite_items::upreceptor.create_sprite(85, 67);
        bn::sprite_ptr rightrec = bn::sprite_items::rightreceptor.create_sprite(105, 67);
        
        leftarr = bn::sprite_items::leftarrow.create_sprite(45, -70);
        downarr = bn::sprite_items::downarrow.create_sprite(65, -70);
        uparr = bn::sprite_items::uparrow.create_sprite(85, -70);
        rightarr = bn::sprite_items::rightarrow.create_sprite(105, -70);
        bn::vector<bn::sprite_ptr, 32> text_sprites; 
        bn::sprite_text_generator text(common::variable_8x16_sprite_font);
        text.set_center_alignment();
        text.generate(-43, -73, "SELECT to switch songs!", text_sprites);
        text.generate(45, 47, "{", text_sprites);
        text.generate(65, 47, "}", text_sprites);
        text.generate(85, 47, "~", text_sprites);
        text.generate(105, 47, "|", text_sprites);
        

        bn::music_items::dadbattle.play();
        sick1.reset();
        sick2.reset();

    int counter = 0;


    while(true)
    { 
        int mark[14] = {60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73};
        for(int i = 0; i < 14; ++i) {
        if(rightarr->y() == mark[i]){
            if(bn::keypad::right_held()){
                    rightarr = bn::sprite_items::rightarrow.create_sprite(105, 0);
                sick1 = bn::sprite_items::sick1.create_sprite(0, 70);
                sick2 = bn::sprite_items::sick2.create_sprite(16, 70);
                }
                
            }
        }
        for(int i = 0; i < 14; ++i) {
        if(leftarr->y() == mark[i]){
           if(bn::keypad::left_held()){
                leftarr = bn::sprite_items::leftarrow.create_sprite(45, 0);
                sick1 = bn::sprite_items::sick1.create_sprite(0, 70);
                sick2 = bn::sprite_items::sick2.create_sprite(16, 70);
           }  
        }
        }  
        for(int i = 0; i < 14; ++i) {
        if(uparr->y() == mark[i]){
            if(bn::keypad::up_held()){
                uparr = bn::sprite_items::uparrow.create_sprite(85, 0);
                sick1 = bn::sprite_items::sick1.create_sprite(0, 70);
                sick2 = bn::sprite_items::sick2.create_sprite(16, 70);
            }
        }
        }
        for(int i = 0; i < 14; ++i) {
        if(downarr->y() == mark[i]){
            if(bn::keypad::down_held()){
                downarr = bn::sprite_items::downarrow.create_sprite(65, 0);
                sick1 = bn::sprite_items::sick1.create_sprite(0, 70);
                sick2 = bn::sprite_items::sick2.create_sprite(16, 70);
            }
        }
        }
            
        /*  
            leftarr->set_y(leftarr->y() + 0.5);
            rightarr->set_y(rightarr->y() + 0.5);
            uparr->set_y(uparr->y() + 0.5);
            downarr->set_y(downarr->y() + 0.5);
        
            leftarr = bn::sprite_items::leftarrow.create_sprite(45, 0);
            downarr = bn::sprite_items::downarrow.create_sprite(65, 0);
            uparr = bn::sprite_items::uparrow.create_sprite(85, 0);
            rightarr = bn::sprite_items::rightarrow.create_sprite(105, 0);
       */

        
//𝘋𝘈𝘋𝘉𝘈𝘛𝘛𝘓𝘌 𝘊𝘏𝘈𝘙𝘛𝘐𝘕𝘎

        if (++counter >= 100){
            uparr = bn::sprite_items::uparrow.create_sprite(85, -60);      
        }
        
        //if(++counter >= 120){
            //leftarr = bn::sprite_items::leftarrow.create_sprite(45, -70);
        //}
        //if(++counter >= 180){
            //downarr = bn::sprite_items::downarrow.create_sprite(65, -70);
        //}
        //if(++counter >= 240){
       //     uparr = bn::sprite_items::uparrow.create_sprite(85, 0);
        //}
        leftarr->set_y(leftarr->y() + 0.5);
        rightarr->set_y(rightarr->y() + 0.5);
        uparr->set_y(uparr->y() + 0.5);
        downarr->set_y(downarr->y() + 0.5);

        bn::core::update();
       
    }
    
} 
    
        