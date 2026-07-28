#include "Utils.h"

namespace Utils
{
    int Min(int a, int b)
    {
        return (a < b) ? a : b;
    }

    int Max(int a, int b)
    {
        return (a > b) ? a : b;
    }

    float Clamp(float value, float min, float max)
    {
        if (value < min)
            return min;

        if (value > max)
            return max;

        return value;
    }

    float Lerp(float a, float b, float t)
    {
        return a + (b - a) * t;
    }
}
