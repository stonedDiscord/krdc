/*
 *  Copyright (C) 2002 Tim Jansen.  All Rights Reserved.
 *  Copyright (C) 2000, 2001 Const Kaplinsky.  All Rights Reserved.
 *  Copyright (C) 2000 Tridia Corporation.  All Rights Reserved.
 *  Copyright (C) 1999 AT&T Laboratories Cambridge.  All Rights Reserved.
 *
 *  This is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This software is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this software; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,
 *  USA.
 */

#ifndef VNCTYPES_H
#define VNCTYPES_H

#if(defined __cplusplus)
extern "C"
{
#endif

typedef unsigned char  CARD8;
typedef unsigned short CARD16;
typedef unsigned int   CARD32;


typedef struct {
  int shareDesktop; /* bool */
  int viewOnly; /* bool */

  const char* encodingsString;

  int useBGR233; /* bool */
  int nColours;
  int useSharedColours; /* bool */
  int requestedDepth;

  int rawDelay;
  int copyRectDelay;

  int debug; /* bool */

  int compressLevel;
  int qualityLevel;

} AppData;

typedef enum {
  QUALITY_UNKNOWN,
  QUALITY_HIGH,
  QUALITY_MEDIUM,
  QUALITY_LOW
} Quality;

enum InitStatus {
  INIT_OK,
  INIT_PROTOCOL_FAILURE,
  INIT_CONNECTION_FAILED,
  INIT_AUTHENTICATION_FAILED,
  INIT_ABORTED
};


#if(defined __cplusplus)
}
#endif

#endif
