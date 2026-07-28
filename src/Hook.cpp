#include "Hook.h"
#include "Game.h"
#include "Logger.h"

namespace Hook
{
    void Init()
    {
        Logger::Info("Memulai Hook...");

        if (!Game::Init())
        {
            Logger::Error("Game::Init gagal!");
            return;
        }

        Logger::Info("Hook berhasil diinisialisasi.");
    }
}
