/*
*	Copyright (C) 2013-2014, by loafofpiecrust
*
*	Licensed under the Apache License, Version 2.0 (the "License");
*	you may not use this file except in compliance with the License.
*	You may obtain a copy of the License in the accompanying LICENSE file or at
*		http://www.apache.org/licenses/LICENSE-2.0
*/
#pragma once

#include <lfant/stdafx.h>

// External

// Internal
#include <lfant/util/Path.h>
#include <lfant/Subsystem.h>


namespace lfant
{
/** @addtogroup Game
 *	@{
 */
/** @addtogroup Utilities
 *	@{
 */

/**
 *
 */
class FileSystem : public Subsystem
{
	friend class Settings;
public:
	FileSystem();
	~FileSystem();

	virtual void Init();

	path GetUserPath(string name) const;
	path GetGamePath(string name) const;

	std::deque<path> GetGameFiles(string dir) const;

	string GetProgramDir();

protected:

public:
	string programFolder = "./";
	string gameFolder = "../..";
	string userFolder;
};

/** @} */
/** @} */
}
