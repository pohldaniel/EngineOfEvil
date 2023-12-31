/*
===========================================================================

Engine of Evil GPL Source Code
Copyright (C) 2016-2017 Thomas Matthew Freehill 

This file is part of the Engine of Evil GPL game engine source code. 

The Engine of Evil (EOE) Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

EOE Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with EOE Source Code.  If not, see <http://www.gnu.org/licenses/>.


If you have questions concerning this license, you may contact Thomas Freehill at tom.freehill26@gmail.com

===========================================================================
*/
#ifndef EVIL_ANIMATION_MANAGER_H
#define EVIL_ANIMATION_MANAGER_H

#include "Animation.h"
#include "ResourceManager.h"

//******************************************
//			eAnimationManager
// Handles all entity prefab allocation and freeing
// see also: eResourceManager template
//******************************************
class eAnimationManager : public eResourceManager<eAnimation> {
public:

	virtual bool							Init() override;
	virtual bool							LoadAndGet(const char * resourceFilename, std::shared_ptr<eAnimation> & result) override;

	virtual int								GetClassType() const override				{ return CLASS_ANIMATION_MANAGER; }
	virtual bool							IsClassType(int classType) const override	{ 
												if(classType == CLASS_ANIMATION_MANAGER) 
													return true; 
												return eResourceManager<eAnimation>::IsClassType(classType); 
											}
};

#endif  /* EVIL_ANIMATION_MANAGER_H */