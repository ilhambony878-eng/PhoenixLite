#include "Shader.h"
#include "Logger.h"

namespace Shader
{
    bool Init()
    {
        Logger::Info("Shader System Ready");
        return true;
    }

    GLuint Compile(GLenum type, const char* source)
    {
        GLuint shader = glCreateShader(type);

        glShaderSource(shader, 1, &source, nullptr);

        glCompileShader(shader);

        return shader;
    }

    GLuint CreateProgram(
        const char* vertex,
        const char* fragment)
    {
        GLuint vs = Compile(GL_VERTEX_SHADER, vertex);

        GLuint fs = Compile(GL_FRAGMENT_SHADER, fragment);

        GLuint program = glCreateProgram();

        glAttachShader(program, vs);
        glAttachShader(program, fs);

        glLinkProgram(program);

        glDeleteShader(vs);
        glDeleteShader(fs);

        return program;
    }

    void Destroy(GLuint program)
    {
        if(program)
            glDeleteProgram(program);
    }
}
