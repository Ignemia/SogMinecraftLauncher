#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include "../../utils/system/determinesystem.h"

/**
 * @brief Function to create YAML config file
 *
 * @param in_username The username to be used for the config file
 * @param in_password The password to be used for the config file
 * @param in_ip The IP address to be used for the config file
 * @param in_port The port to be used for the config file
 */
void createYamlConfigFile( const std::string& in_username, const std::string& in_password, const std::string& in_ip, const std::string& in_port );

/**
 * @brief Function to remove a file
 *
 * @param in_filename The name of the file to be removed
 */
void removeFile( const std::string& in_filename );

#endif // CONFIG_H