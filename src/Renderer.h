#pragma once

#include <GLES3/gl3.h>

namespace Renderer
{
    bool Init();

    bool LoadShader(
        const char* vertex,
        const char* fragment
    );

    void Draw();

    void Shutdown();
}
