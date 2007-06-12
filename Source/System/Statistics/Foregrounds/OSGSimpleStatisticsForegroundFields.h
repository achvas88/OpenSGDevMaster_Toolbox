/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSIMPLESTATISTICSFOREGROUNDFIELDS_H_
#define _OSGSIMPLESTATISTICSFOREGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGUtilDef.h"

#include "OSGStatisticsForegroundFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class SimpleStatisticsForeground;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! SimpleStatisticsForegroundPtr

OSG_GEN_CONTAINERPTR(SimpleStatisticsForeground);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpUtilFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<SimpleStatisticsForegroundPtr> :
    public FieldTraitsTemplateBase<SimpleStatisticsForegroundPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SimpleStatisticsForegroundPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_UTIL_DLLMAPPING DataType &getType(void);

    static const char *getSName(void) { return "SFSimpleStatisticsForegroundPtr"; }
    static const char *getMName(void) { return "MFSimpleStatisticsForegroundPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<SimpleStatisticsForegroundPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpUtilFieldSingle */

typedef SFieldAdaptor<SimpleStatisticsForegroundPtr, SFFieldContainerPtr> SFSimpleStatisticsForegroundPtr;
#endif

#ifndef OSG_COMPILESIMPLESTATISTICSFOREGROUNDINST
OSG_FIELD_DLLEXPORT_DECL1(SField, SimpleStatisticsForegroundPtr, OSG_UTIL_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpUtilFieldMulti */

typedef MFieldAdaptor<SimpleStatisticsForegroundPtr, MFFieldContainerPtr> MFSimpleStatisticsForegroundPtr;
#endif

#ifndef OSG_COMPILESIMPLESTATISTICSFOREGROUNDINST
OSG_FIELD_DLLEXPORT_DECL1(MField, SimpleStatisticsForegroundPtr, OSG_UTIL_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#endif /* _OSGSIMPLESTATISTICSFOREGROUNDFIELDS_H_ */
