//======================================================================
//
// DraftSchematicGroupManager.h
// copyright (c) 2003 Sony Online Entertainment
//
//======================================================================

#ifndef INCLUDED_DraftSchematicGroupManager_H
#define INCLUDED_DraftSchematicGroupManager_H

#include <vector>

//======================================================================

class DraftSchematicGroupManager
{
public:

	typedef std::vector<std::string>                StringVector;
	typedef std::vector<std::pair<uint32, uint32> > SchematicVector;

	static void                         getGroups             (StringVector & sv);
	static bool                         getSchematicsForGroup (const std::string & group, SchematicVector & sv);
};

//======================================================================

#endif
