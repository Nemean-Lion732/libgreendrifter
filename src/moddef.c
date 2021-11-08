#include "export.h"
#include "aer/mod.h"

#include "moddef.h"
#include "sprite.h"

/* ----- PUBLIC FUNCTIONS ----- */

MOD_EXPORT void DefineMod(AERModDef* def) {
    def->registerSprites = RegisterSprites;

    return;
}