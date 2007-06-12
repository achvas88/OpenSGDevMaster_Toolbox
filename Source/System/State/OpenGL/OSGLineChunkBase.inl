/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class LineChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LineChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 LineChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 LineChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the LineChunk::_sfWidth field.

inline
Real32 &LineChunkBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the LineChunk::_sfWidth field.
inline
const Real32 &LineChunkBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &LineChunkBase::getWidth          (void)
{
    return this->editWidth          ();
}
#endif

//! Set the value of the LineChunk::_sfWidth field.
inline
void LineChunkBase::setWidth(const Real32 &value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the LineChunk::_sfStippleRepeat field.

inline
Int32 &LineChunkBase::editStippleRepeat(void)
{
    editSField(StippleRepeatFieldMask);

    return _sfStippleRepeat.getValue();
}

//! Get the value of the LineChunk::_sfStippleRepeat field.
inline
const Int32 &LineChunkBase::getStippleRepeat(void) const
{
    return _sfStippleRepeat.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Int32               &LineChunkBase::getStippleRepeat  (void)
{
    return this->editStippleRepeat  ();
}
#endif

//! Set the value of the LineChunk::_sfStippleRepeat field.
inline
void LineChunkBase::setStippleRepeat(const Int32 &value)
{
    editSField(StippleRepeatFieldMask);

    _sfStippleRepeat.setValue(value);
}
//! Get the value of the LineChunk::_sfStipplePattern field.

inline
UInt16 &LineChunkBase::editStipplePattern(void)
{
    editSField(StipplePatternFieldMask);

    return _sfStipplePattern.getValue();
}

//! Get the value of the LineChunk::_sfStipplePattern field.
inline
const UInt16 &LineChunkBase::getStipplePattern(void) const
{
    return _sfStipplePattern.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt16              &LineChunkBase::getStipplePattern (void)
{
    return this->editStipplePattern ();
}
#endif

//! Set the value of the LineChunk::_sfStipplePattern field.
inline
void LineChunkBase::setStipplePattern(const UInt16 &value)
{
    editSField(StipplePatternFieldMask);

    _sfStipplePattern.setValue(value);
}
//! Get the value of the LineChunk::_sfSmooth field.

inline
bool &LineChunkBase::editSmooth(void)
{
    editSField(SmoothFieldMask);

    return _sfSmooth.getValue();
}

//! Get the value of the LineChunk::_sfSmooth field.
inline
const bool &LineChunkBase::getSmooth(void) const
{
    return _sfSmooth.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &LineChunkBase::getSmooth         (void)
{
    return this->editSmooth         ();
}
#endif

//! Set the value of the LineChunk::_sfSmooth field.
inline
void LineChunkBase::setSmooth(const bool &value)
{
    editSField(SmoothFieldMask);

    _sfSmooth.setValue(value);
}


#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void LineChunkBase::execSync(      LineChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (StippleRepeatFieldMask & whichField))
        _sfStippleRepeat.syncWith(pOther->_sfStippleRepeat);

    if(FieldBits::NoField != (StipplePatternFieldMask & whichField))
        _sfStipplePattern.syncWith(pOther->_sfStipplePattern);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pOther->_sfSmooth);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void LineChunkBase::execSync (      LineChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (StippleRepeatFieldMask & whichField))
        _sfStippleRepeat.syncWith(pFrom->_sfStippleRepeat);

    if(FieldBits::NoField != (StipplePatternFieldMask & whichField))
        _sfStipplePattern.syncWith(pFrom->_sfStipplePattern);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pFrom->_sfSmooth);
}
#endif

#if 0
inline
void LineChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *LineChunkBase::getClassname(void)
{
    return "LineChunk";
}
OSG_GEN_CONTAINERPTR(LineChunk);

OSG_END_NAMESPACE

