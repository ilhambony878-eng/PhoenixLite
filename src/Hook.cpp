#include "Hook.h"
#include "Logger.h"
#include "Game.h"
#include "Memory.h"
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
            Logger::Error("Game Init Failed");
            return;
        }

        if (!Memory::Init())
        {
            Logger::Error("Memory Init Failed");
            return;
        }

        if (!Shader::Init())
        {
            Logger::Error("Shader Init Failed");
            return;
        }

        if (!Renderer::Init())
        {
            Logger::Error("Renderer Init Failed");
            return;
        }

        void* original = nullptr;

        HookEngine::Hook(
            nullptr,
            nullptr,
            &original
        );

        Logger::Info("PhoenixLite Ready");
    }
}
