#include "Hook.h"
#include "Logger.h"
#include "Config.h"
#include "Memory.h"
#include "Game.h"
#include "HookEngine.h"
#include "Shader.h"
#include "Renderer.h"
#include "Version.h"

namespace Hook
{
    void Init()
    {
        Logger::Info("PhoenixLite Starting...");
        Logger::Info(Version::Name());

        if (!Config::Init())
        {
            Logger::Error("Config Init Failed");
            return;
        }

        if (!Memory::Init())
        {
            Logger::Error("Memory Init Failed");
            return;
        }

        if (!Game::Init())
        {
            Logger::Error("Game Init Failed");
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

        if (!HookEngine::Init())
{
    Logger::Error("HookEngine Init Failed");
    return;
}

Logger::Info("PhoenixLite Ready");

        Logger::Info("PhoenixLite Ready");
    }
}
