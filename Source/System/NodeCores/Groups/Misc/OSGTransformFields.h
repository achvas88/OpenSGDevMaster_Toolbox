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


#ifndef _OSGTRANSFORMFIELDS_H_
#define _OSGTRANSFORMFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Transform;

OSG_GEN_CONTAINERPTR(Transform);

/*! \ingroup GrpGroupFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<Transform *> :
    public FieldTraitsFCPtrBase<Transform *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Transform *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTransformPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTransformPtr"; }
};

template<> inline
const Char8 *FieldTraits<Transform *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<Transform *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<Transform *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<Transform *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<Transform *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<Transform *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<Transform *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<Transform *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTransformPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<Transform *,
                      RecordedRefCountPolicy  > SFRecTransformPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<Transform *,
                      UnrecordedRefCountPolicy> SFUnrecTransformPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<Transform *,
                      WeakRefCountPolicy      > SFWeakTransformPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<Transform *,
                      NoRefCountPolicy        > SFUncountedTransformPtr;


/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<Transform *,
                      RecordedRefCountPolicy  > MFRecTransformPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<Transform *,
                      UnrecordedRefCountPolicy> MFUnrecTransformPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<Transform *,
                      WeakRefCountPolicy      > MFWeakTransformPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<Transform *,
                      NoRefCountPolicy        > MFUncountedTransformPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecTransformPtr : 
    public PointerSField<Transform *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecTransformPtr : 
    public PointerSField<Transform *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakTransformPtr :
    public PointerSField<Transform *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedTransformPtr :
    public PointerSField<Transform *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecTransformPtr :
    public PointerMField<Transform *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecTransformPtr :
    public PointerMField<Transform *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakTransformPtr :
    public PointerMField<Transform *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedTransformPtr :
    public PointerMField<Transform *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTRANSFORMFIELDS_H_ */
