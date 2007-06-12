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
 **     class TextureGrabBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREGRABBACKGROUNDBASE_H_
#define _OSGTEXTUREGRABBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGSolidBackground.h" // Parent

#include "OSGTextureObjChunkFields.h" // Texture type
#include "OSGBoolFields.h" // AutoResize type
#include "OSGGLenumFields.h" // BindTarget type
#include "OSGGLenumFields.h" // CopyTarget type

#include "OSGTextureGrabBackgroundFields.h"

OSG_BEGIN_NAMESPACE

class TextureGrabBackground;

//! \brief TextureGrabBackground Base Class.

class OSG_WINDOW_DLLMAPPING TextureGrabBackgroundBase : public SolidBackground
{
  public:

    typedef SolidBackground Inherited;
    typedef SolidBackground ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TextureGrabBackground);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TextureFieldId = Inherited::NextFieldId,
        AutoResizeFieldId = TextureFieldId + 1,
        BindTargetFieldId = AutoResizeFieldId + 1,
        CopyTargetFieldId = BindTargetFieldId + 1,
        NextFieldId = CopyTargetFieldId + 1
    };

    static const OSG::BitVector TextureFieldMask =
        (TypeTraits<BitVector>::One << TextureFieldId);
    static const OSG::BitVector AutoResizeFieldMask =
        (TypeTraits<BitVector>::One << AutoResizeFieldId);
    static const OSG::BitVector BindTargetFieldMask =
        (TypeTraits<BitVector>::One << BindTargetFieldId);
    static const OSG::BitVector CopyTargetFieldMask =
        (TypeTraits<BitVector>::One << CopyTargetFieldId);
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

            const SFTextureObjChunkPtr *getSFTexture         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFAutoResize      (void);
#endif
                  SFBool              *editSFAutoResize     (void);
            const SFBool              *getSFAutoResize      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFBindTarget      (void);
#endif
                  SFGLenum            *editSFBindTarget     (void);
            const SFGLenum            *getSFBindTarget      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFCopyTarget      (void);
#endif
                  SFGLenum            *editSFCopyTarget     (void);
            const SFGLenum            *getSFCopyTarget      (void) const;


                  TextureObjChunkPtrConst getTexture        (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getAutoResize      (void);
#endif
                  bool                &editAutoResize     (void);
            const bool                &getAutoResize      (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getBindTarget      (void);
#endif
                  GLenum              &editBindTarget     (void);
            const GLenum              &getBindTarget      (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getCopyTarget      (void);
#endif
                  GLenum              &editCopyTarget     (void);
            const GLenum              &getCopyTarget      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTexture        (TextureObjChunkPtrConstArg value);
            void setAutoResize     (const bool &value);
            void setBindTarget     (const GLenum &value);
            void setCopyTarget     (const GLenum &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    virtual void pushToField     (      FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void insertIntoMField(const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(const UInt32                    uiIndex,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(      FieldContainerPtrConstArg pElement,
                                  const UInt32                    uiFieldId  );

    virtual void clearField      (const UInt32                    uiFieldId  );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

    static  TextureGrabBackgroundPtr create     (void);
    static  TextureGrabBackgroundPtr createEmpty(void);

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

    SFTextureObjChunkPtr _sfTexture;
    SFBool            _sfAutoResize;
    SFGLenum          _sfBindTarget;
    SFGLenum          _sfCopyTarget;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureGrabBackgroundBase(void);
    TextureGrabBackgroundBase(const TextureGrabBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureGrabBackgroundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextureGrabBackground *source = NULL);

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

            void execSync (      TextureGrabBackgroundBase *pFrom,
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

            void execSync (      TextureGrabBackgroundBase *pFrom,
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
    void operator =(const TextureGrabBackgroundBase &source);
};

typedef TextureGrabBackgroundBase *TextureGrabBackgroundBaseP;

/** Type specific RefPtr type for TextureGrabBackground. */
typedef RefPtr<TextureGrabBackgroundPtr> TextureGrabBackgroundRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<TextureGrabBackgroundBase::isNodeCore>,
    CoredNodePtr<TextureGrabBackground>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        TextureGrabBackgroundNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGTEXTUREGRABBACKGROUNDBASE_H_ */
