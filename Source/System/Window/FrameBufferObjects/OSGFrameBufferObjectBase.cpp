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
 **     Do not change this file, changes should be done in the derived      **
 **     class FrameBufferObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFRAMEBUFFEROBJECTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFrameBufferAttachment.h> // ColorAttachments Class
#include <OSGFrameBufferAttachment.h> // DepthAttachment Class
#include <OSGFrameBufferAttachment.h> // StencilAttachment Class

#include "OSGFrameBufferObjectBase.h"
#include "OSGFrameBufferObject.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FrameBufferObject
    Framebuffer object. Encapsulates FBOs as defined by the EXT_framebuffer_object
    OpenGL extension.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GLenum          FrameBufferObjectBase::_sfGLId
    The OpenGL texture id for this frame buffer object.
*/

/*! \var FrameBufferAttachmentPtr FrameBufferObjectBase::_mfColorAttachments
    GL_COLOR_ATTACHMENTX_EXT slots, position defines X. 
    This defines the target buffers for color attachments.
*/

/*! \var GLenum          FrameBufferObjectBase::_mfDrawBuffers
    The target draw buffers.  ex: GL_COLOR_ATTACHMENT0_EXT.
    These are used to call DrawBuffers to tell OpenGL what targets
    to render into.
*/

/*! \var FrameBufferAttachmentPtr FrameBufferObjectBase::_sfDepthAttachment
    GL_DEPTH_ATTACHMENT_EXT slot. The target for depth values.
*/

/*! \var FrameBufferAttachmentPtr FrameBufferObjectBase::_sfStencilAttachment
    GL_STENCIL_ATTACHMENT_EXT slot.
*/

/*! \var UInt16          FrameBufferObjectBase::_sfWidth
    
*/

/*! \var UInt16          FrameBufferObjectBase::_sfHeight
    
*/


void FrameBufferObjectBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFGLenum *(FrameBufferObjectBase::*GetSFGLIdF)(void) const;

    GetSFGLIdF GetSFGLId = &FrameBufferObjectBase::getSFGLId;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "GLId",
        "The OpenGL texture id for this frame buffer object.\n",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferObjectBase::editSFGLId),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGLId));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFGLId));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new MFFrameBufferAttachmentPtr::Description(
        MFFrameBufferAttachmentPtr::getClassType(),
        "colorAttachments",
        "GL_COLOR_ATTACHMENTX_EXT slots, position defines X. \n"
        "This defines the target buffers for color attachments.\n",
        ColorAttachmentsFieldId, ColorAttachmentsFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&FrameBufferObjectBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getMFColorAttachments));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const MFGLenum *(FrameBufferObjectBase::*GetMFDrawBuffersF)(void) const;

    GetMFDrawBuffersF GetMFDrawBuffers = &FrameBufferObjectBase::getMFDrawBuffers;
#endif

    pDesc = new MFGLenum::Description(
        MFGLenum::getClassType(),
        "drawBuffers",
        "The target draw buffers.  ex: GL_COLOR_ATTACHMENT0_EXT.\n"
        "These are used to call DrawBuffers to tell OpenGL what targets\n"
        "to render into.\n",
        DrawBuffersFieldId, DrawBuffersFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferObjectBase::editMFDrawBuffers),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFDrawBuffers));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getMFDrawBuffers));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFFrameBufferAttachmentPtr::Description(
        SFFrameBufferAttachmentPtr::getClassType(),
        "depthAttachment",
        "GL_DEPTH_ATTACHMENT_EXT slot. The target for depth values.\n",
        DepthAttachmentFieldId, DepthAttachmentFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&FrameBufferObjectBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFDepthAttachment));

    oType.addInitialDesc(pDesc);

    pDesc = new SFFrameBufferAttachmentPtr::Description(
        SFFrameBufferAttachmentPtr::getClassType(),
        "stencilAttachment",
        "GL_STENCIL_ATTACHMENT_EXT slot.\n",
        StencilAttachmentFieldId, StencilAttachmentFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&FrameBufferObjectBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFStencilAttachment));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt16 *(FrameBufferObjectBase::*GetSFWidthF)(void) const;

    GetSFWidthF GetSFWidth = &FrameBufferObjectBase::getSFWidth;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferObjectBase::editSFWidth),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFWidth));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFWidth));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt16 *(FrameBufferObjectBase::*GetSFHeightF)(void) const;

    GetSFHeightF GetSFHeight = &FrameBufferObjectBase::getSFHeight;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&FrameBufferObjectBase::editSFHeight),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHeight));
#else
        reinterpret_cast<FieldGetMethodSig >(&FrameBufferObjectBase::getSFHeight));
#endif

    oType.addInitialDesc(pDesc);
}


