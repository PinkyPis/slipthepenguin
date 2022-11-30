// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id: sounds.c,v 1.3 1998/05/03 22:44:25 killough Exp $
//
//  Copyright (C) 1999 by
//  id Software, Chi Hoang, Lee Killough, Jim Flynn, Rand Phares, Ty Halderman
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 
//  02111-1307, USA.
//
//
// DESCRIPTION:
//      Created by a sound utility.
//      Kept as a sample, DOOM2 sounds.
//
//-----------------------------------------------------------------------------

// killough 5/3/98: reformatted

#include "doomtype.h"
#include "sounds.h"

//
// Information about all the music
//

musicinfo_t S_music[] = {
  { 0 },
  { "e1m1", 0 },
  { "e1m2", 0 },
  { "e1m3", 0 },
  { "e1m4", 0 },
  { "e1m5", 0 },
  { "e1m6", 0 },
  { "e1m7", 0 },
  { "e1m8", 0 },
  { "e1m9", 0 },
  { "e2m1", 0 },
  { "e2m2", 0 },
  { "e2m3", 0 },
  { "e2m4", 0 },
  { "e2m5", 0 },
  { "e2m6", 0 },
  { "e2m7", 0 },
  { "e2m8", 0 },
  { "e2m9", 0 },
  { "e3m1", 0 },
  { "e3m2", 0 },
  { "e3m3", 0 },
  { "e3m4", 0 },
  { "e3m5", 0 },
  { "e3m6", 0 },
  { "e3m7", 0 },
  { "e3m8", 0 },
  { "e3m9", 0 },
  { "e4m1", 0 },
  { "e4m2", 0 },
  { "e4m3", 0 },
  { "e4m4", 0 },
  { "e4m5", 0 },
  { "e4m6", 0 },
  { "e4m7", 0 },
  { "e4m8", 0 },
  { "e4m9", 0 },
  { "inter", 0 },
  { "intro", 0 },
  { "bunny", 0 },
  { "victor", 0 },
  { "introa", 0 },
  { "runnin", 0 },
  { "stalks", 0 },
  { "countd", 0 },
  { "betwee", 0 },
  { "doom", 0 },
  { "the_da", 0 },
  { "shawn", 0 },
  { "ddtblu", 0 },
  { "in_cit", 0 },
  { "dead", 0 },
  { "stlks2", 0 },
  { "theda2", 0 },
  { "doom2", 0 },
  { "ddtbl2", 0 },
  { "runni2", 0 },
  { "dead2", 0 },
  { "stlks3", 0 },
  { "romero", 0 },
  { "shawn2", 0 },
  { "messag", 0 },
  { "count2", 0 },
  { "ddtbl3", 0 },
  { "ampie", 0 },
  { "theda3", 0 },
  { "adrian", 0 },
  { "messg2", 0 },
  { "romer2", 0 },
  { "tense", 0 },
  { "shawn3", 0 },
  { "openin", 0 },
  { "evil", 0 },
  { "ultima", 0 },
  { "read_m", 0 },
  { "dm2ttl", 0 },
  { "dm2int", 0 },
  { NULL, 0 }, // NUMMUSIC
  { "musinfo", 0 }
};

//
// Information about all the sfx
//
// killough 12/98: 
// Reimplemented 'singularity' flag, adjusting many sounds below

