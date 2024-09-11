﻿# Nugget Doom

Nugget Doom is a fork of [Woof!](https://github.com/fabiangreffrath/woof), simply intended to implement additional features.

**Note:** this README and the rest of documentation are updated on a per-commit basis,
meaning that they may not correspond to the latest release of Nugget Doom.
If you're seeking information on the version you're using, please refer to the documentation included with it.

### DISCLAIMER
Although the new code has been written with the intention of not breaking demo compatibility, it has not been properly tested yet.
**RECORD DEMOS AT YOUR OWN RISK!**

## Features

Note that this feature list is relative to [Woof!'s](https://github.com/fabiangreffrath/woof/blob/master/README.md#key-features);
read the latter for more details.
Some features were first implemented in Nugget Doom and later in Woof!, and so they're not listed here anymore.

Most of Nugget Doom's features come from other sources, like source ports and mods;
the initial implementations for some are **ported from (p.f.)** said sources, while others are just **inspired by (i.b.)** them.
These acknowledgements are included in the feature lists below; be aware that some might be inaccurate or outright missing.

A few settings are labeled as **_CFG-only_**: they can only be toggled by editing `nugget-doom.cfg`.
For these settings, their CVAR names are provided alongside the _CFG-only_ label as guidance.

### General

- **Extended FOV range:** [20, 140]
- **Stretch viewport to fit window** setting (CFG-only: `stretch_to_fit`) [i.b. and partially p.f. Crispy Doom; i.b. ZDoom]
- **Set _Air Absorption_ and _Doppler Effect_ to 5 by default**
- **FOV-based sky stretching** setting (CFG-only: `fov_stretchsky`)
- **Tweaked _Stretch Short Skies_ algorithm**
- **Restored _Menu Backdrop Style_ menu item**
- **_Black Fade_ screen wipe**
- **Extended _Level Brightness_ range:** [-8, 8]
- **_"Direct + Auto"_ mode for Vertical Aiming**
- **_Direct Vertical Aiming_ for melee attacks**
- **_Move Over/Under Things_** setting [partially p.f. Crispy Doom, DSDA-Doom]
- **Jumping** (default key: <kbd>Alt</kbd>, must be enabled first) [p.f. Crispy Doom]
- **Crouching/ducking** (default key: <kbd>C</kbd>, must be enabled first) [i.b. ZDoom]
- **_View Height_** setting, which allows to enter a custom POV height value in the [32, 56] range [i.b. Brutal Doom]
- **Flinching** setting, to flinch upon landing and/or taking damage
- **_Explosion Shake Effect_** setting (intensity determined by the CFG-only `explosion_shake_intensity_pct` CVAR) [i.b. Doom Retro]
- **_Subtle Idle Bobbing/Breathing_** setting [p.f. International Doom]
- **_Teleporter Zoom_** setting [i.b. ZDoom]
- **_Death Camera_** setting [i.b. ZDoom]
- **_Freecam_**, which repurposes the following inputs:
  - _Cycle Chasecam_ to toggle control between the camera and the player
  - _Use_ to reset the camera to the player's POV
  - _Fire_ to lock onto and let go of a sentient thing's POV
  - _Previous/Next Weapon_ to adjust the camera's movement speed
  - Rapid _Strafe On_ double-press to center the camera vertically
- **_Chasecam_** [i.b. ZDoom]
- **_Background for all menus_** setting
- **_No palette tint in menus_** setting [i.b. Crispy Doom]
- **_HUD/Menu Shadows_** setting (translucency determined by the CFG-only `hud_menu_shadows_filter_pct` CVAR) [i.b. CRL]
- **_Flip Levels_** setting
- **_No Berserk Tint_** setting
- **_No Radiation Suit Tint_** setting
- **_Night-Vision Visor Effect_** setting [i.b. International Doom]
- **_Damage Tint Cap_** and **_Bonus Tint Cap_**, to attenuate or disable said screen tinting
- **_Fake Contrast_** setting
- Toggle for **Diminished Lighting** (CFG-only: `diminished_lighting`)
- **_Screen Wipe speed percentage_** setting
- **_Alternative Intermission Background_** setting, to replace the intermission graphic with a darkened rotating camera view
- **_Sound Clipping Distance_** selection, to optionally double the distance at which sound effects become audible
- **_One-Key Quick Save/Load_** setting, to skip the confirmation prompt
- **Autosaving**
  - Autosaves are meant to serve as backups: they're stored in the same folder as manual saves,
    aren't accessible in-game, and lack preview snapshots, but otherwise function like normal saves.
    They must be renamed to appear in the save/load menus.
- **Rewinding** [i.b. DSDA-Doom]
- **_Play Internal Demos_** setting
- **_Quick "Quit Game"_** setting, to skip the confirmation prompt [p.f. Crispy Doom]
- Toggle for **_Weapon Flash Lighting_** [p.f. Crispy Doom]
- Toggle for **_Weapon Flash Sprite_** [p.f. Crispy Doom]
- Toggle for **_Invulnerability Colormap_** [p.f. Crispy Doom]

### Weapons

- **Extended _View/Weapon Bob_ percentages**
- Restored **_Weapon Recoil_** menu item
- **_No Horizontal Autoaim_** setting
- **_Switch [Weapon] on Pickup_** setting
- **_Allow [Weapon] Switch Interruption_** setting
- **_Prev/Next Skip Ammoless Weapons_** setting, to make the previous/next-weapon buttons skip weapons with insufficient ammo
- Key to **equip last used weapon** [i.b. Cherry Doom]
- **_Horizontal_ Weapon Centering** setting [i.b. DSDA-Doom]
- **Always Bob** setting (CFG-only: `always_bob`)
- **_Bobbing Styles_** selection [p.f. Zandronum]
- **_Weapon Inertia_** setting (scale determined by the CFG-only `weapon_inertia_scale_pct` CVAR) [by _ceski_]
- **_Weapon Squat Upon Landing_** setting [p.f. Crispy Doom]
- **_Translucent Flashes_** setting (translucency determined by the CFG-only `translucent_pspr_pct` CVAR) [i.b. Crispy Doom]
- **Show Berserk availability** setting [partially p.f. Crispy Doom]
- **"Correct" first person sprite centering** setting, to toggle the 1px first-person sprite misalignment (CFG-only: `sx_fix`)

### Status Bar/HUD

- **Nugget HUD**, highly customizable through means of the **`NUGHUD` lump** (see `docs/nughud.md`)
- **Crosshair:**
  - Translucency;
  - Vertical-only target lock-on;
  - Horizontal-autoaim indicators;
  - Option to account for fuzzy targets [i.b. From Doom With Love];
  - Dedicated toggle key.
- **Secret count in "secret revealed" message** [p.f. Crispy Doom]
- **Show Save Messages** setting (CFG-only: `show_save_messages`)
- **_Milestone-Completion Announcements_** setting, to report completion of milestones (e.g. all items acquired)
- **_Message Flash_** setting
- Restored **_Upward Message Scrolling_** setting, and enabled it by default (CFG-only: `hud_msg_scrollup`)
- **Restored various message-related menu items**
- **_Show Powerup Timers_** setting
- **Show SSG availability in the Shotgun slot of the Arms widget** setting (CFG-only: `show_ssg`) [p.f. Crispy Doom]
- **_Level-Stats Format_** settings [i.b. Crispy Doom]
- **_Highlight Current/Pending Weapon_** setting [i.b. PSX Doom]
- **_Alternative Arms Display_** setting, to show the Chainsaw or SSG's availability on the Arms widget in place of the trivial Pistol
- **Event Timers:**
  - _Teleport Timer_ [i.b. Crispy Doom];
  - _Key-Pickup Timer_ [same as above].
- **Extended HUD color customization**
- **Armor count is colored gray when in God Mode**
- **Support for Berserk (`STBERSRK`) and Infinite Ammo (`STINFNTY`) icons**
- **Support for HUD icons**:
  - Level-stats widget: `HUDKILLS`, `HUDITEMS`, `HUDSCRTS`
  - Powerup-timers widget: `HUDINVIS`, `HUDINVUL`, `HUDLIGHT`, `HUDSUIT`

### Automap

- **Minimap mode** [i.b. DSDA-Doom]
- Key to **_Blink [Automap] Marks_** (default: <kbd>B</kbd>)
- **_Tag Finder_**: Position the Automap pointer over a sector and press the _Tag Finder_ key to highlight its activator line(s), and vice versa [p.f. PrBoomX]
- Key to **_Teleport to Automap pointer_**
- **_Show Thing Hitboxes_** setting
- **Color for trigger lines**, used with IDDT (CFG-only: `mapcolor_trig`)

### Enemies

- **_Extra Gibbing_** setting, to force Berserk Fist/Chainsaw/SSG gibbing (configurable through the CFG-only `extra_gibbing_#` CVARs) [i.b. Smooth Doom]
- **_Bloodier Gibbing_** setting [i.b. Smooth Doom]
- **_Toss Items Upon Death_** setting [i.b. ZDoom, Doom Retro]
- **_Selective Fuzz Darkening_** setting [by _ceski_]

### Doom Compatibility settings

All of these are CFG-only, so their CVAR names are included.

- Bruiser attack (`A_BruisAttack()`) doesn't face target (`comp_bruistarget`)
- Disable melee snapping (`comp_nomeleesnap`)
- Double autoaim range (`comp_longautoaim`)
- Fix Lost Soul colliding with items (`comp_lscollision`)
- Lost Soul forgets target upon impact (`comp_lsamnesia`)
- Fuzzy things bleed fuzzy blood (`comp_fuzzyblood`) [i.b. Crispy Doom]
- Non-bleeders don't bleed when crushed (`comp_nonbleeders`) [i.b. Crispy Doom]
- Attackers face fuzzy targets straight (`comp_faceshadow`)
- Fix lopsided Icon of Sin explosions (`comp_iosdeath`)
- Permanent IDCHOPPERS invulnerability (`comp_choppers`)
- Blazing doors reopen with wrong sound (`comp_blazing2`) [p.f. Crispy Doom]
- Manually toggled moving doors are silent (`comp_manualdoor`) [p.f. Crispy Doom]
- Corrected switch sound source (`comp_switchsource`) [p.f. Crispy Doom]
- Chaingun makes two sounds with one bullet (`comp_cgundblsnd`)
- Chaingunner uses pistol/chaingun sound (`comp_cgunnersfx`)
- Arch-Vile fire plays flame start sound (`comp_flamst`) [p.f. Crispy Doom]
- Play `DSNOWAY` instead of `DSOOF` when failing to use key-locked triggers (`comp_keynoway`)
- Higher god-mode face priority (`comp_godface`) [p.f. International Doom]
- Dead players can still play "oof" sound (`comp_deadoof`) [p.f. Crispy Doom]
- Use improved powerup run-out effect (`comp_powerrunout`)
- Use unused pain/bonus palettes (`comp_unusedpals`)
- Key pickup resets palette (`comp_keypal`)

### Cheats

- **_'FULLCLIP'_** for infinite ammo
- **_'VALIANT'_** for fast weapons [i.b. ZDoom]
  - **_'BOBBERS'_** serves as a shortcut to toggle the two cheats mentioned above, plus IDFA
- **_'GIBBERS'_** to force gibbing on dying enemies, independently of damage dealt
- **_'IDFLY'_** to fly (uses jumping/crouching keys) [i.b. PrBoom+, ZDoom]
- **_'SUMMON'_** to spawn an actor based on its type index [i.b. ZDoom, PrBoomX]
- **_'IDDF'_** to find a key on the Automap
- **_'RESURRECT' / 'IDRES'_** to resurrect the player without toggling IDDQD [i.b. ZDoom]
- **_'LINETARGET'_** to give some info on the player's linetarget [i.b. ZDoom]
- **_'MDK'_** to perform a hitscan attack of 1-million damage [i.b. ZDoom]
- **_'SAITAMA'_** to enable the MDK Fist
- **_'BOOMCAN'_** for explosive hitscan attacks
- **_'NEXTMAP'_** to exit the level [i.b. ZDoom]
- **_'NEXTSECRET'_** to exit the level as if using a secret exit [i.b. ZDoom]
- **_'TURBO'_** to change the player speed in-game
- **_'TNTEM'_** as an alternative to _'KILLEM'_
- **_'FPS'_** as a replacement for _'SHOWFPS'_
- **Mid-air control while in noclipping mode** [p.f. Crispy Doom]
- **Key-binding for Computer Area Map cheat**
- Reenabled **_'NOMOMENTUM'_** cheat [p.f. Crispy Doom]

For more details, see the _New Nugget Doom cheats_ section of `docs/cheats.md`.

### Miscellaneous

- **Customizable skill level**, supporting all vanilla settings and a new one for duplicate monster spawns
- **SDL render driver** setting (CFG-only: `sdl_renderdriver`) [p.f. Woof! 14.0.0]
- Key to **toggle zoom**
- **Setting of savegame and screenshot paths in config file** (CFG-only: `savegame_dir` and `screenshot_dir`)
- **Keep palette changes in screenshots** setting (CFG-only: `screenshot_palette`)
- **Allowed mouselook while dead**
- **Interactive character cast** (Turn keys to rotate enemy, Run key to gib, Strafe keys to skip) [p.f. Crispy Doom]
- **Support for optional sounds:** [partially p.f. Crispy Doom]
  - Jumping: `DSPLJUMP`;
  - Landing: `DSPLLAND`;
  - Key-locked door: `DSLOCKED`;
  - Key pickup: `DSKEYUP`;
  - Key blinking on HUD: `DSKEYBNK`;
  - Menus: `DSMNUOPN`, `DSMNUCLS`, `DSMNUACT`, `DSMNUBAK`, `DSMNUMOV`, `DSMNUSLI`, `DSMNUERR`;
  - Intermission: `DSINTTIC`, `DSINTTOT`, `DSINTNEX`, `DSINTNET`, `DSINTDMS`;
  - Health-based player pain sounds: `DSPPAI25`, `DSPPAI50`, `DSPPAI75`, `DSPPA100` [i.b. ZDoom].
- **Customizable darkening level for dark menu background and Automap overlay** (CFG-only: `menu_background_darkening` and `automap_overlay_darkening`) [i.b. Cherry Doom]
- The **Chaingun can be given a custom sound effect** by providing a `DSCHGUN` sound effect lump
- Toggle to **disable the Killough-face easter egg** (CFG-only: `no_killough_face`)
- Toggle to **allow chat in singleplayer** (CFG-only: `sp_chat`)
- Made `force_flip_pan` affect the _OpenAL 3D_ sound module [by _ceski_]
- Restored `-cdrom` command-line parameter
- Decreased minimum window size to 200p (240p with aspect-ratio correction)

# Releases

Source code and Windows binaries (MSVC builds for Windows 7 and newer) for the latest release can be found on the [Release](https://github.com/MrAlaux/Nugget-Doom/releases/latest) page.

The most recent list of changes can be found in the [Changelog](https://github.com/MrAlaux/Nugget-Doom/blob/master/CHANGELOG.md).

A complete history of changes and releases can be found on the [Releases](https://github.com/MrAlaux/Nugget-Doom/releases) page.

## Versioning

Nugget Doom follows a fairly simple (albeit arbitrary) **X.Y.Z** versioning system:

- **X** is increased in the event of major implementations, as were arbitrary/dynamic resolution and voxel support;
- **Y** is increased in the event of minor implementations, such as a new cheat;
- **Z** is increased in the event of bug fixes or text/code reformatting.

Incrementing any of the first values will reset the latter (i.e. a major change to 1.1.2 would shift it to 2.0.0).

The merging of changes from Woof! releases may affect any of the version values, but not necessarily in the same way as Woof!'s own version (i.e. `Woof! 11.Y.Z -> 12.Y.Z` doesn't necessarily mean `Nugget 2.Y.Z -> 3.Y.Z`).

# Compiling

As a Woof! fork, its build instructions should also apply here:

The Nugget Doom source code is available at GitHub: <https://github.com/MrAlaux/Nugget-Doom>.

## Linux, and Windows with MSYS2

The following build system and libraries need to be installed:
 
 * [CMake](https://cmake.org) (>= 3.9)
 * [SDL2](https://github.com/libsdl-org/SDL/tree/SDL2) (>= 2.0.18)
 * [SDL2_net](https://github.com/libsdl-org/SDL_net)
 * [openal-soft](https://github.com/kcat/openal-soft) (>= 1.22.0 for PC Speaker emulation)
 * [libsndfile](https://github.com/libsndfile/libsndfile) (>= 1.1.0 for MPEG support)
 * [cJSON](https://github.com/DaveGamble/cJSON)
 * [fluidsynth](https://github.com/FluidSynth/fluidsynth) (>= 2.2.0, optional)
 * [libxmp](https://github.com/libxmp/libxmp) (optional)
 
Usually your distribution should have the corresponding packages in its repositories, and if your distribution has "dev" versions of those libraries, those are the ones you'll need.

Once installed, compilation should be as simple as:

```
 cd nugget-doom
 mkdir build; cd build
 cmake ..
 make
```

After successful compilation the resulting binary can be found in the `src/` directory.

## Windows with Visual Studio

Visual Studio 2019 and [VSCode](https://code.visualstudio.com/) comes with built-in support for CMake by opening the source tree as a folder.

Install vcpkg <https://github.com/Microsoft/vcpkg#quick-start-windows>. Integrate it into CMake or use toolchain file:
```
 cd nugget-doom
 cmake -B build -DCMAKE_TOOLCHAIN_FILE="[path to vcpkg]/scripts/buildsystems/vcpkg.cmake"
 cmake --build build
```
CMake will automatically download and build all dependencies for you.

# Contact

The homepage for Nugget Doom is <https://github.com/MrAlaux/Nugget-Doom>.

Please report any bugs, glitches or crashes that you encounter to the GitHub [Issue Tracker](https://github.com/MrAlaux/Nugget-Doom/issues).

## Acknowledgement

Help was provided by:

- [_atsb_ (a.k.a. _Gibbon_)](https://github.com/atsb);
- [_Brad Harding_](https://github.com/bradharding);
- [_ceski_](https://github.com/ceski-1);
- [_Fabian Greffrath_](https://github.com/fabiangreffrath);
- [_melak47_](https://github.com/melak47);
- [_Roman Fomin_ (a.k.a. _rfomin_)](https://github.com/rfomin);
- [_Ryan Krafnick_ (a.k.a. _kraflab_)](https://github.com/kraflab).

Thanks to all of you!

# Legalese

Files: `*`  
Copyright:  
 © 1993-1996 Id Software, Inc.;  
 © 1993-2008 Raven Software;  
 © 1999 by id Software, Chi Hoang, Lee Killough, Jim Flynn, Rand Phares, Ty Halderman;  
 © 1999-2004 by Jess Haas, Nicolas Kalkhof, Colin Phipps, Florian Schulze;  
 © 2004 James Haley;  
 © 2005-2006 by Florian Schulze, Colin Phipps, Neil Stevens, Andrey Budko;  
 © 2005-2018 Simon Howard;  
 © 2006 Ben Ryves;  
 © 2007-2011 Moritz "Ripper" Kroll;  
 © 2008-2019 Simon Judd;  
 © 2017 Christoph Oelckers;  
 © 2019 Fernando Carmona Varo;  
 © 2020 Alex Mayfield;  
 © 2020 JadingTsunami;  
 © 2020-2024 Fabian Greffrath;  
 © 2020-2024 Roman Fomin;  
 © 2021-2022 Ryan Krafnick;  
 © 2021-2024 Alaux;  
 © 2022 Julia Nechaevskaya;  
 © 2022-2024 ceski;  
 © 2023 Andrew Apted;  
 © 2023 liPillON.   
License: [GPL-2.0+](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html)

Files: `src/i_flickstick.*, src/i_gyro.*`  
Copyright:  
 © 2018-2021 Julian "Jibb" Smart;  
 © 2021-2024 Nicolas Lessard;  
 © 2024 ceski.  
License: [MIT](https://opensource.org/licenses/MIT)

Files: `src/nano_bsp.*`  
Copyright: © 2023 Andrew Apted.  
License: [MIT](https://opensource.org/licenses/MIT)

Files: `src/u_scanner.*`  
Copyright:  
 © 2010 Braden "Blzut3" Obrzut;  
 © 2019 Fernando Carmona Varo.  
License: [BSD-3-Clause](https://opensource.org/licenses/BSD-3-Clause)

Files: `src/v_flextran.*`  
Copyright:  
 © 2013 James Haley et al.;  
 © 1998-2012 Marisa Heit.  
License: [GPL-3.0+](https://www.gnu.org/licenses/gpl-3.0)

Files: `src/v_video.*`  
Copyright:  
 © 1999 by id Software, Chi Hoang, Lee Killough, Jim Flynn, Rand Phares, Ty Halderman;  
 © 2013 James Haley et al.  
License: [GPL-3.0+](https://www.gnu.org/licenses/gpl-3.0)

Files: `base/all-all/sprites/pls*`  
Copyright: © 2001-2019 Contributors to the Freedoom project.  
License: [BSD-3-Clause](https://opensource.org/licenses/BSD-3-Clause)

Files: `base/all-all/sprites/tnt1b0.png`  
Copyright: © 2023 Korp.  
License: [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/)

Files: `base/all-all/dsdg*, base/all-all/sprites/dog*`  
Copyright:  
 © 2017 Nash Muhandes;  
 © apolloaiello;  
 © TobiasKosmos.  
License: [CC-BY-3.0](https://creativecommons.org/licenses/by/3.0/) and [CC0-1.0](https://creativecommons.org/publicdomain/zero/1.0/)

Files: `cmake/FindSDL2.cmake, cmake/FindSDL2_net.cmake`  
Copyright: © 2018 Alex Mayfield.  
License: [BSD-3-Clause](https://opensource.org/licenses/BSD-3-Clause)

Files: `data/nugget-doom.ico, data/nugget-doom.png, src/icon.c, data/setup.ico, data/nugget-doom-setup.png, setup/setup_icon.c`  
Copyright: © 2022 Korp.  
License: [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/)

Files: `opl/*`  
Copyright:  
 © 2005-2014 Simon Howard;  
 © 2013-2018 Alexey Khokholov (Nuke.YKT).  
License: [GPL-2.0+](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html)

Files: `soundfonts/TimGM6mb.sf2`  
Copyright:  
 © 2004 Tim Brechbill;  
 © 2010 David Bolton.  
License: [GPL-2.0](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html)

Files: `textscreen/*`  
Copyright:  
 © 1993-1996 Id Software, Inc.;  
 © 2002-2004 The DOSBox Team;  
 © 2005-2017 Simon Howard.  
License: [GPL-2.0+](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html)

Files: `third-party/miniz/*`  
Copyright:  
 © 2010-2014 Rich Geldreich and Tenacious Software LLC;  
 © 2013-2014 RAD Game Tools and Valve Software.  
License: [MIT](https://opensource.org/licenses/MIT)

Files: `third-party/pffft/*`  
Copyright:  
 © 2004 The University Corporation for Atmospheric Research ("UCAR");  
 © 2013 Julien Pommier.  
License: [FFTPACK License](https://bitbucket.org/jpommier/pffft/src/master/pffft.h)

Files: `third-party/spng/*`  
Copyright: © 2018-2023 Randy.  
License: [BSD-2-Clause](https://opensource.org/license/bsd-2-clause)

Files: `win32/win_opendir.*`  
Copyright: 2019 win32ports
License: [MIT](https://opensource.org/licenses/MIT)
