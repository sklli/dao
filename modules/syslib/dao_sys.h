/*=========================================================================================
  This file is a part of the Dao standard modules.
  Copyright (C) 2011, Fu Limin. Email: fu@daovm.net, limin.fu@yahoo.com

  This software is free software; you can redistribute it and/or modify it under the terms 
  of the GNU Lesser General Public License as published by the Free Software Foundation; 
  either version 2.1 of the License, or (at your option) any later version.

  This software is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
  See the GNU Lesser General Public License for more details.
  =========================================================================================*/

#ifndef __DAO_SYS_H__
#define __DAO_SYS_H__

#include"daoStdtype.h"

typedef struct Dao_Buffer Dao_Buffer;

struct Dao_Buffer
{
	DAO_CDATA_COMMON;

	union {
		void           *pVoid;
		signed   char  *pSChar;
		unsigned char  *pUChar;
		signed   short *pSShort;
		unsigned short *pUShort;
		signed   int   *pSInt;
		unsigned int   *pUInt;
		float          *pFloat;
		double         *pDouble;
	} buffer;
	size_t  size;
	size_t  bufsize;
};

DAO_DLL Dao_Buffer* Dao_Buffer_New( size_t size );
DAO_DLL void Dao_Buffer_Resize( Dao_Buffer *self, size_t size );
DAO_DLL void Dao_Buffer_Delete( Dao_Buffer *self );

#endif
