#pragma once

namespace HookEngine
{
    bool Init();

    bool Hook(
        void* target,
        void* replace,
        void** original
    );
}
