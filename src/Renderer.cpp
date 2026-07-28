#include "Renderer.h"
#include "Shader.h"
#include "Logger.h"

namespace Renderer
{
    static GLuint gProgram = 0;

    bool Init()
    {
        Logger::Info("Renderer Ready");
        return true;
    }

    bool LoadShader(
        const char* vertex,
        const char* fragment)
    {
        gProgram = Shader::CreateProgram(
            vertex,
            fragment
        );

        return gProgram != 0;
    }

    void Draw()
    {
        if (gProgram)
            Shader::Use(gProgram);
    }

    void Shutdown()
    {
        Shader::Destroy(gProgram);

        gProgram = 0;

        Logger::Info("Renderer Shutdown");
    }
}
