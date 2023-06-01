#pragma once

#include <SFML/Graphics.hpp>

namespace launchergui {
	/**
	 * @brief The GuiMain class represents the main GUI window of the Minecraft Launcher.
	 */
	class GuiMain {
	public:
		/**
		 * @brief Constructor that creates the main GUI window.
		 */
		GuiMain();
	private:
		sf::Window* l_mainWindow; /**< A pointer to the main SFML window. */
	};
}
