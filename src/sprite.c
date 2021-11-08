/* sprite.c */

#include "aer/sprite.h"
#include "aer/log.h"

#include "sprite.h"
#include "stdio.h"

/*!
 * @brief Function to replace all character sprites in this mod
 */
void RegisterSprites(void) {

    // Standing Sprites, single frame
    AERSpriteReplace(AER_SPRITE_CHARSTANDFRONT, "sprites/charstandfront.png", 1, 8, 28);
    AERSpriteReplace(AER_SPRITE_CHARSTANDSIDE, "sprites/charstandside.png", 1, 8, 27);
    AERSpriteReplace(AER_SPRITE_CHARSTANDBACK, "sprites/charstandback.png", 1, 8, 27);

    // Running Sprites, 12 frames
    AERSpriteReplace(AER_SPRITE_CHAR, "sprites/char.png", 12, 12, 30);
    AERSpriteReplace(AER_SPRITE_CHARSIDE, "sprites/charside.png", 12, 16, 27);
    AERSpriteReplace(AER_SPRITE_CHARBACK, "sprites/charback.png", 12, 13, 29);

    // Walking Sprites, 12 frames
    AERSpriteReplace(AER_SPRITE_CHARWALKFRONT, "sprites/charwalkfront.png", 12, 12, 29);
    AERSpriteReplace(AER_SPRITE_CHARWALKSIDE, "sprites/charwalkside.png", 12, 16, 27);
    AERSpriteReplace(AER_SPRITE_CHARWALKBACK, "sprites/charwalkback.png", 12, 13, 30);

    // Basic Sword Attack Sprites, 36 frames
    AERSpriteReplace(AER_SPRITE_CHARBASICSWORDS, "sprites/charbasicswords.png", 36, 25, 33);
    AERSpriteReplace(AER_SPRITE_CHARBASICSWORDE, "sprites/charbasicsworde.png", 36, 21, 31);
    AERSpriteReplace(AER_SPRITE_CHARBASICSWORDN, "sprites/charbasicswordn.png", 36, 25, 41);

    // Char Dash animations 16 (and 17?) frames
    AERSpriteReplace(AER_SPRITE_CHARDASHFRONT, "sprites/chardashfront.png", 16, 9, 28);
    AERSpriteReplace(AER_SPRITE_CHARDASHSIDE, "sprites/chardashside.png", 16, 21, 26);
    AERSpriteReplace(AER_SPRITE_CHARDASHBACK, "sprites/chardashback.png", 17, 12, 27);

    // Char Clash Animations (sword bounce off wall) 23 frames
    AERSpriteReplace(AER_SPRITE_CHARCLASHS, "sprites/charclashs.png", 23, 17, 37);
    AERSpriteReplace(AER_SPRITE_CHARCLASHE, "sprites/charclashe.png", 23, 19, 35);
    AERSpriteReplace(AER_SPRITE_CHARCLASHN, "sprites/charclashn.png", 23, 15, 31);

    // Getting up animations
    AERSpriteReplace(AER_SPRITE_CHARSIT, "sprites/charsit.png", 156, 20, 30);
    AERSpriteReplace(AER_SPRITE_CHARSTARTLEDAWAKE, "sprites/charstartledawake.png", 57, 15, 26);

    // Char Coughing animations
    AERSpriteReplace(AER_SPRITE_CHARSTUMBLECOUGH, "sprites/charstumblecough.png", 42, 15, 27);

    // Misc animations for character
    AERSpriteReplace(AER_SPRITE_CHARHEAL, "sprites/charheal.png", 25, 16, 28);

    return;
}

