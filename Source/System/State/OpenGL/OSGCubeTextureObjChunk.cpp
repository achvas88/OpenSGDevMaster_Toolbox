/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <boost/bind.hpp>

#include <OSGConfig.h>

#include <OSGGL.h>
#include <OSGGLU.h>
#include <OSGGLEXT.h>
#include <OSGDrawEnv.h>

#include "OSGCubeTextureObjChunk.h"

OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::CubeTextureObjChunk
    \ingroup GrpSystemState

See \ref PageSystemCubeTextureObjChunk for a description.

The CubeTexture is defined by 6 separate texture images. As it is derived from 
the standard texture chunk it already has an image, which is used for the 
negative Z direction. The other 5 images are stored in variables that are named
according to the direction they represent (osg::CubeTextureObjChunk::_sfPosZImage,
osg::CubeTextureObjChunk::_sfNegYImage, osg::CubeTextureObjChunk::_sfPosYImage, 
osg::CubeTextureObjChunk::_sfNegXImage, osg::CubeTextureObjChunk::_sfPosXImage).

*/


void CubeTextureObjChunk::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  public                                                                 -
\*-------------------------------------------------------------------------*/

/*------------- constructors & destructors --------------------------------*/

CubeTextureObjChunk::CubeTextureObjChunk(void) :
    Inherited()
{
}

CubeTextureObjChunk::CubeTextureObjChunk(const CubeTextureObjChunk &source) :
    Inherited(source)
{
}

CubeTextureObjChunk::~CubeTextureObjChunk(void)
{
}

/*------------------------- Chunk Class Access ---------------------------*/

const StateChunkClass *CubeTextureObjChunk::getClass(void) const
{
    return TextureBaseChunk::getClass();
}

/*------------------------------- Sync -----------------------------------*/

void CubeTextureObjChunk::changed(ConstFieldMaskArg whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

/*----------------------------- onCreate --------------------------------*/

void CubeTextureObjChunk::onCreate(const CubeTextureObjChunk *)
{
    if(GlobalSystemState == Startup)
        return;

    CubeTextureObjChunkPtr tmpPtr = 
        Inherited::constructPtr<CubeTextureObjChunk>(this);

    setGLId(
        Window::registerGLObject(
            boost::bind(&CubeTextureObjChunk::handleGL, tmpPtr, _1, _2),
            1));
}

/*------------------------------ Output ----------------------------------*/

void CubeTextureObjChunk::dump(      UInt32    , 
                               const BitVector ) const
{
    SLOG << "Dump CubeTextureObjChunk NI" << std::endl;
}


/*-------------------------------- GL ------------------------------------*/

void CubeTextureObjChunk::handleGL(DrawEnv *pEnv, UInt32 idstatus)
{
    Window::GLObjectStatusE mode;

    UInt32  osgid;
    GLuint  id;

    Window *win = pEnv->getWindow();

    // does the window support cubemaps?
    if(win->hasExtension(_arbCubeTex) == false)
        return;
        
    Window::unpackIdStatus(idstatus, osgid, mode);

    id = win->getGLObjectId(osgid);

    if(mode == Window::destroy)
    {
        glDeleteTextures(1, &id);
    }
    else if(mode == Window::finaldestroy)
    {
        //SWARNING << "Last texture user destroyed" << std::endl;
    }
    else if(mode == Window::initialize || mode == Window::reinitialize)
    {
        if(mode == Window::initialize)
        {
            glGenTextures(1, &id);

            win->setGLObjectId(osgid, id);
        }

        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB, 
                      mode, getImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB, 
                      Window::initialize, getPosZImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB, 
                      Window::initialize, getNegYImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB, 
                      Window::initialize, getPosYImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB, 
                      Window::initialize, getNegXImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB, 
                      Window::initialize, getPosXImage());        
    }
    else if(mode == Window::needrefresh)
    {
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB, 
                      mode, getImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB, 
                      mode, getPosZImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB, 
                      mode, getNegYImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB, 
                      mode, getPosYImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB, 
                      mode, getNegXImage());        
        handleTexture(win, id, 
                      GL_TEXTURE_CUBE_MAP_ARB, 
                      GL_NONE, 
                      GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB, 
                      mode, getPosXImage());        
    }
    else
    {
        SWARNING << "Win:" << win << "TextureObjChunk(" << this 
                 << "::handleGL: Illegal mode: "
                 << mode << " for id " << id << std::endl;
    }
}


/*------------------------------ State ------------------------------------*/

void CubeTextureObjChunk::activate(DrawEnv *pEnv, UInt32 idx)
{   
    // does the window support cubemaps?
    if(pEnv->getWindow()->hasExtension(_arbCubeTex) == false)
        return;
        
    Window *win = pEnv->getWindow();
    
    Real32 nteximages, ntexcoords;

    if((nteximages = win->getConstantValue(GL_MAX_TEXTURE_IMAGE_UNITS_ARB)) ==
       Window::unknownConstant)
    {
        nteximages = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

        // sgi doesn't support GL_MAX_TEXTURE_UNITS_ARB!
        if(nteximages == Window::unknownConstant)
            nteximages = 1.0f;
    }

    if((ntexcoords = win->getConstantValue(GL_MAX_TEXTURE_COORDS_ARB)) ==
       Window::unknownConstant)
    {
        ntexcoords = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

        // sgi doesn't support GL_MAX_TEXTURE_UNITS_ARB!
        if(ntexcoords == Window::unknownConstant)
            ntexcoords = 1.0f;
    }

    if(idx >= static_cast<UInt32>(nteximages))
    {
#ifdef OSG_DEBUG
        FWARNING(("CubeTextureObjChunk::activate: Trying to bind image unit "
                  "%d, but Window %p only supports %d!\n",
                  idx, win, nteximages));
#endif
        return;        
    }
    

    TextureBaseChunk::activateTexture(win, idx);

    glErr("CubeTextureObjChunk::activate precheck");
    
    win->validateGLObject(getGLId(), pEnv);

  
    FDEBUG(("CubeTextureObjChunk::activate - %d\n", getGLId()));

    glBindTexture(GL_TEXTURE_CUBE_MAP_ARB, win->getGLObjectId(getGLId()));

    pEnv->setActiveTexTarget(idx, GL_TEXTURE_CUBE_MAP_ARB);

    glErr("CubeTextureObjChunk::activate");
}

