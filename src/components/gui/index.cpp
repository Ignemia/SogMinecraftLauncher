//
// Created by Andrea on 6/1/2023.
//

#include "index.h"

#define DEFAULT_LAUNCHER_HEIGHT 600
#define DEFAULT_LAUNCHER_WIDTH 800
#define DEFAULT_LAUNCHER_TITLE "Minecraft Launcher"

// Create a temporary window object with the specified width, height, and title
auto tempWindow = sf::Window( sf::VideoMode( DEFAULT_LAUNCHER_WIDTH, DEFAULT_LAUNCHER_HEIGHT ), DEFAULT_LAUNCHER_TITLE );

namespace launchergui
{
	// Constructor for GuiMain class
	GuiMain::GuiMain( )
	{
		// Set the main window pointer to the temporary window object
		l_mainWindow = &tempWindow;
		
		// Disable vertical synchronization
		l_mainWindow->setVerticalSyncEnabled( false );
		
		// Main event loop
		while ( l_mainWindow->isOpen( ) )
		{
			sf::Event evt;
			
			// Process events
			while ( l_mainWindow->pollEvent( evt ) )
			{
				// Check if the window is being closed
				if ( evt.type == sf::Event::Closed )
				{
					// Close the main window
					l_mainWindow->close( );
				}
			}
			
			// Display the contents of the main window
			l_mainWindow->display( );
		}
	}
}
