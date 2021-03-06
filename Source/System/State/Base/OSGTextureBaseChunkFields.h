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


#ifndef _OSGTEXTUREBASECHUNKFIELDS_H_
#define _OSGTEXTUREBASECHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TextureBaseChunk;

OSG_GEN_CONTAINERPTR(TextureBaseChunk);

/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<TextureBaseChunk *> :
    public FieldTraitsFCPtrBase<TextureBaseChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TextureBaseChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTextureBaseChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTextureBaseChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<TextureBaseChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTextureBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBaseChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTextureBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBaseChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTextureBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBaseChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTextureBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBaseChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTextureBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBaseChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTextureBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBaseChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTextureBaseChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBaseChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTextureBaseChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<TextureBaseChunk *,
                      RecordedRefCountPolicy  > SFRecTextureBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<TextureBaseChunk *,
                      UnrecordedRefCountPolicy> SFUnrecTextureBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<TextureBaseChunk *,
                      WeakRefCountPolicy      > SFWeakTextureBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<TextureBaseChunk *,
                      NoRefCountPolicy        > SFUncountedTextureBaseChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<TextureBaseChunk *,
                      RecordedRefCountPolicy  > MFRecTextureBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<TextureBaseChunk *,
                      UnrecordedRefCountPolicy> MFUnrecTextureBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<TextureBaseChunk *,
                      WeakRefCountPolicy      > MFWeakTextureBaseChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<TextureBaseChunk *,
                      NoRefCountPolicy        > MFUncountedTextureBaseChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecTextureBaseChunkPtr : 
    public PointerSField<TextureBaseChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecTextureBaseChunkPtr : 
    public PointerSField<TextureBaseChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakTextureBaseChunkPtr :
    public PointerSField<TextureBaseChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedTextureBaseChunkPtr :
    public PointerSField<TextureBaseChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecTextureBaseChunkPtr :
    public PointerMField<TextureBaseChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecTextureBaseChunkPtr :
    public PointerMField<TextureBaseChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakTextureBaseChunkPtr :
    public PointerMField<TextureBaseChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedTextureBaseChunkPtr :
    public PointerMField<TextureBaseChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTEXTUREBASECHUNKFIELDS_H_ */
