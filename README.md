# Drifter Skin Mod

This is a mod for the Linux Version of the game Hyper Light Drifter which replaces the default character sprites

## Requirements
- Either the [Steam](https://duckduckgo.com/?t=ffab&q=hyper+light+drifter&ia=web) or [GOG](https://www.gog.com/game/hyper_light_drifter) version of Hyper Light Drifter.
- Recent versions of the AER [executable patch](https://github.com/Foxbud/aerpatch/releases/latest) and [mod runtime environment](https://github.com/Foxbud/libaermre/releases/latest) (use [aerman](https://github.com/Foxbud/aerman/releases/latest) to install them).

## Quick Start
After installing both the AER Mod Runtime Environment and AER Patch, this mod can be installed like any other using the AER manager

```
./aerman mod-install </path/to/mod.tar.xz>
```
The mod can then be added to any modpack and run via
```
./aerman pack-create <pack_name> greendrifter [other mods]
./aerman pack-run <pack_name>
```

If you have any issues please reach out for help on the [HLD Discord Server](https://discord.gg/XaBrHDHTGe).

## Editing Sprites
By default, this mod is packaged with my recoloring of the drifter character. You are welcome to use both these sprites and code as a baseline for editing your own mods or making a set of sprites that can be used with this mod.

After installing the mod, the sprites used can be found in your Hyper Light Drifter folder

```
/path/to/HyperLightDrifter/aer/mods/drifterskin/assets/
```