FrameBufferObjectBase::TypeObject FrameBufferObjectBase::_type(
    FrameBufferObjectBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &FrameBufferObjectBase::createEmpty,
    FrameBufferObject::initMethod,
    (InitalInsertDescFunc) &FrameBufferObjectBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "        name=\"FrameBufferObject\"\n"
    "        parent=\"AttachmentContainer\"\n"
    "        library=\"System\"\n"
    "        pointerfieldtypes=\"both\"\n"
    "        structure=\"concrete\"\n"
    "        systemcomponent=\"true\"\n"
    "        parentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    ">\n"
    "Framebuffer object. Encapsulates FBOs as defined by the EXT_framebuffer_object\n"
    "OpenGL extension.\n"
    "        <Field\n"
    "                name=\"GLId\"\n"
    "                type=\"GLenum\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"internal\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"0\"\n"
    "                fieldFlags=\"FClusterLocal\"\n"
    "        >\n"
    "        The OpenGL texture id for this frame buffer object.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"colorAttachments\"\n"
    "                type=\"FrameBufferAttachmentPtr\"\n"
    "                cardinality=\"multi\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        GL_COLOR_ATTACHMENTX_EXT slots, position defines X. \n"
    "        This defines the target buffers for color attachments.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"drawBuffers\"\n"
    "                type=\"GLenum\"\n"
    "                cardinality=\"multi\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"0\"\n"
    "        >\n"
    "        The target draw buffers.  ex: GL_COLOR_ATTACHMENT0_EXT.\n"
    "        These are used to call DrawBuffers to tell OpenGL what targets\n"
    "        to render into.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"depthAttachment\"\n"
    "                type=\"FrameBufferAttachmentPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        GL_DEPTH_ATTACHMENT_EXT slot. The target for depth values.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"stencilAttachment\"\n"
    "                type=\"FrameBufferAttachmentPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        GL_STENCIL_ATTACHMENT_EXT slot.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"width\"\n"
    "                type=\"UInt16\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"height\"\n"
    "                type=\"UInt16\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        </Field>\n"
    "</FieldContainer>\n",
    "Framebuffer object. Encapsulates FBOs as defined by the EXT_framebuffer_object\n"
    "OpenGL extension.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FrameBufferObjectBase::getType(void)
{
    return _type;
}

const FieldContainerType &FrameBufferObjectBase::getType(void) const
{
    return _type;
}

UInt32 FrameBufferObjectBase::getContainerSize(void) const
{
    return sizeof(FrameBufferObject);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *FrameBufferObjectBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFGLenum *FrameBufferObjectBase::getSFGLId(void) const
{
    return &_sfGLId;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *FrameBufferObjectBase::getSFGLId           (void)
{
    return this->editSFGLId           ();
}
#endif

//! Get the FrameBufferObject::_mfColorAttachments field.
const MFFrameBufferAttachmentPtr *FrameBufferObjectBase::getMFColorAttachments(void) const
{
    return &_mfColorAttachments;
}

MFGLenum *FrameBufferObjectBase::editMFDrawBuffers(void)
{
    editMField(DrawBuffersFieldMask, _mfDrawBuffers);

    return &_mfDrawBuffers;
}

const MFGLenum *FrameBufferObjectBase::getMFDrawBuffers(void) const
{
    return &_mfDrawBuffers;
}

#ifdef OSG_1_GET_COMPAT
MFGLenum            *FrameBufferObjectBase::getMFDrawBuffers    (void)
{
    return this->editMFDrawBuffers    ();
}
#endif

//! Get the FrameBufferObject::_sfDepthAttachment field.
const SFFrameBufferAttachmentPtr *FrameBufferObjectBase::getSFDepthAttachment(void) const
{
    return &_sfDepthAttachment;
}

//! Get the FrameBufferObject::_sfStencilAttachment field.
const SFFrameBufferAttachmentPtr *FrameBufferObjectBase::getSFStencilAttachment(void) const
{
    return &_sfStencilAttachment;
}

SFUInt16 *FrameBufferObjectBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt16 *FrameBufferObjectBase::getSFWidth(void) const
{
    return &_sfWidth;
}

#ifdef OSG_1_GET_COMPAT
SFUInt16            *FrameBufferObjectBase::getSFWidth          (void)
{
    return this->editSFWidth          ();
}
#endif

SFUInt16 *FrameBufferObjectBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFUInt16 *FrameBufferObjectBase::getSFHeight(void) const
{
    return &_sfHeight;
}

#ifdef OSG_1_GET_COMPAT
SFUInt16            *FrameBufferObjectBase::getSFHeight         (void)
{
    return this->editSFHeight         ();
}
#endif


void FrameBufferObjectBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->pushToColorAttachments(
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
    if(uiFieldId == DepthAttachmentFieldId)
    {
        static_cast<FrameBufferObject *>(this)->setDepthAttachment(
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
    if(uiFieldId == StencilAttachmentFieldId)
    {
        static_cast<FrameBufferObject *>(this)->setStencilAttachment(
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
}

void FrameBufferObjectBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->insertIntoColorAttachments(
            uiIndex,
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
}

void FrameBufferObjectBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->replaceInColorAttachments(
            uiIndex,
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
}

void FrameBufferObjectBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->replaceInColorAttachments(
            cast_dynamic<FrameBufferAttachmentPtr>(pOldElement),
            cast_dynamic<FrameBufferAttachmentPtr>(pNewElement));
    }
}

void FrameBufferObjectBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->removeFromColorAttachments(
            uiIndex);
    }
}

void FrameBufferObjectBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->removeFromColorAttachments(
            cast_dynamic<FrameBufferAttachmentPtr>(pElement));
    }
}

void FrameBufferObjectBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == ColorAttachmentsFieldId)
    {
        static_cast<FrameBufferObject *>(this)->clearColorAttachments();
    }
    if(uiFieldId == DepthAttachmentFieldId)
    {
        static_cast<FrameBufferObject *>(this)->setDepthAttachment(NullFC);
    }
    if(uiFieldId == StencilAttachmentFieldId)
    {
        static_cast<FrameBufferObject *>(this)->setStencilAttachment(NullFC);
    }
}

