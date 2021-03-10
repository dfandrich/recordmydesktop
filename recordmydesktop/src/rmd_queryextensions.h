/******************************************************************************
*                            recordMyDesktop                                  *
*******************************************************************************
*                                                                             *
*            Copyright (C) 2006,2007,2008 John Varouhakis                     *
*                                                                             *
*                                                                             *
*   This program is free software; you can redistribute it and/or modify      *
*   it under the terms of the GNU General Public License as published by      *
*   the Free Software Foundation; either version 2 of the License, or         *
*   (at your option) any later version.                                       *
*                                                                             *
*   This program is distributed in the hope that it will be useful,           *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of            *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
*   GNU General Public License for more details.                              *
*                                                                             *
*   You should have received a copy of the GNU General Public License         *
*   along with this program; if not, write to the Free Software               *
*   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA  *
*                                                                             *
*                                                                             *
*                                                                             *
******************************************************************************/

#ifndef QUERYEXTENSIONS_H
#define QUERYEXTENSIONS_H 1

#include "rmd_types.h"


/**
* Check if needed extensions are present
*
* \param dpy Connection to the server
*
* \param args ProgArgs struct containing the user-set options
*
* \param damage_event gets filled with damage event number
*
* \param damage_error gets filled with damage error number
*
* \note Can be an exit point if extensions are not found
*/
void rmdQueryExtensions(Display *dpy,
                        ProgArgs *args,
                        int *damage_event,
                        int *damage_error,
                        int *shm_opcode);


#endif
