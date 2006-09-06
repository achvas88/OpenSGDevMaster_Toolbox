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
 **     class FrameBufferAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FrameBufferAttachmentBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 FrameBufferAttachmentBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 FrameBufferAttachmentBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the FrameBufferAttachment::_sfWidth field.

inline
UInt16 &FrameBufferAttachmentBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the FrameBufferAttachment::_sfWidth field.
inline
const UInt16 &FrameBufferAttachmentBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt16 &FrameBufferAttachmentBase::getWidth(void)
{
    return this->editWidth();
}
#endif

//! Set the value of the FrameBufferAttachment::_sfWidth field.
inline
void FrameBufferAttachmentBase::setWidth(const UInt16 &value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the FrameBufferAttachment::_sfHeight field.

inline
UInt16 &FrameBufferAttachmentBase::editHeight(void)
{
    editSField(HeightFieldMask);

    return _sfHeight.getValue();
}

//! Get the value of the FrameBufferAttachment::_sfHeight field.
inline
const UInt16 &FrameBufferAttachmentBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt16 &FrameBufferAttachmentBase::getHeight(void)
{
    return this->editHeight();
}
#endif

//! Set the value of the FrameBufferAttachment::_sfHeight field.
inline
void FrameBufferAttachmentBase::setHeight(const UInt16 &value)
{
    editSField(HeightFieldMask);

    _sfHeight.setValue(value);
}


#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void FrameBufferAttachmentBase::execSync(      FrameBufferAttachmentBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pOther->_sfHeight);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void FrameBufferAttachmentBase::execSync (      FrameBufferAttachmentBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void FrameBufferAttachmentBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *FrameBufferAttachmentBase::getClassname(void)
{
    return "FrameBufferAttachment";
}

typedef PointerBuilder<FrameBufferAttachment>::ObjPtr          FrameBufferAttachmentPtr;
typedef PointerBuilder<FrameBufferAttachment>::ObjPtrConst     FrameBufferAttachmentPtrConst;
typedef PointerBuilder<FrameBufferAttachment>::ObjConstPtr     FrameBufferAttachmentConstPtr;

typedef PointerBuilder<FrameBufferAttachment>::ObjPtrArg       FrameBufferAttachmentPtrArg;
typedef PointerBuilder<FrameBufferAttachment>::ObjConstPtrArg  FrameBufferAttachmentConstPtrArg;
typedef PointerBuilder<FrameBufferAttachment>::ObjPtrConstArg  FrameBufferAttachmentPtrConstArg;

OSG_END_NAMESPACE

#define OSGFRAMEBUFFERATTACHMENTBASE_INLINE_CVSID "@(#)$Id: $"

