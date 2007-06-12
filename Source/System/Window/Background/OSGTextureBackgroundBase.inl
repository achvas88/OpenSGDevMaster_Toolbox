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
 **     class TextureBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureBackgroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TextureBackgroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TextureBackgroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TextureBackground::_sfColor field.

inline
Color4f &TextureBackgroundBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the TextureBackground::_sfColor field.
inline
const Color4f &TextureBackgroundBase::getColor(void) const
{
    return _sfColor.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Color4f             &TextureBackgroundBase::getColor          (void)
{
    return this->editColor          ();
}
#endif

//! Set the value of the TextureBackground::_sfColor field.
inline
void TextureBackgroundBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}

//! Get the value of the TextureBackground::_sfTexture field.
inline
TextureBaseChunkPtrConst TextureBackgroundBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

//! Set the value of the TextureBackground::_sfTexture field.
inline
void TextureBackgroundBase::setTexture(TextureBaseChunkPtrConstArg value)
{
    editSField(TextureFieldMask);

    setRefd(_sfTexture.getValue(), value);

}
//! Get the value of the TextureBackground::_sfRadialDistortion field.

inline
Real32 &TextureBackgroundBase::editRadialDistortion(void)
{
    editSField(RadialDistortionFieldMask);

    return _sfRadialDistortion.getValue();
}

//! Get the value of the TextureBackground::_sfRadialDistortion field.
inline
const Real32 &TextureBackgroundBase::getRadialDistortion(void) const
{
    return _sfRadialDistortion.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &TextureBackgroundBase::getRadialDistortion(void)
{
    return this->editRadialDistortion();
}
#endif

//! Set the value of the TextureBackground::_sfRadialDistortion field.
inline
void TextureBackgroundBase::setRadialDistortion(const Real32 &value)
{
    editSField(RadialDistortionFieldMask);

    _sfRadialDistortion.setValue(value);
}
//! Get the value of the TextureBackground::_sfCenterOfDistortion field.

inline
Vec2f &TextureBackgroundBase::editCenterOfDistortion(void)
{
    editSField(CenterOfDistortionFieldMask);

    return _sfCenterOfDistortion.getValue();
}

//! Get the value of the TextureBackground::_sfCenterOfDistortion field.
inline
const Vec2f &TextureBackgroundBase::getCenterOfDistortion(void) const
{
    return _sfCenterOfDistortion.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Vec2f               &TextureBackgroundBase::getCenterOfDistortion(void)
{
    return this->editCenterOfDistortion();
}
#endif

//! Set the value of the TextureBackground::_sfCenterOfDistortion field.
inline
void TextureBackgroundBase::setCenterOfDistortion(const Vec2f &value)
{
    editSField(CenterOfDistortionFieldMask);

    _sfCenterOfDistortion.setValue(value);
}
//! Get the value of the TextureBackground::_sfHor field.

inline
UInt16 &TextureBackgroundBase::editHor(void)
{
    editSField(HorFieldMask);

    return _sfHor.getValue();
}

//! Get the value of the TextureBackground::_sfHor field.
inline
const UInt16 &TextureBackgroundBase::getHor(void) const
{
    return _sfHor.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt16              &TextureBackgroundBase::getHor            (void)
{
    return this->editHor            ();
}
#endif

//! Set the value of the TextureBackground::_sfHor field.
inline
void TextureBackgroundBase::setHor(const UInt16 &value)
{
    editSField(HorFieldMask);

    _sfHor.setValue(value);
}
//! Get the value of the TextureBackground::_sfVert field.

inline
UInt16 &TextureBackgroundBase::editVert(void)
{
    editSField(VertFieldMask);

    return _sfVert.getValue();
}

//! Get the value of the TextureBackground::_sfVert field.
inline
const UInt16 &TextureBackgroundBase::getVert(void) const
{
    return _sfVert.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt16              &TextureBackgroundBase::getVert           (void)
{
    return this->editVert           ();
}
#endif

//! Set the value of the TextureBackground::_sfVert field.
inline
void TextureBackgroundBase::setVert(const UInt16 &value)
{
    editSField(VertFieldMask);

    _sfVert.setValue(value);
}

//! Get the value of the \a index element the TextureBackground::_mfTexCoords field.
inline
const Pnt2f &TextureBackgroundBase::getTexCoords(const UInt32 index) const
{
    return _mfTexCoords[index];
}

inline
Pnt2f &TextureBackgroundBase::editTexCoords(const UInt32 index)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return _mfTexCoords[index];
}

//! Get the TextureBackground::_mfTexCoords field.
inline
MFPnt2f &TextureBackgroundBase::editTexCoords(void)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return _mfTexCoords;
}

#ifdef OSG_1_GET_COMPAT
inline
Pnt2f               &TextureBackgroundBase::getTexCoords      (const UInt32 index)
{
    return this->editTexCoords      (index);
}

inline
MFPnt2f             &TextureBackgroundBase::getTexCoords      (void)
{
    return this->editTexCoords      ();
}

#endif


//! Get the TextureBackground::_mfTexCoords field.
inline
const MFPnt2f &TextureBackgroundBase::getTexCoords(void) const
{
    return _mfTexCoords;
}


#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void TextureBackgroundBase::execSync(      TextureBackgroundBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
        _mfTexCoords.syncWith(pOther->_mfTexCoords,
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
        _sfRadialDistortion.syncWith(pOther->_sfRadialDistortion);

    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
        _sfCenterOfDistortion.syncWith(pOther->_sfCenterOfDistortion);

    if(FieldBits::NoField != (HorFieldMask & whichField))
        _sfHor.syncWith(pOther->_sfHor);

    if(FieldBits::NoField != (VertFieldMask & whichField))
        _sfVert.syncWith(pOther->_sfVert);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void TextureBackgroundBase::execSync (      TextureBackgroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pFrom->_sfTexture);

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
        _mfTexCoords.syncWith(pFrom->_mfTexCoords,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
        _sfRadialDistortion.syncWith(pFrom->_sfRadialDistortion);

    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
        _sfCenterOfDistortion.syncWith(pFrom->_sfCenterOfDistortion);

    if(FieldBits::NoField != (HorFieldMask & whichField))
        _sfHor.syncWith(pFrom->_sfHor);

    if(FieldBits::NoField != (VertFieldMask & whichField))
        _sfVert.syncWith(pFrom->_sfVert);
}
#endif

#if 0
inline
void TextureBackgroundBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *TextureBackgroundBase::getClassname(void)
{
    return "TextureBackground";
}
OSG_GEN_CONTAINERPTR(TextureBackground);

OSG_END_NAMESPACE

