#pragma once
#include <cstdint>
#include <cstddef>

namespace globals
{
	inline std::uintptr_t clientAdress = 0;

	inline bool glow = false;
	inline float glowColor[] = { 1.f, 0.f, 0.f, 1.f };

	inline bool radar = false;
}

namespace offsets
{
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDB75DC;
	constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x531C058;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4DD347C;

	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
	constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;
	constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
}
