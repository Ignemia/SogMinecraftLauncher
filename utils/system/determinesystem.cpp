//
// Created by Andrea on 6/1/2023.
//

#include "determinesystem.h"

uint8_t getSystemName( )
{
	struct utsname info{};
	if ( uname( &info ) == 0 )
	{
		std::string os = info.sysname;
		if ( os == "Linux" )
		{
			return SYSTEMS::LINUX;
		} else if ( os == "Windows" )
		{
			return SYSTEMS::WINDOWS;
		}
	}
	return SYSTEMS::UNKNOWN;
}


