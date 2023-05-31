#include <string>
#include "login.h"
#include "config.h"
#include "utils/system/determinesystem.h"

int main( )
{
	std::string username, password, ip, port;
	
	// Get user login information
	getLoginInfo( username, password, ip, port );
	
	// Remove existing login file if it exists
	
	std::string filename = (getSystemName( ) == SYSTEMS::WINDOWS ? std::getenv( "USERPROFILE" ) : std::getenv( "HOME" )) + std::string( "/documents/.mclauncher/login-info.yaml" );
	
	// Create new login file
	createYamlConfigFile( username, password, ip, port );
	
	return 0;
}