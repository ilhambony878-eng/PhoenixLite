#include "Hook.h"
#include "Game.h"
#include "Logger.h"
#include "HookEngine.h"
#include "Shader.h"
#include "Renderer.h"

namespace Hook
{
    void Init()
    {
        Logger::Info("PhoenixLite Starting...");

        if (!Game::Init())
        {
            Logger::Error("Game::Init gagal.");
            return;
        }

        if (!Shader::Init())
{
    Logger::Error("Shader::Init gagal.");
    return;
}

if (!Renderer::Init())
{
    Logger::Error("Renderer::Init gagal.");
    return;
}

        void* original = nullptr;

        HookEngine::Hook(
            nullptr,
            nullptr,
            &original
        );

        Logger::Info("PhoenixLite Ready.");
    }
}
