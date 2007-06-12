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
 **     class CoreGLWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CoreGLWindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CoreGLWindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CoreGLWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CoreGLWindow::_sfContext field.

inline
CGLContextObj &CoreGLWindowBase::editContext(void)
{
    editSField(ContextFieldMask);

    return _sfContext.getValue();
}

//! Get the value of the CoreGLWindow::_sfContext field.
inline
const CGLContextObj &CoreGLWindowBase::getContext(void) const
{
    return _sfContext.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
CGLContextObj       &CoreGLWindowBase::getContext        (void)
{
    return this->editContext        ();
}
#endif

//! Set the value of the CoreGLWindow::_sfContext field.
inline
void CoreGLWindowBase::setContext(const CGLContextObj &value)
{
    editSField(ContextFieldMask);

    _sfContext.setValue(value);
}


#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void CoreGLWindowBase::execSync(      CoreGLWindowBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
        _sfContext.syncWith(pOther->_sfContext);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void CoreGLWindowBase::execSync (      CoreGLWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
        _sfContext.syncWith(pFrom->_sfContext);
}
#endif

#if 0
inline
void CoreGLWindowBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *CoreGLWindowBase::getClassname(void)
{
    return "CoreGLWindow";
}
OSG_GEN_CONTAINERPTR(CoreGLWindow);

OSG_END_NAMESPACE