sfxinfo_t original_S_sfx[NUMSFX] = {
  { 0 },  // S_sfx[0] needs to be a dummy for odd reasons.

  { "pistol", sg_none,   64, 0, -1, -1, 0 },
  { "shotgn", sg_none,   64, 0, -1, -1, 0 },
  { "sgcock", sg_none,   64, 0, -1, -1, 0 },
  { "dshtgn", sg_none,   64, 0, -1, -1, 0 },
  { "dbopn",  sg_none,   64, 0, -1, -1, 0 },
  { "dbcls",  sg_none,   64, 0, -1, -1, 0 },
  { "dbload", sg_none,   64, 0, -1, -1, 0 },
  { "plasma", sg_none,   64, 0, -1, -1, 0 },
  { "bfg",    sg_none,   64, 0, -1, -1, 0 },
  { "sawup",  sg_none,   64, 0, -1, -1, 0 },
  { "sawidl", sg_none,  118, 0, -1, -1, 0 },
  { "sawful", sg_none,   64, 0, -1, -1, 0 },
  { "sawhit", sg_none,   64, 0, -1, -1, 0 },
  { "rlaunc", sg_none,   64, 0, -1, -1, 0 },
  { "rxplod", sg_none,   70, 0, -1, -1, 0 },
  { "firsht", sg_none,   70, 0, -1, -1, 0 },
  { "firxpl", sg_none,   70, 0, -1, -1, 0 },
  { "pstart", sg_none,  100, 0, -1, -1, 0 },
  { "pstop",  sg_none,  100, 0, -1, -1, 0 },
  { "doropn", sg_none,  100, 0, -1, -1, 0 },
  { "dorcls", sg_none,  100, 0, -1, -1, 0 },
  { "stnmov", sg_none,  119, 0, -1, -1, 0 },
  { "swtchn", sg_none,   78, 0, -1, -1, 0 },
  { "swtchx", sg_none,   78, 0, -1, -1, 0 },
  { "plpain", sg_none,   96, 0, -1, -1, 0 },
  { "dmpain", sg_none,   96, 0, -1, -1, 0 },
  { "popain", sg_none,   96, 0, -1, -1, 0 },
  { "vipain", sg_none,   96, 0, -1, -1, 0 },
  { "mnpain", sg_none,   96, 0, -1, -1, 0 },
  { "pepain", sg_none,   96, 0, -1, -1, 0 },
  { "slop",   sg_none,   78, 0, -1, -1, 0 },
  { "itemup", sg_itemup, 78, 0, -1, -1, 0 },
  { "wpnup",  sg_wpnup,  78, 0, -1, -1, 0 },
  { "oof",    sg_oof,    96, 0, -1, -1, 0 },
  { "telept", sg_none,   32, 0, -1, -1, 0 },
  { "posit1", sg_none,   98, 0, -1, -1, 0 },
  { "posit2", sg_none,   98, 0, -1, -1, 0 },
  { "posit3", sg_none,   98, 0, -1, -1, 0 },
  { "bgsit1", sg_none,   98, 0, -1, -1, 0 },
  { "bgsit2", sg_none,   98, 0, -1, -1, 0 },
  { "sgtsit", sg_none,   98, 0, -1, -1, 0 },
  { "cacsit", sg_none,   98, 0, -1, -1, 0 },
  { "brssit", sg_none,   94, 0, -1, -1, 0 },
  { "cybsit", sg_none,   92, 0, -1, -1, 0 },
  { "spisit", sg_none,   90, 0, -1, -1, 0 },
  { "bspsit", sg_none,   90, 0, -1, -1, 0 },
  { "kntsit", sg_none,   90, 0, -1, -1, 0 },
  { "vilsit", sg_none,   90, 0, -1, -1, 0 },
  { "mansit", sg_none,   90, 0, -1, -1, 0 },
  { "pesit",  sg_none,   90, 0, -1, -1, 0 },
  { "sklatk", sg_none,   70, 0, -1, -1, 0 },
  { "sgtatk", sg_none,   70, 0, -1, -1, 0 },
  { "skepch", sg_none,   70, 0, -1, -1, 0 },
  { "vilatk", sg_none,   70, 0, -1, -1, 0 },
  { "claw",   sg_none,   70, 0, -1, -1, 0 },
  { "skeswg", sg_none,   70, 0, -1, -1, 0 },
  { "pldeth", sg_none,   32, 0, -1, -1, 0 },
  { "pdiehi", sg_none,   32, 0, -1, -1, 0 },
  { "podth1", sg_none,   70, 0, -1, -1, 0 },
  { "podth2", sg_none,   70, 0, -1, -1, 0 },
  { "podth3", sg_none,   70, 0, -1, -1, 0 },
  { "bgdth1", sg_none,   70, 0, -1, -1, 0 },
  { "bgdth2", sg_none,   70, 0, -1, -1, 0 },
  { "sgtdth", sg_none,   70, 0, -1, -1, 0 },
  { "cacdth", sg_none,   70, 0, -1, -1, 0 },
  { "skldth", sg_none,   70, 0, -1, -1, 0 },
  { "brsdth", sg_none,   32, 0, -1, -1, 0 },
  { "cybdth", sg_none,   32, 0, -1, -1, 0 },
  { "spidth", sg_none,   32, 0, -1, -1, 0 },
  { "bspdth", sg_none,   32, 0, -1, -1, 0 },
  { "vildth", sg_none,   32, 0, -1, -1, 0 },
  { "kntdth", sg_none,   32, 0, -1, -1, 0 },
  { "pedth",  sg_none,   32, 0, -1, -1, 0 },
  { "skedth", sg_none,   32, 0, -1, -1, 0 },
  { "posact", sg_none,  120, 0, -1, -1, 0 },
  { "bgact",  sg_none,  120, 0, -1, -1, 0 },
  { "dmact",  sg_none,  120, 0, -1, -1, 0 },
  { "bspact", sg_none,  100, 0, -1, -1, 0 },
  { "bspwlk", sg_none,  100, 0, -1, -1, 0 },
  { "vilact", sg_none,  100, 0, -1, -1, 0 },
  { "noway",  sg_oof,    78, 0, -1, -1, 0 },
  { "barexp", sg_none,   60, 0, -1, -1, 0 },
  { "punch",  sg_none,   64, 0, -1, -1, 0 },
  { "hoof",   sg_none,   70, 0, -1, -1, 0 },
  { "metal",  sg_none,   70, 0, -1, -1, 0 },
  { "chgun",  sg_none,   64, &original_S_sfx[sfx_pistol], 150, 0, 0 },
  { "tink",   sg_none,   60, 0, -1, -1, 0 },
  { "bdopn",  sg_none,  100, 0, -1, -1, 0 },
  { "bdcls",  sg_none,  100, 0, -1, -1, 0 },
  { "itmbk",  sg_none,  100, 0, -1, -1, 0 },
  { "flame",  sg_none,   32, 0, -1, -1, 0 },
  { "flamst", sg_none,   32, 0, -1, -1, 0 },
  { "getpow", sg_getpow, 60, 0, -1, -1, 0 },
  { "bospit", sg_none,   70, 0, -1, -1, 0 },
  { "boscub", sg_none,   70, 0, -1, -1, 0 },
  { "bossit", sg_none,   70, 0, -1, -1, 0 },
  { "bospn",  sg_none,   70, 0, -1, -1, 0 },
  { "bosdth", sg_none,   70, 0, -1, -1, 0 },
  { "manatk", sg_none,   70, 0, -1, -1, 0 },
  { "mandth", sg_none,   70, 0, -1, -1, 0 },
  { "sssit",  sg_none,   70, 0, -1, -1, 0 },
  { "ssdth",  sg_none,   70, 0, -1, -1, 0 },
  { "keenpn", sg_none,   70, 0, -1, -1, 0 },
  { "keendt", sg_none,   70, 0, -1, -1, 0 },
  { "skeact", sg_none,   70, 0, -1, -1, 0 },
  { "skesit", sg_none,   70, 0, -1, -1, 0 },
  { "skeatk", sg_none,   70, 0, -1, -1, 0 },
  { "radio",  sg_none,   60, 0, -1, -1, 0 },

  // killough 11/98: dog sounds
  { "dgsit",  sg_none,   98, 0, -1, -1, 0 },
  { "dgatk",  sg_none,   70, 0, -1, -1, 0 },
  { "dgact",  sg_none,  120, 0, -1, -1, 0 },
  { "dgdth",  sg_none,   70, 0, -1, -1, 0 },
  { "dgpain", sg_none,   96, 0, -1, -1, 0 },

  // [crispy] play DSSECRET if available
  { "secret",  sg_none,  100, 0, -1, -1, 0 },

  [500] = { "fre000", sg_none, 127, 0, -1, -1, 0 },
  [501] = { "fre001", sg_none, 127, 0, -1, -1, 0 },
  [502] = { "fre002", sg_none, 127, 0, -1, -1, 0 },
  [503] = { "fre003", sg_none, 127, 0, -1, -1, 0 },
  [504] = { "fre004", sg_none, 127, 0, -1, -1, 0 },
  [505] = { "fre005", sg_none, 127, 0, -1, -1, 0 },
  [506] = { "fre006", sg_none, 127, 0, -1, -1, 0 },
  [507] = { "fre007", sg_none, 127, 0, -1, -1, 0 },
  [508] = { "fre008", sg_none, 127, 0, -1, -1, 0 },
  [509] = { "fre009", sg_none, 127, 0, -1, -1, 0 },
  [510] = { "fre010", sg_none, 127, 0, -1, -1, 0 },
  [511] = { "fre011", sg_none, 127, 0, -1, -1, 0 },
  [512] = { "fre012", sg_none, 127, 0, -1, -1, 0 },
  [513] = { "fre013", sg_none, 127, 0, -1, -1, 0 },
  [514] = { "fre014", sg_none, 127, 0, -1, -1, 0 },
  [515] = { "fre015", sg_none, 127, 0, -1, -1, 0 },
  [516] = { "fre016", sg_none, 127, 0, -1, -1, 0 },
  [517] = { "fre017", sg_none, 127, 0, -1, -1, 0 },
  [518] = { "fre018", sg_none, 127, 0, -1, -1, 0 },
  [519] = { "fre019", sg_none, 127, 0, -1, -1, 0 },
  [520] = { "fre020", sg_none, 127, 0, -1, -1, 0 },
  [521] = { "fre021", sg_none, 127, 0, -1, -1, 0 },
  [522] = { "fre022", sg_none, 127, 0, -1, -1, 0 },
  [523] = { "fre023", sg_none, 127, 0, -1, -1, 0 },
  [524] = { "fre024", sg_none, 127, 0, -1, -1, 0 },
  [525] = { "fre025", sg_none, 127, 0, -1, -1, 0 },
  [526] = { "fre026", sg_none, 127, 0, -1, -1, 0 },
  [527] = { "fre027", sg_none, 127, 0, -1, -1, 0 },
  [528] = { "fre028", sg_none, 127, 0, -1, -1, 0 },
  [529] = { "fre029", sg_none, 127, 0, -1, -1, 0 },
  [530] = { "fre030", sg_none, 127, 0, -1, -1, 0 },
  [531] = { "fre031", sg_none, 127, 0, -1, -1, 0 },
  [532] = { "fre032", sg_none, 127, 0, -1, -1, 0 },
  [533] = { "fre033", sg_none, 127, 0, -1, -1, 0 },
  [534] = { "fre034", sg_none, 127, 0, -1, -1, 0 },
  [535] = { "fre035", sg_none, 127, 0, -1, -1, 0 },
  [536] = { "fre036", sg_none, 127, 0, -1, -1, 0 },
  [537] = { "fre037", sg_none, 127, 0, -1, -1, 0 },
  [538] = { "fre038", sg_none, 127, 0, -1, -1, 0 },
  [539] = { "fre039", sg_none, 127, 0, -1, -1, 0 },
  [540] = { "fre040", sg_none, 127, 0, -1, -1, 0 },
  [541] = { "fre041", sg_none, 127, 0, -1, -1, 0 },
  [542] = { "fre042", sg_none, 127, 0, -1, -1, 0 },
  [543] = { "fre043", sg_none, 127, 0, -1, -1, 0 },
  [544] = { "fre044", sg_none, 127, 0, -1, -1, 0 },
  [545] = { "fre045", sg_none, 127, 0, -1, -1, 0 },
  [546] = { "fre046", sg_none, 127, 0, -1, -1, 0 },
  [547] = { "fre047", sg_none, 127, 0, -1, -1, 0 },
  [548] = { "fre048", sg_none, 127, 0, -1, -1, 0 },
  [549] = { "fre049", sg_none, 127, 0, -1, -1, 0 },
  [550] = { "fre050", sg_none, 127, 0, -1, -1, 0 },
  [551] = { "fre051", sg_none, 127, 0, -1, -1, 0 },
  [552] = { "fre052", sg_none, 127, 0, -1, -1, 0 },
  [553] = { "fre053", sg_none, 127, 0, -1, -1, 0 },
  [554] = { "fre054", sg_none, 127, 0, -1, -1, 0 },
  [555] = { "fre055", sg_none, 127, 0, -1, -1, 0 },
  [556] = { "fre056", sg_none, 127, 0, -1, -1, 0 },
  [557] = { "fre057", sg_none, 127, 0, -1, -1, 0 },
  [558] = { "fre058", sg_none, 127, 0, -1, -1, 0 },
  [559] = { "fre059", sg_none, 127, 0, -1, -1, 0 },
  [560] = { "fre060", sg_none, 127, 0, -1, -1, 0 },
  [561] = { "fre061", sg_none, 127, 0, -1, -1, 0 },
  [562] = { "fre062", sg_none, 127, 0, -1, -1, 0 },
  [563] = { "fre063", sg_none, 127, 0, -1, -1, 0 },
  [564] = { "fre064", sg_none, 127, 0, -1, -1, 0 },
  [565] = { "fre065", sg_none, 127, 0, -1, -1, 0 },
  [566] = { "fre066", sg_none, 127, 0, -1, -1, 0 },
  [567] = { "fre067", sg_none, 127, 0, -1, -1, 0 },
  [568] = { "fre068", sg_none, 127, 0, -1, -1, 0 },
  [569] = { "fre069", sg_none, 127, 0, -1, -1, 0 },
  [570] = { "fre070", sg_none, 127, 0, -1, -1, 0 },
  [571] = { "fre071", sg_none, 127, 0, -1, -1, 0 },
  [572] = { "fre072", sg_none, 127, 0, -1, -1, 0 },
  [573] = { "fre073", sg_none, 127, 0, -1, -1, 0 },
  [574] = { "fre074", sg_none, 127, 0, -1, -1, 0 },
  [575] = { "fre075", sg_none, 127, 0, -1, -1, 0 },
  [576] = { "fre076", sg_none, 127, 0, -1, -1, 0 },
  [577] = { "fre077", sg_none, 127, 0, -1, -1, 0 },
  [578] = { "fre078", sg_none, 127, 0, -1, -1, 0 },
  [579] = { "fre079", sg_none, 127, 0, -1, -1, 0 },
  [580] = { "fre080", sg_none, 127, 0, -1, -1, 0 },
  [581] = { "fre081", sg_none, 127, 0, -1, -1, 0 },
  [582] = { "fre082", sg_none, 127, 0, -1, -1, 0 },
  [583] = { "fre083", sg_none, 127, 0, -1, -1, 0 },
  [584] = { "fre084", sg_none, 127, 0, -1, -1, 0 },
  [585] = { "fre085", sg_none, 127, 0, -1, -1, 0 },
  [586] = { "fre086", sg_none, 127, 0, -1, -1, 0 },
  [587] = { "fre087", sg_none, 127, 0, -1, -1, 0 },
  [588] = { "fre088", sg_none, 127, 0, -1, -1, 0 },
  [589] = { "fre089", sg_none, 127, 0, -1, -1, 0 },
  [590] = { "fre090", sg_none, 127, 0, -1, -1, 0 },
  [591] = { "fre091", sg_none, 127, 0, -1, -1, 0 },
  [592] = { "fre092", sg_none, 127, 0, -1, -1, 0 },
  [593] = { "fre093", sg_none, 127, 0, -1, -1, 0 },
  [594] = { "fre094", sg_none, 127, 0, -1, -1, 0 },
  [595] = { "fre095", sg_none, 127, 0, -1, -1, 0 },
  [596] = { "fre096", sg_none, 127, 0, -1, -1, 0 },
  [597] = { "fre097", sg_none, 127, 0, -1, -1, 0 },
  [598] = { "fre098", sg_none, 127, 0, -1, -1, 0 },
  [599] = { "fre099", sg_none, 127, 0, -1, -1, 0 },
  [600] = { "fre100", sg_none, 127, 0, -1, -1, 0 },
  [601] = { "fre101", sg_none, 127, 0, -1, -1, 0 },
  [602] = { "fre102", sg_none, 127, 0, -1, -1, 0 },
  [603] = { "fre103", sg_none, 127, 0, -1, -1, 0 },
  [604] = { "fre104", sg_none, 127, 0, -1, -1, 0 },
  [605] = { "fre105", sg_none, 127, 0, -1, -1, 0 },
  [606] = { "fre106", sg_none, 127, 0, -1, -1, 0 },
  [607] = { "fre107", sg_none, 127, 0, -1, -1, 0 },
  [608] = { "fre108", sg_none, 127, 0, -1, -1, 0 },
  [609] = { "fre109", sg_none, 127, 0, -1, -1, 0 },
  [610] = { "fre110", sg_none, 127, 0, -1, -1, 0 },
  [611] = { "fre111", sg_none, 127, 0, -1, -1, 0 },
  [612] = { "fre112", sg_none, 127, 0, -1, -1, 0 },
  [613] = { "fre113", sg_none, 127, 0, -1, -1, 0 },
  [614] = { "fre114", sg_none, 127, 0, -1, -1, 0 },
  [615] = { "fre115", sg_none, 127, 0, -1, -1, 0 },
  [616] = { "fre116", sg_none, 127, 0, -1, -1, 0 },
  [617] = { "fre117", sg_none, 127, 0, -1, -1, 0 },
  [618] = { "fre118", sg_none, 127, 0, -1, -1, 0 },
  [619] = { "fre119", sg_none, 127, 0, -1, -1, 0 },
  [620] = { "fre120", sg_none, 127, 0, -1, -1, 0 },
  [621] = { "fre121", sg_none, 127, 0, -1, -1, 0 },
  [622] = { "fre122", sg_none, 127, 0, -1, -1, 0 },
  [623] = { "fre123", sg_none, 127, 0, -1, -1, 0 },
  [624] = { "fre124", sg_none, 127, 0, -1, -1, 0 },
  [625] = { "fre125", sg_none, 127, 0, -1, -1, 0 },
  [626] = { "fre126", sg_none, 127, 0, -1, -1, 0 },
  [627] = { "fre127", sg_none, 127, 0, -1, -1, 0 },
  [628] = { "fre128", sg_none, 127, 0, -1, -1, 0 },
  [629] = { "fre129", sg_none, 127, 0, -1, -1, 0 },
  [630] = { "fre130", sg_none, 127, 0, -1, -1, 0 },
  [631] = { "fre131", sg_none, 127, 0, -1, -1, 0 },
  [632] = { "fre132", sg_none, 127, 0, -1, -1, 0 },
  [633] = { "fre133", sg_none, 127, 0, -1, -1, 0 },
  [634] = { "fre134", sg_none, 127, 0, -1, -1, 0 },
  [635] = { "fre135", sg_none, 127, 0, -1, -1, 0 },
  [636] = { "fre136", sg_none, 127, 0, -1, -1, 0 },
  [637] = { "fre137", sg_none, 127, 0, -1, -1, 0 },
  [638] = { "fre138", sg_none, 127, 0, -1, -1, 0 },
  [639] = { "fre139", sg_none, 127, 0, -1, -1, 0 },
  [640] = { "fre140", sg_none, 127, 0, -1, -1, 0 },
  [641] = { "fre141", sg_none, 127, 0, -1, -1, 0 },
  [642] = { "fre142", sg_none, 127, 0, -1, -1, 0 },
  [643] = { "fre143", sg_none, 127, 0, -1, -1, 0 },
  [644] = { "fre144", sg_none, 127, 0, -1, -1, 0 },
  [645] = { "fre145", sg_none, 127, 0, -1, -1, 0 },
  [646] = { "fre146", sg_none, 127, 0, -1, -1, 0 },
  [647] = { "fre147", sg_none, 127, 0, -1, -1, 0 },
  [648] = { "fre148", sg_none, 127, 0, -1, -1, 0 },
  [649] = { "fre149", sg_none, 127, 0, -1, -1, 0 },
  [650] = { "fre150", sg_none, 127, 0, -1, -1, 0 },
  [651] = { "fre151", sg_none, 127, 0, -1, -1, 0 },
  [652] = { "fre152", sg_none, 127, 0, -1, -1, 0 },
  [653] = { "fre153", sg_none, 127, 0, -1, -1, 0 },
  [654] = { "fre154", sg_none, 127, 0, -1, -1, 0 },
  [655] = { "fre155", sg_none, 127, 0, -1, -1, 0 },
  [656] = { "fre156", sg_none, 127, 0, -1, -1, 0 },
  [657] = { "fre157", sg_none, 127, 0, -1, -1, 0 },
  [658] = { "fre158", sg_none, 127, 0, -1, -1, 0 },
  [659] = { "fre159", sg_none, 127, 0, -1, -1, 0 },
  [660] = { "fre160", sg_none, 127, 0, -1, -1, 0 },
  [661] = { "fre161", sg_none, 127, 0, -1, -1, 0 },
  [662] = { "fre162", sg_none, 127, 0, -1, -1, 0 },
  [663] = { "fre163", sg_none, 127, 0, -1, -1, 0 },
  [664] = { "fre164", sg_none, 127, 0, -1, -1, 0 },
  [665] = { "fre165", sg_none, 127, 0, -1, -1, 0 },
  [666] = { "fre166", sg_none, 127, 0, -1, -1, 0 },
  [667] = { "fre167", sg_none, 127, 0, -1, -1, 0 },
  [668] = { "fre168", sg_none, 127, 0, -1, -1, 0 },
  [669] = { "fre169", sg_none, 127, 0, -1, -1, 0 },
  [670] = { "fre170", sg_none, 127, 0, -1, -1, 0 },
  [671] = { "fre171", sg_none, 127, 0, -1, -1, 0 },
  [672] = { "fre172", sg_none, 127, 0, -1, -1, 0 },
  [673] = { "fre173", sg_none, 127, 0, -1, -1, 0 },
  [674] = { "fre174", sg_none, 127, 0, -1, -1, 0 },
  [675] = { "fre175", sg_none, 127, 0, -1, -1, 0 },
  [676] = { "fre176", sg_none, 127, 0, -1, -1, 0 },
  [677] = { "fre177", sg_none, 127, 0, -1, -1, 0 },
  [678] = { "fre178", sg_none, 127, 0, -1, -1, 0 },
  [679] = { "fre179", sg_none, 127, 0, -1, -1, 0 },
  [680] = { "fre180", sg_none, 127, 0, -1, -1, 0 },
  [681] = { "fre181", sg_none, 127, 0, -1, -1, 0 },
  [682] = { "fre182", sg_none, 127, 0, -1, -1, 0 },
  [683] = { "fre183", sg_none, 127, 0, -1, -1, 0 },
  [684] = { "fre184", sg_none, 127, 0, -1, -1, 0 },
  [685] = { "fre185", sg_none, 127, 0, -1, -1, 0 },
  [686] = { "fre186", sg_none, 127, 0, -1, -1, 0 },
  [687] = { "fre187", sg_none, 127, 0, -1, -1, 0 },
  [688] = { "fre188", sg_none, 127, 0, -1, -1, 0 },
  [689] = { "fre189", sg_none, 127, 0, -1, -1, 0 },
  [690] = { "fre190", sg_none, 127, 0, -1, -1, 0 },
  [691] = { "fre191", sg_none, 127, 0, -1, -1, 0 },
  [692] = { "fre192", sg_none, 127, 0, -1, -1, 0 },
  [693] = { "fre193", sg_none, 127, 0, -1, -1, 0 },
  [694] = { "fre194", sg_none, 127, 0, -1, -1, 0 },
  [695] = { "fre195", sg_none, 127, 0, -1, -1, 0 },
  [696] = { "fre196", sg_none, 127, 0, -1, -1, 0 },
  [697] = { "fre197", sg_none, 127, 0, -1, -1, 0 },
  [698] = { "fre198", sg_none, 127, 0, -1, -1, 0 },
  [699] = { "fre199", sg_none, 127, 0, -1, -1, 0 },
};

//----------------------------------------------------------------------------
//
// $Log: sounds.c,v $
// Revision 1.3  1998/05/03  22:44:25  killough
// beautification
//
// Revision 1.2  1998/01/26  19:24:54  phares
// First rev with no ^Ms
//
// Revision 1.1.1.1  1998/01/19  14:03:03  rand
// Lee's Jan 19 sources
//
//----------------------------------------------------------------------------
