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
 **     class ShaderParameterString!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterStringBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterStringBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 ShaderParameterStringBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShaderParameterString::_sfValue field.

inline
std::string &ShaderParameterStringBase::editValue(void)
{
    editSField(ValueFieldMask);

    return _sfValue.getValue();
}

//! Get the value of the ShaderParameterString::_sfValue field.
inline
const std::string &ShaderParameterStringBase::getValue(void) const
{
    return _sfValue.getValue();
}

#ifdef OSG_1_COMPAT
inline
std::string &ShaderParameterStringBase::getValue(void)
{
    return this->editValue();
}
#endif

//! Set the value of the ShaderParameterString::_sfValue field.
inline
void ShaderParameterStringBase::setValue(const std::string &value)
{
    editSField(ValueFieldMask);

    _sfValue.setValue(value);
}

//! create a new instance of the class
inline
ShaderParameterStringPtr ShaderParameterStringBase::create(void) 
{
    ShaderParameterStringPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<ShaderParameterString::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ShaderParameterStringBase::execSync(      ShaderParameterStringBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _sfValue.syncWith(pOther->_sfValue);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderParameterStringBase::execSync (      ShaderParameterStringBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void ShaderParameterStringBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *ShaderParameterStringBase::getClassname(void)
{
    return "ShaderParameterString";
}

typedef PointerBuilder<ShaderParameterString>::ObjPtr          ShaderParameterStringPtr;
typedef PointerBuilder<ShaderParameterString>::ObjPtrConst     ShaderParameterStringPtrConst;
typedef PointerBuilder<ShaderParameterString>::ObjConstPtr     ShaderParameterStringConstPtr;

typedef PointerBuilder<ShaderParameterString>::ObjPtrArg       ShaderParameterStringPtrArg;
typedef PointerBuilder<ShaderParameterString>::ObjConstPtrArg  ShaderParameterStringConstPtrArg;
typedef PointerBuilder<ShaderParameterString>::ObjPtrConstArg  ShaderParameterStringPtrConstArg;

OSG_END_NAMESPACE

#define OSGSHADERPARAMETERSTRINGBASE_INLINE_CVSID "@(#)$Id: $"

