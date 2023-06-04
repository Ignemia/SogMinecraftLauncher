#include <iostream>
#include <vector>
#include <sstream>
#include <limits>
#include "login.h"

/**
* @brief Function to validate IPv4 address
*
* @param ipAddress The IPv4 address to be validated
* @return True if the address is valid, false otherwise
*/bool isValidIPv4Address( const std::string& ipAddress )
{
	std::vector< int > parts; // Vector to store each part of the address
	std::stringstream ss( ipAddress );
	std::string part;
	while ( std::getline( ss, part, '.' ) )
	{
		// Split the address using '.' as delimiter
		try
		{
			int value = std::stoi( part ); // Convert the part to an integer
			if ( value < 0 || value > 255 )
			{ // Part should be between 0 and 255
				return false;
			}
			parts.push_back( value ); // Add the part to the vector
		} catch ( const std::invalid_argument& e )
		{ // Part is not a valid integer
			return false;
		} catch ( const std::out_of_range& e )
		{ // Part is out of range
			return false;
		}
	}
	return parts.size( ) == 4; // Address should have exactly 4 parts
}

/**
 * @brief Function to validate IPv4 port
 *
 * @param port The port to be validated
 * @return True if the port is valid, false otherwise
 */
bool isValidIPv4Port( const std::string& port )
{
	std::stringstream ss( port );
	int p;
	if ( !( ss >> p ) || ( ss >> std::ws && !ss.eof( ) ) )
	{ // Check if input is a valid integer
		return false;
	} else
	{
		return p >= 0 && p <= std::numeric_limits< unsigned short >::max( ); // Port should be between 0 and 65535
	}
}

/**
 * @brief Function to get login information from user
 *
 * @param out_username The username entered by the user
 * @param out_password The password entered by the user
 * @param out_ip The server address entered by the user
 * @param out_port The server port entered by the user
 */
void getLoginInfo( std::string& out_username, std::string& out_password, std::string& out_ip, std::string& out_port )
{
//	while ( !isValidIPv4Address( out_ip ) )
//	{ // Keep asking for input until a valid IPv4 address is entered
//		if ( !out_ip.empty( ) )
//		{
//			std::cout << "Invalid IPv4 address: " << out_ip << std::endl;
//		}
//		std::cout << "Enter server address: ";
//		std::cin >> out_ip;
//	}
//	while ( !isValidIPv4Port( out_port ) )
//	{ // Keep asking for input until a valid IPv4 port is entered
//		if ( !out_port.empty( ) )
//		{
//			std::cout << "Invalid IPv4 port: " << out_port << std::endl;
//		}
//		std::cout << "Enter port for the server. If you are unsure use -1 we will scan for you:";
//		std::cin >> out_port;
//	}
//	std::cout << "Enter your username: ";
//	std::cin >> out_username;
//	std::cout << "Enter your password: ";
//	std::cin >> out_password;
//	std::cout << "\nServer: " << out_ip << ":" << out_port << "\nUsername: " << out_username << "\nPassword: " << out_password << '\n';
	out_username = "Andrea";
	out_password = "password";
	out_ip = "10.0.1.4";
	out_port = "25565";
}