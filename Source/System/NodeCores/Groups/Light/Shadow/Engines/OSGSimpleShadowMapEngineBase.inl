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
 **     class SimpleShadowMapEngine!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SimpleShadowMapEngineBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SimpleShadowMapEngineBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 SimpleShadowMapEngineBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleShadowMapEngine::_sfForceTextureUnit field.

inline
Int32 &SimpleShadowMapEngineBase::editForceTextureUnit(void)
{
    editSField(ForceTextureUnitFieldMask);

    return _sfForceTextureUnit.getValue();
}

//! Get the value of the SimpleShadowMapEngine::_sfForceTextureUnit field.
inline
const Int32 &SimpleShadowMapEngineBase::getForceTextureUnit(void) const
{
    return _sfForceTextureUnit.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32 &SimpleShadowMapEngineBase::getForceTextureUnit(void)
{
    return this->editForceTextureUnit();
}
#endif

//! Set the value of the SimpleShadowMapEngine::_sfForceTextureUnit field.
inline
void SimpleShadowMapEngineBase::setForceTextureUnit(const Int32 &value)
{
    editSField(ForceTextureUnitFieldMask);

    _sfForceTextureUnit.setValue(value);
}

//! create a new instance of the class
inline
SimpleShadowMapEnginePtr SimpleShadowMapEngineBase::create(void) 
{
    SimpleShadowMapEnginePtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<SimpleShadowMapEngine::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void SimpleShadowMapEngineBase::execSync(      SimpleShadowMapEngineBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
        _sfForceTextureUnit.syncWith(pOther->_sfForceTextureUnit);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleShadowMapEngineBase::execSync (      SimpleShadowMapEngineBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void SimpleShadowMapEngineBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *SimpleShadowMapEngineBase::getClassname(void)
{
    return "SimpleShadowMapEngine";
}

typedef PointerBuilder<SimpleShadowMapEngine>::ObjPtr          SimpleShadowMapEnginePtr;
typedef PointerBuilder<SimpleShadowMapEngine>::ObjPtrConst     SimpleShadowMapEnginePtrConst;
typedef PointerBuilder<SimpleShadowMapEngine>::ObjConstPtr     SimpleShadowMapEngineConstPtr;

typedef PointerBuilder<SimpleShadowMapEngine>::ObjPtrArg       SimpleShadowMapEnginePtrArg;
typedef PointerBuilder<SimpleShadowMapEngine>::ObjConstPtrArg  SimpleShadowMapEngineConstPtrArg;
typedef PointerBuilder<SimpleShadowMapEngine>::ObjPtrConstArg  SimpleShadowMapEnginePtrConstArg;

OSG_END_NAMESPACE

#define OSGSIMPLESHADOWMAPENGINEBASE_INLINE_CVSID "@(#)$Id: $"