void FrameBufferObjectBase::pushToColorAttachments(FrameBufferAttachmentPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    addRef(value);

    _mfColorAttachments.push_back(value);
}

void FrameBufferObjectBase::insertIntoColorAttachments(UInt32                uiIndex,
                                                   FrameBufferAttachmentPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    MFFrameBufferAttachmentPtr::iterator fieldIt = _mfColorAttachments.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfColorAttachments.insert(fieldIt, value);
}

void FrameBufferObjectBase::replaceInColorAttachments(UInt32                uiIndex,
                                                       FrameBufferAttachmentPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfColorAttachments.size())
        return;

    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    addRef(value);

    subRef(_mfColorAttachments[uiIndex]);

    _mfColorAttachments[uiIndex] = value;
}

void FrameBufferObjectBase::replaceInColorAttachments(FrameBufferAttachmentPtrConstArg pOldElem,
                                                        FrameBufferAttachmentPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfColorAttachments.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

        MFFrameBufferAttachmentPtr::iterator fieldIt = _mfColorAttachments.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void FrameBufferObjectBase::removeFromColorAttachments(UInt32 uiIndex)
{
    if(uiIndex < _mfColorAttachments.size())
    {
        editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

        MFFrameBufferAttachmentPtr::iterator fieldIt = _mfColorAttachments.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        _mfColorAttachments.erase(fieldIt);
    }
}

void FrameBufferObjectBase::removeFromColorAttachments(FrameBufferAttachmentPtrConstArg value)
{
    Int32 iElemIdx = _mfColorAttachments.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

        MFFrameBufferAttachmentPtr::iterator fieldIt = _mfColorAttachments.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        _mfColorAttachments.erase(fieldIt);
    }
}
void FrameBufferObjectBase::clearColorAttachments(void)
{
    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    MFFrameBufferAttachmentPtr::iterator       fieldIt  = _mfColorAttachments.begin();
    MFFrameBufferAttachmentPtr::const_iterator fieldEnd = _mfColorAttachments.end  ();

    while(fieldIt != fieldEnd)
    {
        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfColorAttachments.clear();
}

/*********************************** Non-ptr code ********************************/
void FrameBufferObjectBase::pushToDrawBuffers(const GLenum& value)
{
    editMField(DrawBuffersFieldMask, _mfDrawBuffers);
    _mfDrawBuffers.push_back(value);
}

void FrameBufferObjectBase::insertIntoDrawBuffers(UInt32                uiIndex,
                                                   const GLenum& value   )
{
    editMField(DrawBuffersFieldMask, _mfDrawBuffers);

    MFGLenum::iterator fieldIt = _mfDrawBuffers.begin();

    fieldIt += uiIndex;

    _mfDrawBuffers.insert(fieldIt, value);
}

void FrameBufferObjectBase::replaceInDrawBuffers(UInt32                uiIndex,
                                                       const GLenum& value   )
{
    if(uiIndex >= _mfDrawBuffers.size())
        return;

    editMField(DrawBuffersFieldMask, _mfDrawBuffers);

    _mfDrawBuffers[uiIndex] = value;
}

void FrameBufferObjectBase::replaceInDrawBuffers(const GLenum& pOldElem,
                                                        const GLenum& pNewElem)
{
    Int32  elemIdx = _mfDrawBuffers.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(DrawBuffersFieldMask, _mfDrawBuffers);

        MFGLenum::iterator fieldIt = _mfDrawBuffers.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void FrameBufferObjectBase::removeFromDrawBuffers(UInt32 uiIndex)
{
    if(uiIndex < _mfDrawBuffers.size())
    {
        editMField(DrawBuffersFieldMask, _mfDrawBuffers);

        MFGLenum::iterator fieldIt = _mfDrawBuffers.begin();

        fieldIt += uiIndex;
        _mfDrawBuffers.erase(fieldIt);
    }
}

void FrameBufferObjectBase::removeFromDrawBuffers(const GLenum& value)
{
    Int32 iElemIdx = _mfDrawBuffers.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(DrawBuffersFieldMask, _mfDrawBuffers);

        MFGLenum::iterator fieldIt = _mfDrawBuffers.begin();

        fieldIt += iElemIdx;

        _mfDrawBuffers.erase(fieldIt);
    }
}

void FrameBufferObjectBase::clearDrawBuffers(void)
{
    editMField(DrawBuffersFieldMask, _mfDrawBuffers);

    _mfDrawBuffers.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 FrameBufferObjectBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }
    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
    {
        returnValue += _mfColorAttachments.getBinSize();
    }
    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
    {
        returnValue += _mfDrawBuffers.getBinSize();
    }
    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
    {
        returnValue += _sfDepthAttachment.getBinSize();
    }
    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
    {
        returnValue += _sfStencilAttachment.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }

    return returnValue;
}

void FrameBufferObjectBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
    {
        _mfColorAttachments.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
    {
        _mfDrawBuffers.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
    {
        _sfDepthAttachment.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
    {
        _sfStencilAttachment.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
}

void FrameBufferObjectBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
    {
        _mfColorAttachments.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
    {
        _mfDrawBuffers.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
    {
        _sfDepthAttachment.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
    {
        _sfStencilAttachment.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FrameBufferObjectPtr FrameBufferObjectBase::create(void)
{
    FrameBufferObjectPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<FrameBufferObject::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
FrameBufferObjectPtr FrameBufferObjectBase::createEmpty(void)
{
    FrameBufferObjectPtr returnValue;

    newPtr<FrameBufferObject>(returnValue);

    return returnValue;
}

FieldContainerPtr FrameBufferObjectBase::shallowCopy(void) const
{
    FrameBufferObjectPtr returnValue;

    newPtr(returnValue, dynamic_cast<const FrameBufferObject *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

FrameBufferObjectBase::FrameBufferObjectBase(void) :
    Inherited(),
    _sfGLId                   (GLenum(0)),
    _mfColorAttachments       (),
    _mfDrawBuffers            (GLenum(0)),
    _sfDepthAttachment        (),
    _sfStencilAttachment      (),
    _sfWidth                  (),
    _sfHeight                 ()
{
}

FrameBufferObjectBase::FrameBufferObjectBase(const FrameBufferObjectBase &source) :
    Inherited(source),
    _sfGLId                   (source._sfGLId                   ),
    _mfColorAttachments       (),
    _mfDrawBuffers            (source._mfDrawBuffers            ),
    _sfDepthAttachment        (),
    _sfStencilAttachment      (),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 )
{
}

/*-------------------------- destructors ----------------------------------*/

FrameBufferObjectBase::~FrameBufferObjectBase(void)
{
}

void FrameBufferObjectBase::onCreate(const FrameBufferObject *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFFrameBufferAttachmentPtr::const_iterator ColorAttachmentsIt  =
            source->_mfColorAttachments.begin();
        MFFrameBufferAttachmentPtr::const_iterator ColorAttachmentsEnd =
            source->_mfColorAttachments.end  ();

        while(ColorAttachmentsIt != ColorAttachmentsEnd)
        {
            this->pushToColorAttachments(*ColorAttachmentsIt);

            ++ColorAttachmentsIt;
        }

        this->setDepthAttachment(source->getDepthAttachment());

        this->setStencilAttachment(source->getStencilAttachment());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void FrameBufferObjectBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<FrameBufferObjectBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void FrameBufferObjectBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<FrameBufferObjectBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void FrameBufferObjectBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr FrameBufferObjectBase::createAspectCopy(void) const
{
    FrameBufferObjectPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FrameBufferObject *>(this));

    return returnValue;
}
#endif

void FrameBufferObjectBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FrameBufferObject *>(this)->setDepthAttachment(NullFC);

    static_cast<FrameBufferObject *>(this)->setStencilAttachment(NullFC);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

    static_cast<FrameBufferObject *>(this)->clearColorAttachments();
#ifdef OSG_MT_CPTR_ASPECT
    _mfDrawBuffers.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FrameBufferObjectPtr>::_type("FrameBufferObjectPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FrameBufferObjectPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, FrameBufferObjectPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, FrameBufferObjectPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
