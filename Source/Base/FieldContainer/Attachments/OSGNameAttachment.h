/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2005 by the OpenSG Forum                          *
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

#ifndef _OSGNAMEATTACHMENT_H_
#define _OSGNAMEATTACHMENT_H_
#ifdef __sgi
#pragma once
#endif

#ifdef OSG_DOC_FILES_IN_MODULE
/*! \file OSGNameAttachments.h
    \ingroup GrpBaseFieldContainer
 */
#endif

#include "OSGBaseTypes.h"
#include "OSGSimpleAttachment.h"
#include "OSGBaseSFields.h"

OSG_BEGIN_NAMESPACE

/*! \ingroup GrpSystemFieldContainer
    \hideinhierarchy
 */

struct NameAttachmentDesc
{
    typedef SFString           FieldTypeT;

    static const Char8         *getTypeName  (void) 
    {
        return "Name";          
    }

    static const Char8         *getFieldName (void) 
    {
        return "name";          
    }

    static const Char8         *getGroupName (void) 
    { 
        return "name";          
    }

    static const Char8         *getParentTypeName(void) 
    {
        return "Attachment";    
    }

    static InitContainerF     getInitMethod(void) { return NULL;  }
};

/*! \ingroup GrpSystemFieldContainer
 */

typedef SimpleAttachment<NameAttachmentDesc> Name;

/*! \ingroup GrpSystemFieldContainer
 */

OSG_GEN_CONTAINERPTR(Name)  

#ifdef WIN32
template <> OSG_BASE_DLLMAPPING
SimpleAttachment<NameAttachmentDesc>::TypeObject &
    SimpleAttachment<NameAttachmentDesc>::getType(void);

template <> OSG_BASE_DLLMAPPING
const SimpleAttachment<NameAttachmentDesc>::TypeObject &
   SimpleAttachment<NameAttachmentDesc>::getType(void) const;

template <> OSG_BASE_DLLMAPPING
SimpleAttachment<NameAttachmentDesc>::TypeObject &
    SimpleAttachment<NameAttachmentDesc>::getClassType(void);
#endif

/*! \ingroup GrpSystemFieldContainerFuncs
 */

OSG_BASE_DLLMAPPING
const Char8 *getName(AttachmentContainer * const container);

/*! \ingroup GrpSystemFieldContainerFuncs
 */

OSG_BASE_DLLMAPPING
      void   setName(AttachmentContainer * const  container, 
                     std::string           const  &name     );

/*! \ingroup GrpSystemFieldContainerFuncs
 */

OSG_BASE_DLLMAPPING
      void   setName(AttachmentContainer * const  container, 
                     Char8                 const *name     );
 

OSG_END_NAMESPACE

#endif /* _OSGNAMEATTACHMENT_H_ */
