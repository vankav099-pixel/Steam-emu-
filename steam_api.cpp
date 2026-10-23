#include <stdint.h>
#define STEAM_API extern "C" __declspec(dllexport)

STEAM_API bool SteamAPI_Init() { return true; }
STEAM_API void SteamAPI_Shutdown() {}
STEAM_API uint64_t SteamAPI_GetSteamID() { return 76561197960287930; }
STEAM_API const char* SteamAPI_GetPersonaName() { return "Skebob275"; }
