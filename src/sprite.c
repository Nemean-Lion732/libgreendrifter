/*!
 * @file sprite.c
 *
 * Contains all of the information for replacing every character sprite
 * 
 * Format for AERSpriteReplace is <spriteIdx> <file_name> <number of frames> <x_offset> <y_offset>
 */

#include "aer/sprite.h"

#include "sprite.h"
#include "stdio.h"

/*!
 * @brief Function to replace all character sprites in this mod
 */
void RegisterSprites(void) {

    // Standing Sprites, single frame
    AERSpriteReplace(AER_SPRITE_CHARSTANDFRONT, "sprites/char_stand_front.png", 1, 8, 28);
    AERSpriteReplace(AER_SPRITE_CHARSTANDSIDE, "sprites/char_stand_side.png", 1, 8, 27);
    AERSpriteReplace(AER_SPRITE_CHARSTANDBACK, "sprites/char_stand_back.png", 1, 8, 27);

    // Running Sprites, 12 frames
    AERSpriteReplace(AER_SPRITE_CHAR, "sprites/char.png", 12, 12, 30);
    AERSpriteReplace(AER_SPRITE_CHARSIDE, "sprites/char_side.png", 12, 16, 27);
    AERSpriteReplace(AER_SPRITE_CHARBACK, "sprites/char_back.png", 12, 13, 29);

    // Walking Sprites, 12 frames
    AERSpriteReplace(AER_SPRITE_CHARWALKFRONT, "sprites/char_walk_front.png", 12, 12, 29);
    AERSpriteReplace(AER_SPRITE_CHARWALKSIDE, "sprites/char_walk_side.png", 12, 16, 27);
    AERSpriteReplace(AER_SPRITE_CHARWALKBACK, "sprites/char_walk_back.png", 12, 13, 30);

    // Basic Sword Attack Sprites, 36 frames
    AERSpriteReplace(AER_SPRITE_CHARBASICSWORDS, "sprites/char_basic_sword_s.png", 36, 25, 33);
    AERSpriteReplace(AER_SPRITE_CHARBASICSWORDE, "sprites/char_basic_sword_e.png", 36, 21, 31);
    AERSpriteReplace(AER_SPRITE_CHARBASICSWORDN, "sprites/char_basic_sword_n.png", 36, 25, 41);

    // Gun animations
    AERSpriteReplace(AER_SPRITE_CHARAIMS, "sprites/char_aim_s.png", 1, 6, 26);
    AERSpriteReplace(AER_SPRITE_CHARAIME, "sprites/char_aim_e.png", 1, 6, 26);
    AERSpriteReplace(AER_SPRITE_CHARAIMN, "sprites/char_aim_n.png", 1, 6, 26);

    // Shield break animations
    AERSpriteReplace(AER_SPRITE_CHARSHIELDBREAKDOWN, "sprites/char_shield_break_down.png", 15, 11, 29);
    AERSpriteReplace(AER_SPRITE_CHARSHIELDBREAKSIDE, "sprites/char_shield_break_side.png", 15, 16, 26);
    AERSpriteReplace(AER_SPRITE_CHARSHIELDBREAKUP, "sprites/char_shield_break_up.png", 15, 13, 30);

    // Grenade Toss animations
    AERSpriteReplace(AER_SPRITE_CHARSHIELDPUSHFRONT, "sprites/char_shield_push_front.png", 21, 11, 27);
    AERSpriteReplace(AER_SPRITE_CHARSHIELDPUSHSIDE, "sprites/char_shield_push_side.png", 21, 17, 26);
    AERSpriteReplace(AER_SPRITE_CHARSHIELDPUSHBACK, "sprites/char_shield_push_back.png", 21, 11, 28);

    // Heavy Sword Attack
    AERSpriteReplace(AER_SPRITE_CHARHEAVYSWORDS, "sprites/char_heavy_sword_s.png", 30, 33, 39);
    AERSpriteReplace(AER_SPRITE_CHARHEAVYSWORDE, "sprites/char_heavy_sword_e.png", 30, 38, 44);
    AERSpriteReplace(AER_SPRITE_CHARHEAVYSWORDN, "sprites/char_heavy_sword_n.png", 30, 34, 55);

    // Phantom Slash
    AERSpriteReplace(AER_SPRITE_CHARPHANTOMSLASHE, "sprites/char_phantom_slash_e.png", 20, 12, 31);
    AERSpriteReplace(AER_SPRITE_CHARPHANTOMBLUR, "sprites/char_phantom_blur.png", 1, 0, 10);

    // Char Dash animations
    AERSpriteReplace(AER_SPRITE_CHARDASHFRONT, "sprites/char_dash_front.png", 16, 9, 28);
    AERSpriteReplace(AER_SPRITE_CHARDASHSIDE, "sprites/char_dash_side.png", 16, 21, 26);
    AERSpriteReplace(AER_SPRITE_CHARDASHBACK, "sprites/char_dash_back.png", 17, 12, 27);

    AERSpriteReplace(AER_SPRITE_CHARAIRDASHBACK, "sprites/char_air_dash_back.png", 17, 12, 27);
    AERSpriteReplace(AER_SPRITE_CHARAIRDASHSIDE, "sprites/char_air_dash_side.png", 4, 21, 18);
    AERSpriteReplace(AER_SPRITE_CHARAIRDASHFRONT, "sprites/char_air_dash_front.png", 4, 12, 28);

    AERSpriteReplace(AER_SPRITE_CHARWALLDASH, "sprites/char_wall_dash.png", 32, 12, 37);

    // Char Clash Animations (sword bounce off wall) 23 frames
    AERSpriteReplace(AER_SPRITE_CHARCLASHS, "sprites/char_clash_s.png", 23, 17, 37);
    AERSpriteReplace(AER_SPRITE_CHARCLASHE, "sprites/char_clash_e.png", 23, 19, 35);
    AERSpriteReplace(AER_SPRITE_CHARCLASHN, "sprites/char_clash_n.png", 23, 15, 31);

    // Getting up animations
    AERSpriteReplace(AER_SPRITE_CHARSIT, "sprites/char_sit.png", 156, 20, 30);
    AERSpriteReplace(AER_SPRITE_CHARSTARTLEDAWAKE, "sprites/char_startled_awake.png", 57, 15, 26);
    AERSpriteReplace(AER_SPRITE_REVIVECHAR, "sprites/revive_char.png", 156, 17, 27);

    // Jumping Animations
    AERSpriteReplace(AER_SPRITE_CHARTEETERDOWN, "sprites/char_teeter_down.png", 12, 11, 29);
    AERSpriteReplace(AER_SPRITE_CHARTEETER, "sprites/char_teeter.png", 12, 16, 28);
    AERSpriteReplace(AER_SPRITE_CHARTEETERUP, "sprites/char_teeter_up.png", 12, 13, 29);
    
    AERSpriteReplace(AER_SPRITE_CHARJUMPDOWN, "sprites/char_jump_down.png", 10, 12, 35);
    AERSpriteReplace(AER_SPRITE_CHARJUMPSIDE, "sprites/char_jump_side.png", 10, 12, 29);
    
    AERSpriteReplace(AER_SPRITE_CHARDROPPINGDOWN, "sprites/char_dropping_down.png", 5, 12, 40);
    AERSpriteReplace(AER_SPRITE_CHARDROPPINGSIDE, "sprites/char_dropping_side.png", 5, 9, 34);

    AERSpriteReplace(AER_SPRITE_CHARLANDDOWN, "sprites/char_land_down.png", 7, 12, 29);
    AERSpriteReplace(AER_SPRITE_CHARLANDSIDE, "sprites/char_land_side.png", 7, 8, 22);
    
    // BOSS BOSS BOSS
    AERSpriteReplace(AER_SPRITE_HALEVENTLOOM, "sprites/hal_event_loom.png", 114, 101, 182);
    AERSpriteReplace(AER_SPRITE_HALEVENTBEAM, "sprites/hal_event_beam.png", 103, 99, 103);
    AERSpriteReplace(AER_SPRITE_HALEVENTBULLET, "sprites/hal_event_bullet.png", 182, 100, 103);
    AERSpriteReplace(AER_SPRITE_HALEVENTSLAM, "sprites/hal_event_slam.png", 75, 101, 188);
    AERSpriteReplace(AER_SPRITE_HALEVENTSTAB, "sprites/hal_event_stab.png", 144, 53, 102);
    AERSpriteReplace(AER_SPRITE_HALBOSSFINALSTRIKE, "sprites/hal_boss_final_strike.png", 58, 90, 140);
    AERSpriteReplace(AER_SPRITE_CRYSTALCRACK, "sprites/crystal_crack.png", 67, 84, 86);

    // Misc animations for character
    AERSpriteReplace(AER_SPRITE_CHARHEAL, "sprites/char_heal.png", 25, 16, 28);
    AERSpriteReplace(AER_SPRITE_MODULESOCKETPILLAR, "sprites/module_socket_pillar.png", 58, 21, 27);
    AERSpriteReplace(AER_SPRITE_CHARVICTORY, "sprites/char_victory.png", 26, 39, 39);
    
    AERSpriteReplace(AER_SPRITE_CHARSTUMBLECOUGH, "sprites/char_stumble_cough.png", 42, 15, 27);
    AERSpriteReplace(AER_SPRITE_CHARSTUMBLE, "sprites/char_stumble.png", 112, 16, 28);
    AERSpriteReplace(AER_SPRITE_CHARSTUMBLEDEAD, "sprites/char_stumble_dead.png", 94, 6, 29);

    AERSpriteReplace(AER_SPRITE_DRIFTERNOD, "sprites/drifter_nod.png", 13, 15, 32);
    AERSpriteReplace(AER_SPRITE_DRIFTERNODSIDE, "sprites/drifter_nod_side.png", 13, 16, 33);

    AERSpriteReplace(AER_SPRITE_GDRIFTERLAYDOWN, "sprites/g_drifter_lay_down.png", 1, 0, 0);
    AERSpriteReplace(AER_SPRITE_CHARSLEEP, "sprites/char_sleep.png", 1, 8, 27);
    
    AERSpriteReplace(AER_SPRITE_CHARWARPARRIVE, "sprites/char_warp_arrive.png", 36, 49, 220);
    AERSpriteReplace(AER_SPRITE_CHARWARPDEPART, "sprites/char_warp_depart.png", 81, 49, 220);

    // Hit animations
    AERSpriteReplace(AER_SPRITE_CHARSTUNNED, "sprites/char_stunned.png", 6, 24, 38);
    AERSpriteReplace(AER_SPRITE_CHARTHROWN, "sprites/char_thrown.png", 24, 23, 29);

    // Map Icon
    AERSpriteReplace(AER_SPRITE_MAPDRIFTER, "sprites/map_drifter.png", 4, 3, 20);

    return;
}

