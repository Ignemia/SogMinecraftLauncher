#include "Color.h"

namespace gui
{
    Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
        : m_r(r), m_g(g), m_b(b), m_a(a)
    {
    }

    std::string Color::c_toHex(bool include_apha = true)
    {
        std::string hex("#");
        std::string hex_digits = "0123456789ABCDEF";

        // Red component
        hex += hex_digits[m_r / 16];
        hex += hex_digits[m_r % 16];

        // Green component
        hex += hex_digits[m_g / 16];
        hex += hex_digits[m_g % 16];

        // Blue component
        hex += hex_digits[m_b / 16];
        hex += hex_digits[m_b % 16];

        if (!include_apha)
            return hex;

        // Alpha component
        hex += hex_digits[m_a / 16];
        hex += hex_digits[m_a % 16];

        return hex;
    }

    float Color::c_normalize(uint8_t in)
    {
        return static_cast<float>(in) / 255.0f;
    }

    uint8_t Color::c_denormalize(float in)
    {
        in = std::max(0.0f, std::min(in, 1.0f));
        return static_cast<uint8_t>(in * 255.0f);
    }

    std::string Color::m_getString()
    {
        return c_toHex();
    }

    std::string Color::m_getStringNoAlpha()
    {
        return c_toHex(false);
    }

    uint8_t Color::m_getR()
    {
        return m_r;
    }

    uint8_t Color::m_getG()
    {
        return m_g;
    }

    uint8_t Color::m_getB()
    {
        return m_b;
    }

    uint8_t Color::m_getA()
    {
        return m_a;
    }

    float Color::m_getFloatR()
    {
        return c_normalize(m_r);
    }

    float Color::m_getFloatG()
    {
        return c_normalize(m_g);
    }

    float Color::m_getFloatB()
    {
        return c_normalize(m_b);
    }

    float Color::m_getFloatA()
    {
        return c_normalize(m_a);
    }

    bool Color::m_changeR(uint8_t in_r)
    {
        m_r = in_r;
        return true;
    }

    bool Color::m_changeG(uint8_t in_g)
    {
        m_g = in_g;
        return true;
    }

    bool Color::m_changeB(uint8_t in_b)
    {
        m_b = in_b;
        return true;
    }

    bool Color::m_changeA(uint8_t in_a)
    {
        m_a = in_a;
        return true;
    }
}
