# 🛩️ Operation Rescue Mission

**Operation Rescue Bravo** is a 3D jet combat and rescue mission game built using the **Lesson 14 OpenGL framework** in Code::Blocks.

## Structure
- `Lesson14_BUL.cbp` + `main.cpp`: framework entry
- `src/`: game code (Scene, Player, Enemy, Weapons, HUD, Parallax)
- `assets/`: images, sounds, models
- `docs/`: plans and screenshots

## Build Notes
1. Open `Lesson14_BUL.cbp` in Code::Blocks
2. Add these to Linker settings (order):  
   `SOIL2`, `freeglut`, `glu32`, `opengl32`, `winmm`, `gdi32`, `user32`, `kernel32`
3. Put textures in `assets/images` and set your working dir to the EXE folder.

## Controls (planned)
- Arrows: Move jet (X/Y)
- SPACE: Fire
- 1/2/3: Switch weapon
- ENTER: Confirm / advance
- ESC: Quit

## Next Steps
- Person A: implement full state flow (menu → select → L1/L2/L3 → end)
- Person B: player movement + 3 weapons + bullets + collisions
- Person C: menu & jet select screens, Russia parallax, HUD
