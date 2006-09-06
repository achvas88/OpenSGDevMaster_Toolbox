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
 **     class BlendChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &BlendChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 BlendChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 BlendChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the BlendChunk::_sfSrcFactor field.

inline
GLenum &BlendChunkBase::editSrcFactor(void)
{
    editSField(SrcFactorFieldMask);

    return _sfSrcFactor.getValue();
}

//! Get the value of the BlendChunk::_sfSrcFactor field.
inline
const GLenum &BlendChunkBase::getSrcFactor(void) const
{
    return _sfSrcFactor.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &BlendChunkBase::getSrcFactor(void)
{
    return this->editSrcFactor();
}
#endif

//! Set the value of the BlendChunk::_sfSrcFactor field.
inline
void BlendChunkBase::setSrcFactor(const GLenum &value)
{
    editSField(SrcFactorFieldMask);

    _sfSrcFactor.setValue(value);
}
//! Get the value of the BlendChunk::_sfDestFactor field.

inline
GLenum &BlendChunkBase::editDestFactor(void)
{
    editSField(DestFactorFieldMask);

    return _sfDestFactor.getValue();
}

//! Get the value of the BlendChunk::_sfDestFactor field.
inline
const GLenum &BlendChunkBase::getDestFactor(void) const
{
    return _sfDestFactor.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &BlendChunkBase::getDestFactor(void)
{
    return this->editDestFactor();
}
#endif

//! Set the value of the BlendChunk::_sfDestFactor field.
inline
void BlendChunkBase::setDestFactor(const GLenum &value)
{
    editSField(DestFactorFieldMask);

    _sfDestFactor.setValue(value);
}
//! Get the value of the BlendChunk::_sfEquation field.

inline
GLenum &BlendChunkBase::editEquation(void)
{
    editSField(EquationFieldMask);

    return _sfEquation.getValue();
}

//! Get the value of the BlendChunk::_sfEquation field.
inline
const GLenum &BlendChunkBase::getEquation(void) const
{
    return _sfEquation.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &BlendChunkBase::getEquation(void)
{
    return this->editEquation();
}
#endif

//! Set the value of the BlendChunk::_sfEquation field.
inline
void BlendChunkBase::setEquation(const GLenum &value)
{
    editSField(EquationFieldMask);

    _sfEquation.setValue(value);
}
//! Get the value of the BlendChunk::_sfColor field.

inline
Color4f &BlendChunkBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the BlendChunk::_sfColor field.
inline
const Color4f &BlendChunkBase::getColor(void) const
{
    return _sfColor.getValue();
}

#ifdef OSG_1_COMPAT
inline
Color4f &BlendChunkBase::getColor(void)
{
    return this->editColor();
}
#endif

//! Set the value of the BlendChunk::_sfColor field.
inline
void BlendChunkBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the BlendChunk::_sfAlphaFunc field.

inline
GLenum &BlendChunkBase::editAlphaFunc(void)
{
    editSField(AlphaFuncFieldMask);

    return _sfAlphaFunc.getValue();
}

//! Get the value of the BlendChunk::_sfAlphaFunc field.
inline
const GLenum &BlendChunkBase::getAlphaFunc(void) const
{
    return _sfAlphaFunc.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &BlendChunkBase::getAlphaFunc(void)
{
    return this->editAlphaFunc();
}
#endif

//! Set the value of the BlendChunk::_sfAlphaFunc field.
inline
void BlendChunkBase::setAlphaFunc(const GLenum &value)
{
    editSField(AlphaFuncFieldMask);

    _sfAlphaFunc.setValue(value);
}
//! Get the value of the BlendChunk::_sfAlphaValue field.

inline
Real32 &BlendChunkBase::editAlphaValue(void)
{
    editSField(AlphaValueFieldMask);

    return _sfAlphaValue.getValue();
}

//! Get the value of the BlendChunk::_sfAlphaValue field.
inline
const Real32 &BlendChunkBase::getAlphaValue(void) const
{
    return _sfAlphaValue.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &BlendChunkBase::getAlphaValue(void)
{
    return this->editAlphaValue();
}
#endif

//! Set the value of the BlendChunk::_sfAlphaValue field.
inline
void BlendChunkBase::setAlphaValue(const Real32 &value)
{
    editSField(AlphaValueFieldMask);

    _sfAlphaValue.setValue(value);
}
//! Get the value of the BlendChunk::_sfAlphaSrcFactor field.

inline
GLenum &BlendChunkBase::editAlphaSrcFactor(void)
{
    editSField(AlphaSrcFactorFieldMask);

    return _sfAlphaSrcFactor.getValue();
}

//! Get the value of the BlendChunk::_sfAlphaSrcFactor field.
inline
const GLenum &BlendChunkBase::getAlphaSrcFactor(void) const
{
    return _sfAlphaSrcFactor.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &BlendChunkBase::getAlphaSrcFactor(void)
{
    return this->editAlphaSrcFactor();
}
#endif

//! Set the value of the BlendChunk::_sfAlphaSrcFactor field.
inline
void BlendChunkBase::setAlphaSrcFactor(const GLenum &value)
{
    editSField(AlphaSrcFactorFieldMask);

    _sfAlphaSrcFactor.setValue(value);
}
//! Get the value of the BlendChunk::_sfAlphaDestFactor field.

inline
GLenum &BlendChunkBase::editAlphaDestFactor(void)
{
    editSField(AlphaDestFactorFieldMask);

    return _sfAlphaDestFactor.getValue();
}

//! Get the value of the BlendChunk::_sfAlphaDestFactor field.
inline
const GLenum &BlendChunkBase::getAlphaDestFactor(void) const
{
    return _sfAlphaDestFactor.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &BlendChunkBase::getAlphaDestFactor(void)
{
    return this->editAlphaDestFactor();
}
#endif

//! Set the value of the BlendChunk::_sfAlphaDestFactor field.
inline
void BlendChunkBase::setAlphaDestFactor(const GLenum &value)
{
    editSField(AlphaDestFactorFieldMask);

    _sfAlphaDestFactor.setValue(value);
}

//! create a new instance of the class
inline
BlendChunkPtr BlendChunkBase::create(void) 
{
    BlendChunkPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<BlendChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void BlendChunkBase::execSync(      BlendChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (SrcFactorFieldMask & whichField))
        _sfSrcFactor.syncWith(pOther->_sfSrcFactor);

    if(FieldBits::NoField != (DestFactorFieldMask & whichField))
        _sfDestFactor.syncWith(pOther->_sfDestFactor);

    if(FieldBits::NoField != (EquationFieldMask & whichField))
        _sfEquation.syncWith(pOther->_sfEquation);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (AlphaFuncFieldMask & whichField))
        _sfAlphaFunc.syncWith(pOther->_sfAlphaFunc);

    if(FieldBits::NoField != (AlphaValueFieldMask & whichField))
        _sfAlphaValue.syncWith(pOther->_sfAlphaValue);

    if(FieldBits::NoField != (AlphaSrcFactorFieldMask & whichField))
        _sfAlphaSrcFactor.syncWith(pOther->_sfAlphaSrcFactor);

    if(FieldBits::NoField != (AlphaDestFactorFieldMask & whichField))
        _sfAlphaDestFactor.syncWith(pOther->_sfAlphaDestFactor);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void BlendChunkBase::execSync (      BlendChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void BlendChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *BlendChunkBase::getClassname(void)
{
    return "BlendChunk";
}

typedef PointerBuilder<BlendChunk>::ObjPtr          BlendChunkPtr;
typedef PointerBuilder<BlendChunk>::ObjPtrConst     BlendChunkPtrConst;
typedef PointerBuilder<BlendChunk>::ObjConstPtr     BlendChunkConstPtr;

typedef PointerBuilder<BlendChunk>::ObjPtrArg       BlendChunkPtrArg;
typedef PointerBuilder<BlendChunk>::ObjConstPtrArg  BlendChunkConstPtrArg;
typedef PointerBuilder<BlendChunk>::ObjPtrConstArg  BlendChunkPtrConstArg;

OSG_END_NAMESPACE

#define OSGBLENDCHUNKBASE_INLINE_CVSID "@(#)$Id: $"

