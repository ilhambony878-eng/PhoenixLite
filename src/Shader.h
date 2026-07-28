#pragma once

#include <GLES3/gl3.h>

namespace Shader
{
    bool Init();

    GLuint Compile(GLenum type, const char* source);

    GLuint CreateProgram(
        const char* vertex,
        const char* fragment
    );

    void Use(GLuint program);

    void Destroy(GLuint program);
}
