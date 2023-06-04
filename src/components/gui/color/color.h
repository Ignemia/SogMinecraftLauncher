#pragma once

// This line includes the header file "stdint.h" which provides typedefs for fixed-width // integer types, such as int8_t, uint16_t, int32_t, etc
#include <stdint.h>
// This line includes the standard C++ library header file "string", which provides // a set of functions and operators to work with strings, such as concatenation, // string length, substring, etc.
#include <string>

namespace gui
{
    /**
     * @brief The Color class represents a color with red, green, blue, and alpha values.
     */
    class Color
    {
    private:
        uint8_t m_r; /** Red color component */
        uint8_t m_g; /** Green color componen */
        uint8_t m_b; /** Blue color component */
        uint8_t m_a; /** Alpha color component */

    public:
        /**
         * @brief Construct a new Color object and initialize red, green, blue and alpha values.
         *
         * @param r The red value between 0-255. Defaults to 0.
         * @param g The green value between 0-255. Defaults to 0.
         * @param b The blue value between 0-255. Defaults to 0.
         * @param a The alpha value between 0-255. Defaults to 255.
         */
        Color(uint8_t r = 0, uint8_t g = 0, uint8_t b = 0, uint8_t a = 255);

        /**
         * @brief This function takes one optional input parameter "include_alpha" which has a default value of "true". The purpose of the function is to convert a given value to its hexadecimal representation.
         *
         * @param include_alpha A boolean input parameter which specifies if the output string should include alphabetic characters.
         * @return std::string The hexadecimal representation of the color.
         */
        std::string c_toHex(bool include_alpha);
        
        /**
         * @brief Converts 8-bit color value to floating point value between 0-1.
         *
         * @param in 8-bit color value
         * @return float floating point value between 0-1
         */
        float static c_normalize(uint8_t in);

        /**
         * @brief Converts floating point value between 0-1 to 8-bit color value.
         *
         * @param in Floating point value between 0-1
         * @return uint8_t 8-bit color value
         */
        uint8_t static c_denormalize(float in);

        /**
         * @brief Get a string representation of the color in RGBA format.
         *
         * @return std::string String representation of the color in RGBA format.
         */
        std::string m_getString();

        /**
         * @brief Get a string representation of the color in RGB format (without alpha).
         *
         * @return std::string String representation of the color in RGB format.
         */
        std::string m_getStringNoAlpha();

        /**
         * @brief Get the value of the red color component.
         *
         * @return uint8_t Value of the red color component.
         */
        uint8_t m_getR();

        /**
         * @brief Get the value of the green color component.
         *
         * @return uint8_t Value of the green color component.
         */
        uint8_t m_getG();

        /**
         * @brief Get the value of the blue color component.
         *
         * @return uint8_t Value of the blue color component.
         */
        uint8_t m_getB();

        /**
         * @brief Get the value of the alpha color component.
         *
         * @return uint8_t Value of the alpha color component.
         */
        uint8_t m_getA();

        /**
         * @brief Get the value of the red color component as a floating point value between 0-1.
         *
         * @return float Value of the red color component as a floating point value.
         */
        float m_getFloatR();

        /**
         * @brief Get the value of the green color component as a floating point value between 0-1.
         *
         * @return float Value of the green color component as a floating point value.
         */
        float m_getFloatG();

        /**
         * @brief Get the value of the blue color component as a floating point value between 0-1.
         *
         * @return float Value of the blue color component as a floating point value.
         */
        float m_getFloatB();

        /**
         * @brief Get the value of the opacity component as a floating point value between 0-1.
         *
         * @return float Value of the opacity component as a floating point value.
         */
        float m_getFloatA();
        /**
         * @brief Modify the value of in_r argument
         *
         * This function takes in a single argument of type uint8_t named in_r and modifies its value.
         *
         * @param in_r An unsigned 8-bit integer representing the value to be modified.
         *
         * @return A boolean value indicating whether the modification was successful or not.
         */
        bool m_changeR(uint8_t in_r);

        /**
         * @brief Modify the value of in_g argument
         *
         * This function takes in a single argument of type uint8_t named in_g and modifies its value.
         *
         * @param in_g An unsigned 8-bit integer representing the value to be modified.
         *
         * @return A boolean value indicating whether the modification was successful or not.
         */
        bool m_changeG(uint8_t in_g);

        /**
         * @brief Modify the value of in_b argument
         *
         * This function takes in a single argument of type uint8_t named in_b and modifies its value.
         *
         * @param in_b An unsigned 8-bit integer representing the value to be modified.
         *
         * @return A boolean value indicating whether the modification was successful or not.
         */
        bool m_changeB(uint8_t in_b);

        /**
         * @brief Modify the value of in_a argument
         *
         * This function takes in a single argument of type uint8_t named in_a and modifies its value.
         *
         * @param in_a An unsigned 8-bit integer representing the value to be modified.
         *
         * @return A boolean value indicating whether the modification was successful or not.
         */
        bool m_changeA(uint8_t in_a);
    };
}