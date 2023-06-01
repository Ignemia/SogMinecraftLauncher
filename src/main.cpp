/**
 * @file main.cpp
 * @brief This program retrieves user login information, opens a GUI window, and creates a YAML configuration file with the login information.
 */

#include <string>
#include "components/config/config.h"
#include "components/gui/index.h"
#include "components/login/login.h"

/**
* @brief Creates and returns a GUI window using the GuiMain class.
* @return A reference to a GuiMain object representing the main GUI window.
*/
launchergui::GuiMain& createWindow( )
{
	return *( new launchergui::GuiMain( ) );
}

/**
* @brief Main function that retrieves user login information, opens a GUI window, and creates a YAML configuration file with the login information.
* @return 0 upon successful completion of the program.
*/
int main( )
{
	std::string username; // Variable to store the username
	std::string password; // Variable to store the password
	std::string ip; // Variable to store the IP address
	std::string port; // Variable to store the port number
	
	getLoginInfo( username, password, ip, port ); // Prompts the user for login information
	
	launchergui::GuiMain& gui = createWindow( ); // Creates the main GUI window
	
	createYamlConfigFile( username, password, ip, port ); // Creates a YAML configuration file with the login information
	
	delete &gui; // Frees the memory allocated by createWindow()
	
	return 0;
}
