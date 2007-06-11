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
 **     class ContainerPool!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECONTAINERPOOLINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFieldContainer.h> // Containers Class

#include "OSGContainerPoolBase.h"
#include "OSGContainerPool.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ContainerPool
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     ContainerPoolBase::_sfName
    The name of the container pool.  Can be used to identify pools.
*/

/*! \var FieldContainerPtr ContainerPoolBase::_mfContainers
    A list of containers held in the pool.
*/


void ContainerPoolBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFString *(ContainerPoolBase::*GetSFNameF)(void) const;

    GetSFNameF GetSFName = &ContainerPoolBase::getSFName;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "name",
        "The name of the container pool.  Can be used to identify pools.\n",
        NameFieldId, NameFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ContainerPoolBase::editSFName),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFName));
#else
        reinterpret_cast<FieldGetMethodSig >(&ContainerPoolBase::getSFName));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new MFFieldContainerPtr::Description(
        MFFieldContainerPtr::getClassType(),
        "containers",
        "A list of containers held in the pool.\n",
        ContainersFieldId, ContainersFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ContainerPoolBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ContainerPoolBase::getMFContainers));

    oType.addInitialDesc(pDesc);
}


ContainerPoolBase::TypeObject ContainerPoolBase::_type(
    ContainerPoolBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ContainerPoolBase::createEmpty,
    ContainerPool::initMethod,
    (InitalInsertDescFunc) &ContainerPoolBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ContainerPool\"\n"
    "\tparent=\"FieldContainerAttachment\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"name\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe name of the container pool.  Can be used to identify pools.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"containers\"\n"
    "\t\ttype=\"FieldContainerPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "                access=\"public\"\n"
    "\t>\n"
    "        A list of containers held in the pool.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ContainerPoolBase::getType(void)
{
    return _type;
}

const FieldContainerType &ContainerPoolBase::getType(void) const
{
    return _type;
}

UInt32 ContainerPoolBase::getContainerSize(void) const
{
    return sizeof(ContainerPool);
}

/*------------------------- decorator get ------------------------------*/


SFString *ContainerPoolBase::editSFName(void)
{
    editSField(NameFieldMask);

    return &_sfName;
}

const SFString *ContainerPoolBase::getSFName(void) const
{
    return &_sfName;
}

#ifdef OSG_1_GET_COMPAT
SFString            *ContainerPoolBase::getSFName           (void)
{
    return this->editSFName           ();
}
#endif

//! Get the ContainerPool::_mfContainers field.
const MFFieldContainerPtr *ContainerPoolBase::getMFContainers(void) const
{
    return &_mfContainers;
}


void ContainerPoolBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == ContainersFieldId)
    {
        static_cast<ContainerPool *>(this)->pushToContainers(
            cast_dynamic<FieldContainerPtr>(pNewElement));
    }
}

void ContainerPoolBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ContainersFieldId)
    {
        static_cast<ContainerPool *>(this)->insertIntoContainers(
            uiIndex,
            cast_dynamic<FieldContainerPtr>(pNewElement));
    }
}

void ContainerPoolBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ContainersFieldId)
    {
        static_cast<ContainerPool *>(this)->replaceInContainers(
            uiIndex,
            cast_dynamic<FieldContainerPtr>(pNewElement));
    }
}

void ContainerPoolBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

    if(uiFieldId == ContainersFieldId)
    {
        static_cast<ContainerPool *>(this)->replaceInContainers(
            cast_dynamic<FieldContainerPtr>(pOldElement),
            cast_dynamic<FieldContainerPtr>(pNewElement));
    }
}

void ContainerPoolBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

    if(uiFieldId == ContainersFieldId)
    {
        static_cast<ContainerPool *>(this)->removeFromContainers(
            uiIndex);
    }
}

void ContainerPoolBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

    if(uiFieldId == ContainersFieldId)
    {
        static_cast<ContainerPool *>(this)->removeFromContainers(
            cast_dynamic<FieldContainerPtr>(pElement));
    }
}

void ContainerPoolBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == ContainersFieldId)
    {
        static_cast<ContainerPool *>(this)->clearContainers();
    }
}

