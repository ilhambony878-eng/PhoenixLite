#include "Renderer.h"
#include "Logger.h"
#include "Shader.h"

namespace Renderer
{
    bool Init()
    {
        Logger::Info("Renderer Ready");
        return true;
    }

    void Draw()
    {
        // Tempat menjalankan shader
    }

    void Shutdown()
    {
        Logger::Info("Renderer Shutdown");
    }
}
