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
 **     class ShaderParameterMVec2f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterMVec2fBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterMVec2fBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderParameterMVec2fBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the \a index element the ShaderParameterMVec2f::_mfValue field.
inline
const Vec2f &ShaderParameterMVec2fBase::getValue(const UInt32 index) const
{
    return _mfValue[index];
}

inline
Vec2f &ShaderParameterMVec2fBase::editValue(const UInt32 index)
{
    editMField(ValueFieldMask, _mfValue);

    return _mfValue[index];
}

//! Get the ShaderParameterMVec2f::_mfValue field.
inline
MFVec2f &ShaderParameterMVec2fBase::editValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return _mfValue;
}

#ifdef OSG_1_GET_COMPAT
inline
Vec2f               &ShaderParameterMVec2fBase::getValue          (const UInt32 index)
{
    return this->editValue          (index);
}

inline
MFVec2f             &ShaderParameterMVec2fBase::getValue          (void)
{
    return this->editValue          ();
}

#endif


//! Get the ShaderParameterMVec2f::_mfValue field.
inline
const MFVec2f &ShaderParameterMVec2fBase::getValue(void) const
{
    return _mfValue;
}


#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ShaderParameterMVec2fBase::execSync(      ShaderParameterMVec2fBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.syncWith(pOther->_mfValue,
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderParameterMVec2fBase::execSync (      ShaderParameterMVec2fBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.syncWith(pFrom->_mfValue,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif

#if 0
inline
void ShaderParameterMVec2fBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *ShaderParameterMVec2fBase::getClassname(void)
{
    return "ShaderParameterMVec2f";
}
OSG_GEN_CONTAINERPTR(ShaderParameterMVec2f);

OSG_END_NAMESPACE

