#include "Renderer.h"
#include "Logger.h"

namespace Renderer
{
    static bool gInitialized = false;

    bool Init()
    {
        if (gInitialized)
            return true;

        Logger::Info("Renderer Initialized");

        gInitialized = true;
        return true;
    }

    void OnDraw()
    {
        // Tempat shader akan dijalankan setiap frame.
    }
}
