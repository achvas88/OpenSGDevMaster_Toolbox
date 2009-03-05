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

#ifndef _OSGCHUNKOVERRIDEGROUP_H_
#define _OSGCHUNKOVERRIDEGROUP_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGChunkOverrideGroupBase.h"
#include "OSGChunkBlockFields.h"
#include "OSGChunkBlockMapFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief ChunkOverrideGroup class. See \ref
           PageSystemChunkOverrideGroup for a description.
*/

class OSG_SYSTEM_DLLMAPPING ChunkOverrideGroup : public ChunkOverrideGroupBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef ChunkOverrideGroupBase Inherited;
    typedef ChunkOverrideGroup     Self;

    typedef SFChunkBlockPtrMap     SFChunkBlockStorePtr;

    OSG_RC_FIRST_FIELD_DECL(ChunkBlockStore);
    OSG_RC_LAST_FIELD_DECL (ChunkBlockStore);

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Get                                     */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg   whichField);
    virtual void   copyToBin  (BinaryDataHandler  &pMem,
                               ConstFieldMaskArg   whichField);
    virtual void   copyFromBin(BinaryDataHandler  &pMem,
                               ConstFieldMaskArg   whichField);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Set                                     */
    /*! \{                                                                 */

    void             addChunkBlock(ChunkBlock       * const pChunkBlock,
                                   ChunkBlockMapKey         key    = 0);

    void             subChunkBlock(ChunkBlockMapKey         key    = 0);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Set                                     */
    /*! \{                                                                 */

    ChunkBlock *findChunkBlock(ChunkBlockMapKey key) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   your_category                              */
    /*! \{                                                                 */

    const SFChunkBlockStorePtr *getSFChunkBlockStore(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Rendering                                  */
    /*! \{                                                                 */

    virtual ChunkBlock *finalize(ChunkBlockMapKey oKey);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    bool addChunk(StateChunk *chunk, 
                  Int32       slot = State::AutoSlotReplace);

    bool subChunk(StateChunk *chunk, 
                  Int32       slot = State::AutoSlotReplace);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    Int32       find(      StateChunk      *chunk);
    StateChunk *find(const StateChunkClass &type, 
                           Int32            slot =State::AutoSlotReplace);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    typedef SFChunkBlockPtrMap::StoredType          ChunkBlockPtrMap;
    typedef ChunkBlockPtrMap  ::iterator            ChunkBlockPtrMapIt;
    typedef ChunkBlockPtrMap  ::const_iterator      ChunkBlockPtrMapConstIt;

    typedef SFChunkBlockPtrMap::EditHandle::KeyPool MapKeyPool;

    /*---------------------------------------------------------------------*/
    /*! \name                  Type information                            */
    /*! \{                                                                 */

    static void classDescInserter(TypeObject &oType);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFChunkBlockStorePtr _sfChunkBlockStore;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    ChunkOverrideGroup(void);
    ChunkOverrideGroup(const ChunkOverrideGroup &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ChunkOverrideGroup(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Changed                                 */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    void execSync  (      ChunkOverrideGroup *pFrom,
                          ConstFieldMaskArg   whichField,
                          AspectOffsetStore  &oOffsets,
                          ConstFieldMaskArg   syncMode  ,
                    const UInt32              uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   MT Destruction                             */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Render                                  */
    /*! \{                                                                 */

    ActionBase::ResultE renderEnter(Action *action);
    ActionBase::ResultE renderLeave(Action *action);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    EditFieldHandlePtr editHandleChunkBlockStore(void);
    GetFieldHandlePtr  getHandleChunkBlockStore (void) const;

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class ChunkOverrideGroupBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ChunkOverrideGroup &source);
};

typedef ChunkOverrideGroup *ChunkOverrideGroupP;

OSG_END_NAMESPACE

#include "OSGChunkOverrideGroupBase.inl"
#include "OSGChunkOverrideGroup.inl"

#endif /* _OSGCHUNKOVERRIDEGROUP_H_ */
