/*
 *  ReplayGainAnalysis Heder - DLL for Glen Sawyer's MP3GAIN.C source
 *  Copyright (C) 2002 John Zitterkopf (zitt@bigfoot.com) 
 *                     (http://www.zittware.com)
 *
 *  These comments must remain intact in all copies of the source code.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  This header for VC++5.0 by John Zitterkopf (zitt@bigfoot.com)
 *    -- blame him for nothing. This work evolves as needed.
 *
 *  V0.0 - jzitt9/4/2002
 *  * header needed to eliminate 'changeGain' undefined compiler warning
 */

#ifndef MP3GAIN_H
#define MP3GAIN_H

#define MP3GAIN_VERSION "1.4.2" 
/* jzitt: moved from mp3gain.c */

#include "rg_error.h"

#ifdef asWIN32DLL

void changeGain(char *filename, int leftgainchange, int rightgainchange);

#endif 

int deleteFile(char *filename);
int moveFile(char *currentfilename, char *newfilename);

typedef enum {
    storeTime,
    setStoredTime
} timeAction;

void passError(MMRESULT lerrnum, int numStrings, ...);

	/* Get/Set file datetime stamp */
void fileTime(char *filename, timeAction action);

#endif