void CubeTextureObjChunk::changeFrom(DrawEnv    *pEnv, 
                                  StateChunk *old   , 
                                  UInt32      idx   )
{
    // does the window support cubemaps?
    if(pEnv->getWindow()->hasExtension(_arbCubeTex) == false)
        return;
        
    // change from me to me?
    // this assumes I haven't changed in the meantime. 
    // is that a valid assumption?
    if(old == this)
        return;
    
    // If the old one is not a cube texture chunk, deactivate it and
    // activate ourselves
    if(getTypeId() != old->getTypeId())
    {
        old->deactivate(pEnv, idx);
        activate(pEnv, idx);
        return;
    }

    Window *win = pEnv->getWindow();   

    if(TextureBaseChunk::activateTexture(win, idx))
        return; // trying to use too many textures

    glErr("CubeTextureObjChunk::changeFrom precheck");

    UInt32 nteximages, ntexcoords, ntexunits;

    Real32 dummy = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

    if(dummy == Window::unknownConstant)
    {
        ntexunits = 1;
    }
    else
    {
        ntexunits = static_cast<UInt32>(dummy);
    }
   
    
    if((dummy = win->getConstantValue(GL_MAX_TEXTURE_COORDS_ARB)) ==
       Window::unknownConstant)
    {
        ntexcoords = ntexunits;
    }
    else
    {
        ntexcoords = static_cast<UInt32>(dummy);
    }

    if(idx >= nteximages)
    {
#ifdef OSG_DEBUG
        FWARNING(("TextureObjChunk::activate: Trying to bind image unit %d,"
                  " but Window %p only supports %d!\n",
                  idx, win, nteximages));
#endif
        return;        
    }

    win->validateGLObject(getGLId(), pEnv);
    
    FDEBUG(("CubeTextureObjChunk::activate - %d\n", getGLId()));

    glBindTexture(GL_TEXTURE_CUBE_MAP_ARB, win->getGLObjectId(getGLId()));

    pEnv->setActiveTexTarget(idx, GL_TEXTURE_CUBE_MAP_ARB);


    glErr("CubeTextureObjChunk::changeFrom");
}

void CubeTextureObjChunk::deactivate(DrawEnv *pEnv, UInt32 idx)
{
    // does the window support cubemaps?
    if(pEnv->getWindow()->hasExtension(_arbCubeTex) == false)
        return;
        
    Window *win = pEnv->getWindow();   

    Real32 nteximages, ntexcoords;
    if((nteximages = win->getConstantValue(GL_MAX_TEXTURE_IMAGE_UNITS_ARB)) ==
       Window::unknownConstant )
    {
        nteximages = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

        // sgi doesn't support GL_MAX_TEXTURE_UNITS_ARB!
        if(nteximages == Window::unknownConstant)
            nteximages = 1.0f;
    }

    if((ntexcoords = win->getConstantValue(GL_MAX_TEXTURE_COORDS_ARB)) ==
       Window::unknownConstant )
    {
        ntexcoords = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

        // sgi doesn't support GL_MAX_TEXTURE_UNITS_ARB!
        if(ntexcoords == Window::unknownConstant)
            ntexcoords = 1.0f;
    }

    if(idx >= static_cast<UInt32>(nteximages))
    {
#ifdef OSG_DEBUG
        FWARNING(("CubeTextureObjChunk::deactivate: Trying to bind image unit"
                  " %d, but Window %p only supports %d!\n",
                  idx, win, nteximages));
#endif
        return;        
    }

    TextureBaseChunk::activateTexture(win, idx);

    glDisable(GL_TEXTURE_CUBE_MAP_ARB);

    pEnv->setActiveTexTarget(idx, GL_NONE);

    glErr("CubeTextureObjChunk::deactivate");
}

/*-------------------------- Comparison -----------------------------------*/

Real32 CubeTextureObjChunk::switchCost(StateChunk *OSG_CHECK_ARG(chunk))
{
    return 0;
}

bool CubeTextureObjChunk::operator < (const StateChunk &other) const
{
    return this < &other;
}

bool CubeTextureObjChunk::operator == (const StateChunk &other) const
{
    CubeTextureObjChunk const *tother = 
        dynamic_cast<CubeTextureObjChunk const*>(&other);

    if(!tother)
        return false;

    if(tother == this)
        return true;

    return  TextureBaseChunk::operator==(other)       &&
            getPosZImage()  == tother->getPosZImage() &&
            getPosYImage()  == tother->getPosYImage() &&
            getNegYImage()  == tother->getNegYImage() &&
            getPosXImage()  == tother->getPosXImage() &&
            getNegXImage()  == tother->getNegXImage();
}

bool CubeTextureObjChunk::operator != (const StateChunk &other) const
{
    return ! (*this == other);
}

/*-------------------------------------------------------------------------*/
/*                              cvs id's                                   */

#ifdef __sgi
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp[] = "@(#)$Id: $";
    static Char8 cvsid_hpp[] = OSGCUBETEXTUREOBJCHUNK_HEADER_CVSID;
    static Char8 cvsid_inl[] = OSGCUBETEXTUREOBJCHUNK_INLINE_CVSID;
}