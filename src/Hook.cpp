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

        Shader::Init();
        Renderer::Init();

        void* original = nullptr;

        HookEngine::Hook(
            nullptr,
            nullptr,
            &original
        );

        Logger::Info("PhoenixLite Ready.");
    }
}
