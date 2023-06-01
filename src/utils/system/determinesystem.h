//
// Created by Andrea on 6/1/2023.
//

#pragma once

#include <string>
#include <sys/utsname.h>

namespace syslib {
	enum SYSTEMS
	{
		UNKNOWN, WINDOWS, LINUX
	};
	
	uint8_t getSystemName( );
}

