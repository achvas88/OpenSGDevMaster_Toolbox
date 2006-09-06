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
 **     class SimpleStatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SimpleStatisticsForegroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SimpleStatisticsForegroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 SimpleStatisticsForegroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleStatisticsForeground::_sfSize field.

inline
Real32 &SimpleStatisticsForegroundBase::editSize(void)
{
    editSField(SizeFieldMask);

    return _sfSize.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfSize field.
inline
const Real32 &SimpleStatisticsForegroundBase::getSize(void) const
{
    return _sfSize.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &SimpleStatisticsForegroundBase::getSize(void)
{
    return this->editSize();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfSize field.
inline
void SimpleStatisticsForegroundBase::setSize(const Real32 &value)
{
    editSField(SizeFieldMask);

    _sfSize.setValue(value);
}
//! Get the value of the SimpleStatisticsForeground::_sfColor field.

inline
Color4f &SimpleStatisticsForegroundBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getColor(void) const
{
    return _sfColor.getValue();
}

#ifdef OSG_1_COMPAT
inline
Color4f &SimpleStatisticsForegroundBase::getColor(void)
{
    return this->editColor();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfColor field.
inline
void SimpleStatisticsForegroundBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}

//! Get the value of the \a index element the SimpleStatisticsForeground::_mfFormats field.
inline
const std::string &SimpleStatisticsForegroundBase::getFormats(const UInt32 index) const
{
    return _mfFormats[index];
}

inline
std::string &SimpleStatisticsForegroundBase::editFormats(const UInt32 index)
{
    editMField(FormatsFieldMask, _mfFormats);

    return _mfFormats[index];
}

//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
MFString &SimpleStatisticsForegroundBase::editFormats(void)
{
    editMField(FormatsFieldMask, _mfFormats);

    return _mfFormats;
}

#ifdef OSG_1_COMPAT
inline
std::string &SimpleStatisticsForegroundBase::getFormats(const UInt32 index)
{
    return this->editFormats(index);
}

inline
MFString &SimpleStatisticsForegroundBase::getFormats(void)
{
    return this->editFormats();
}

#endif


//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
const MFString &SimpleStatisticsForegroundBase::getFormats(void) const
{
    return _mfFormats;
}

//! create a new instance of the class
inline
SimpleStatisticsForegroundPtr SimpleStatisticsForegroundBase::create(void) 
{
    SimpleStatisticsForegroundPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<SimpleStatisticsForeground::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void SimpleStatisticsForegroundBase::execSync(      SimpleStatisticsForegroundBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (FormatsFieldMask & whichField))
        _mfFormats.syncWith(pOther->_mfFormats, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleStatisticsForegroundBase::execSync (      SimpleStatisticsForegroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void SimpleStatisticsForegroundBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (FormatsFieldMask & whichField))
    {
        _mfFormats.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *SimpleStatisticsForegroundBase::getClassname(void)
{
    return "SimpleStatisticsForeground";
}

typedef PointerBuilder<SimpleStatisticsForeground>::ObjPtr          SimpleStatisticsForegroundPtr;
typedef PointerBuilder<SimpleStatisticsForeground>::ObjPtrConst     SimpleStatisticsForegroundPtrConst;
typedef PointerBuilder<SimpleStatisticsForeground>::ObjConstPtr     SimpleStatisticsForegroundConstPtr;

typedef PointerBuilder<SimpleStatisticsForeground>::ObjPtrArg       SimpleStatisticsForegroundPtrArg;
typedef PointerBuilder<SimpleStatisticsForeground>::ObjConstPtrArg  SimpleStatisticsForegroundConstPtrArg;
typedef PointerBuilder<SimpleStatisticsForeground>::ObjPtrConstArg  SimpleStatisticsForegroundPtrConstArg;

OSG_END_NAMESPACE

#define OSGSIMPLESTATISTICSFOREGROUNDBASE_INLINE_CVSID "@(#)$Id: $"