void ContainerPoolBase::pushToContainers(FieldContainerPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ContainersFieldMask, _mfContainers);

    addRef(value);

    _mfContainers.push_back(value);
}

void ContainerPoolBase::insertIntoContainers(UInt32                uiIndex,
                                                   FieldContainerPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ContainersFieldMask, _mfContainers);

    MFFieldContainerPtr::iterator fieldIt = _mfContainers.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfContainers.insert(fieldIt, value);
}

void ContainerPoolBase::replaceInContainers(UInt32                uiIndex,
                                                       FieldContainerPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfContainers.size())
        return;

    editMField(ContainersFieldMask, _mfContainers);

    addRef(value);

    subRef(_mfContainers[uiIndex]);

    _mfContainers[uiIndex] = value;
}

void ContainerPoolBase::replaceInContainers(FieldContainerPtrConstArg pOldElem,
                                                        FieldContainerPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfContainers.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ContainersFieldMask, _mfContainers);

        MFFieldContainerPtr::iterator fieldIt = _mfContainers.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void ContainerPoolBase::removeFromContainers(UInt32 uiIndex)
{
    if(uiIndex < _mfContainers.size())
    {
        editMField(ContainersFieldMask, _mfContainers);

        MFFieldContainerPtr::iterator fieldIt = _mfContainers.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        _mfContainers.erase(fieldIt);
    }
}

void ContainerPoolBase::removeFromContainers(FieldContainerPtrConstArg value)
{
    Int32 iElemIdx = _mfContainers.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ContainersFieldMask, _mfContainers);

        MFFieldContainerPtr::iterator fieldIt = _mfContainers.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        _mfContainers.erase(fieldIt);
    }
}
void ContainerPoolBase::clearContainers(void)
{
    editMField(ContainersFieldMask, _mfContainers);

    MFFieldContainerPtr::iterator       fieldIt  = _mfContainers.begin();
    MFFieldContainerPtr::const_iterator fieldEnd = _mfContainers.end  ();

    while(fieldIt != fieldEnd)
    {
        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfContainers.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ContainerPoolBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }
    if(FieldBits::NoField != (ContainersFieldMask & whichField))
    {
        returnValue += _mfContainers.getBinSize();
    }

    return returnValue;
}

void ContainerPoolBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ContainersFieldMask & whichField))
    {
        _mfContainers.copyToBin(pMem);
    }
}

void ContainerPoolBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ContainersFieldMask & whichField))
    {
        _mfContainers.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ContainerPoolPtr ContainerPoolBase::createEmpty(void)
{
    ContainerPoolPtr returnValue;

    newPtr<ContainerPool>(returnValue);

    return returnValue;
}

FieldContainerPtr ContainerPoolBase::shallowCopy(void) const
{
    ContainerPoolPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ContainerPool *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ContainerPoolBase::ContainerPoolBase(void) :
    Inherited(),
    _sfName                   (),
    _mfContainers             ()
{
}

ContainerPoolBase::ContainerPoolBase(const ContainerPoolBase &source) :
    Inherited(source),
    _sfName                   (source._sfName                   ),
    _mfContainers             ()
{
}

/*-------------------------- destructors ----------------------------------*/

ContainerPoolBase::~ContainerPoolBase(void)
{
}

void ContainerPoolBase::onCreate(const ContainerPool *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFFieldContainerPtr::const_iterator ContainersIt  =
            source->_mfContainers.begin();
        MFFieldContainerPtr::const_iterator ContainersEnd =
            source->_mfContainers.end  ();

        while(ContainersIt != ContainersEnd)
        {
            this->pushToContainers(*ContainersIt);

            ++ContainersIt;
        }
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void ContainerPoolBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ContainerPoolBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ContainerPoolBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ContainerPoolBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ContainerPoolBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ContainerPoolBase::createAspectCopy(void) const
{
    ContainerPoolPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ContainerPool *>(this));

    return returnValue;
}
#endif

void ContainerPoolBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<ContainerPool *>(this)->clearContainers();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ContainerPoolPtr>::_type("ContainerPoolPtr", "FieldContainerAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ContainerPoolPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ContainerPoolPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ContainerPoolPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
