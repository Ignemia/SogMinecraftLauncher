/**
 * @file config.h
 * @brief Header file for configuration functions
 */

#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>

void createYamlConfigFile( const std::string& in_username, const std::string& in_password, const std::string& in_ip, const std::string& in_port )
{
	// Create a YAML document with the login information
	std::ostringstream out;
	out << in_ip << ":" << in_port << ":\n" << "  username: " << in_username << "\n" << "  password: " << in_password << "\n";
	
	// Get the user's Documents folder path
	const char* userProfile = std::getenv( "USERPROFILE" );
	if ( userProfile == nullptr )
	{
		std::perror( "Error getting user profile" );
		return;
	}
	std::string documentsPath = std::string( userProfile ) + "\\Documents";
	
	// Create the .mclauncher directory if it doesn't exist
	std::string launcherPath = documentsPath + "\\.mclauncher";
	std::filesystem::create_directories( launcherPath.c_str( ) );
	
	// Write the YAML document to a file
	std::string filePath = launcherPath + "\\login-info.yaml";
	std::ofstream file( filePath );
	if ( !file.is_open( ) )
	{
		std::perror( "Error opening file for writing" );
		return;
	}
	file << out.str( );
	file.close( );
}

void removeFile( const std::string& in_filename )
{
	// Check if file removal was successful
	if ( std::remove( in_filename.c_str( ) ) != 0 )
	{
		std::perror( "Error removing file" );
	}
}