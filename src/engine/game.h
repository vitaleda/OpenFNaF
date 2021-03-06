// (c) 2020 MotoLegacy
// This code is licensed under MIT license (see LICENSE for details)

// Game-specific
extern gameroom_t Current_Room;
extern void G_Main(u16_t night);
extern void G_GameLoop(void);
extern void G_AdvanceTime(void);

// For handling Game
extern void Game_Initialize(void);
extern float Game_GetTime();
extern void Game_AutoScroll();
extern void Game_ManualScroll(vec2_t mouse);

extern bool Game_Running;

//
// Scroll Methods:
// 0: Disabled Scrolling
// 1: Manual (Mouse/Analog) Scrolling
// 2: Automatic Scrolling
//
#define SCROLL_DISABLED     0
#define SCROLL_MANUAL       1
#define SCROLL_AUTOMATIC    2

extern int Scroll_Method;