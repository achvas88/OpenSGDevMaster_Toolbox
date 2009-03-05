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
 **     class ChunkOverrideGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ChunkOverrideGroupBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ChunkOverrideGroupBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ChunkOverrideGroupBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the ChunkOverrideGroup::_sfFallbackChunkBlock field.
inline
ChunkBlock * ChunkOverrideGroupBase::getFallbackChunkBlock(void) const
{
    return _sfFallbackChunkBlock.getValue();
}

//! Set the value of the ChunkOverrideGroup::_sfFallbackChunkBlock field.
inline
void ChunkOverrideGroupBase::setFallbackChunkBlock(ChunkBlock * const value)
{
    editSField(FallbackChunkBlockFieldMask);

    _sfFallbackChunkBlock.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ChunkOverrideGroupBase::execSync (      ChunkOverrideGroupBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (FallbackChunkBlockFieldMask & whichField))
        _sfFallbackChunkBlock.syncWith(pFrom->_sfFallbackChunkBlock);
}
#endif


inline
const Char8 *ChunkOverrideGroupBase::getClassname(void)
{
    return "ChunkOverrideGroup";
}
OSG_GEN_CONTAINERPTR(ChunkOverrideGroup);

OSG_END_NAMESPACE

