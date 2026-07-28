#include "Renderer.h"
#include "Logger.h"

namespace Renderer
{
    static bool gInitialized = false;

    bool Init()
    {
        if (gInitialized)
            return true;

        Logger::Info("Renderer::Init");

        gInitialized = true;
        return true;
    }

    void BeginFrame()
    {
        // Akan dipanggil sebelum render game
    }

    void EndFrame()
    {
        // Akan dipanggil setelah render game
    }

    void OnDraw()
    {
        // Tempat shader dijalankan setiap frame
    }

    void Shutdown()
    {
        Logger::Info("Renderer::Shutdown");
        gInitialized = false;
    }
}
