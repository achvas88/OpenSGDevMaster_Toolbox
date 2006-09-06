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
 **     class GradientBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GradientBackgroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GradientBackgroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 GradientBackgroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the \a index element the GradientBackground::_mfColor field.
inline
const Color3f &GradientBackgroundBase::getColor(const UInt32 index) const
{
    return _mfColor[index];
}

inline
Color3f &GradientBackgroundBase::editColor(const UInt32 index)
{
    editMField(ColorFieldMask, _mfColor);

    return _mfColor[index];
}

//! Get the GradientBackground::_mfColor field.
inline
MFColor3f &GradientBackgroundBase::editColor(void)
{
    editMField(ColorFieldMask, _mfColor);

    return _mfColor;
}

#ifdef OSG_1_COMPAT
inline
Color3f &GradientBackgroundBase::getColor(const UInt32 index)
{
    return this->editColor(index);
}

inline
MFColor3f &GradientBackgroundBase::getColor(void)
{
    return this->editColor();
}

#endif


//! Get the GradientBackground::_mfColor field.
inline
const MFColor3f &GradientBackgroundBase::getColor(void) const
{
    return _mfColor;
}

//! Get the value of the \a index element the GradientBackground::_mfPosition field.
inline
const Real32 &GradientBackgroundBase::getPosition(const UInt32 index) const
{
    return _mfPosition[index];
}

inline
Real32 &GradientBackgroundBase::editPosition(const UInt32 index)
{
    editMField(PositionFieldMask, _mfPosition);

    return _mfPosition[index];
}

//! Get the GradientBackground::_mfPosition field.
inline
MFReal32 &GradientBackgroundBase::editPosition(void)
{
    editMField(PositionFieldMask, _mfPosition);

    return _mfPosition;
}

#ifdef OSG_1_COMPAT
inline
Real32 &GradientBackgroundBase::getPosition(const UInt32 index)
{
    return this->editPosition(index);
}

inline
MFReal32 &GradientBackgroundBase::getPosition(void)
{
    return this->editPosition();
}

#endif


//! Get the GradientBackground::_mfPosition field.
inline
const MFReal32 &GradientBackgroundBase::getPosition(void) const
{
    return _mfPosition;
}

//! create a new instance of the class
inline
GradientBackgroundPtr GradientBackgroundBase::create(void) 
{
    GradientBackgroundPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<GradientBackground::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void GradientBackgroundBase::execSync(      GradientBackgroundBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _mfColor.syncWith(pOther->_mfColor, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _mfPosition.syncWith(pOther->_mfPosition, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void GradientBackgroundBase::execSync (      GradientBackgroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void GradientBackgroundBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _mfColor.beginEdit(uiAspect, uiContainerSize);
    }

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _mfPosition.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *GradientBackgroundBase::getClassname(void)
{
    return "GradientBackground";
}

typedef PointerBuilder<GradientBackground>::ObjPtr          GradientBackgroundPtr;
typedef PointerBuilder<GradientBackground>::ObjPtrConst     GradientBackgroundPtrConst;
typedef PointerBuilder<GradientBackground>::ObjConstPtr     GradientBackgroundConstPtr;

typedef PointerBuilder<GradientBackground>::ObjPtrArg       GradientBackgroundPtrArg;
typedef PointerBuilder<GradientBackground>::ObjConstPtrArg  GradientBackgroundConstPtrArg;
typedef PointerBuilder<GradientBackground>::ObjPtrConstArg  GradientBackgroundPtrConstArg;

OSG_END_NAMESPACE

#define OSGGRADIENTBACKGROUNDBASE_INLINE_CVSID "@(#)$Id: $"

