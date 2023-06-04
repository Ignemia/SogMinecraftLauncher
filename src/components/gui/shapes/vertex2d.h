#pragma once
#include <stdint.h>
#include "gui/color/color.h"

/**
 * @brief 2D vertex class
 * 
 * @details This class is used to represent a 2D vertex in a 2D shape or 2D vector (2 vertices)
*/
class Vertex2D
{
    private:
    /** 
     * @brief Position of the vertex on screen in relation to the top left corner of the window (0, 0) normalized to values between 0 and 1
     * @details
     * m_x - Left to right position
     * m_y - Top to bottom position
     */
    float m_x, m_y; 

    /**
     * @brief Color of the vertex in RGBA format normalized to values between 0 and 255
     * @details
     * m_r - Red value
     * m_g - Green value
     * m_b - Blue value
     * m_a - Alpha value (transparency)
    */
    uint8_t m_r, m_g, m_b, m_a;

    public:
    /**
     * @brief Construct a new Vertex2D object
     * 
     * @param x Left to right position of the vertex on screen
     * @param y Top to bottom position of the vertex on screen
     * @param r Red value of the vertex
     * @param g Green value of the vertex
     * @param b Blue value of the vertex
     * @param a Alpha value of the vertex
     */
    Vertex2D(float x, float y, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

    /**
     * @brief Get the x position of the vertex
     * 
     * @return float 
     */
    float getX();
    
    /**
     * @brief Get the y position of the vertex
     * 
     * @return float 
     */
    float getY();

    gui::Color getColor();

};