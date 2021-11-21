/*!
 * @file moddef.c
 *
 * This will return a pointer to the function used to replace sprites in the game
 */

#include "export.h"
#include "aer/mod.h"

#include "moddef.h"
#include "sprite.h"

/* ----- PUBLIC FUNCTIONS ----- */

/*!
 * @brief Main Mod Definition
 *
 * This function will pass pointers to its own functions that will be
 * called during the specific event in game
 * 
 * @param[out] def          Pointer to AERModDef structure holding function pointers
 */
MOD_EXPORT void DefineMod(AERModDef* def) {
    // We only need a single call during the startup to register sprites
    def->registerSprites = RegisterSprites;

    return;
}