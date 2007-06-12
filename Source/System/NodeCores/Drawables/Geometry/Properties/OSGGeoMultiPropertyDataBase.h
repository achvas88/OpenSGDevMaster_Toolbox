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
 **     class GeoMultiPropertyData
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGEOMULTIPROPERTYDATABASE_H_
#define _OSGGEOMULTIPROPERTYDATABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGUInt8Fields.h" // IData type
#include "OSGUInt32Fields.h" // GLId type

#include "OSGGeoMultiPropertyDataFields.h"

OSG_BEGIN_NAMESPACE

class GeoMultiPropertyData;

//! \brief GeoMultiPropertyData Base Class.

class OSG_DRAWABLE_DLLMAPPING GeoMultiPropertyDataBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(GeoMultiPropertyData);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        IDataFieldId = Inherited::NextFieldId,
        GLIdFieldId = IDataFieldId + 1,
        NextFieldId = GLIdFieldId + 1
    };

    static const OSG::BitVector IDataFieldMask =
        (TypeTraits<BitVector>::One << IDataFieldId);
    static const OSG::BitVector GLIdFieldMask =
        (TypeTraits<BitVector>::One << GLIdFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_GET_COMPAT
                  MFUInt8             *getMFIData           (void);
#endif
                  MFUInt8             *editMFIData          (void);
            const MFUInt8             *getMFIData           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFGLId            (void);
#endif
                  SFUInt32            *editSFGLId           (void);
            const SFUInt32            *getSFGLId            (void) const;


#ifdef OSG_1_GET_COMPAT
                  UInt8               &getIData           (const UInt32 index);
                  MFUInt8             &getIData          (void);
#endif
                  UInt8               &editIData          (const UInt32 index);
            const UInt8               &getIData           (const UInt32 index) const;
                  MFUInt8             &editIData          (void);
            const MFUInt8             &getIData          (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getGLId            (void);
#endif
                  UInt32              &editGLId           (void);
            const UInt32              &getGLId            (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGLId           (const UInt32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToIData                       (const UInt8     &value   );
    void insertIntoIData                   (      UInt32     uiIndex,
                                            const UInt8     &value   );
    void replaceInIData                    (      UInt32     uiIndex,
                                            const UInt8     &value   );
    void replaceInIData                    (const UInt8     &pOldElem,
                                            const UInt8     &pNewElem);
    void removeFromIData                   (      UInt32     uiIndex );
    void removeFromIData                   (const UInt8     &value   );
    void clearIData                        (      void               );


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  GeoMultiPropertyDataPtr create     (void);
    static  GeoMultiPropertyDataPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFUInt8           _mfIData;
    SFUInt32          _sfGLId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GeoMultiPropertyDataBase(void);
    GeoMultiPropertyDataBase(const GeoMultiPropertyDataBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GeoMultiPropertyDataBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      GeoMultiPropertyDataBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      GeoMultiPropertyDataBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const GeoMultiPropertyDataBase &source);
};

typedef GeoMultiPropertyDataBase *GeoMultiPropertyDataBaseP;

/** Type specific RefPtr type for GeoMultiPropertyData. */
typedef RefPtr<GeoMultiPropertyDataPtr> GeoMultiPropertyDataRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<GeoMultiPropertyDataBase::isNodeCore>,
    CoredNodePtr<GeoMultiPropertyData>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        GeoMultiPropertyDataNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGGEOMULTIPROPERTYDATABASE_H_ */
