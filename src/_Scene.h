#pragma once
// _Scene.h — central game state controller (Lesson 14 compatible stub)
#include <windows.h>

enum GameState {
    ST_MENU,
    ST_JET_SELECT,
    ST_PLAY_L1,
    ST_PLAY_L2,
    ST_PLAY_L3,
    ST_MISSION_COMPLETE,
    ST_MISSION_FAILED
};

class _Scene {
public:
    _Scene();
    ~_Scene();

    void reSizeScene(int width, int height);
    void initGL();
    void drawScene();
    int  winMsg(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
    GameState state = ST_MENU;
    int width = 1280, height = 720;
    // TODO: hook Player/Enemy/HUD/Parallax here
    void drawMenu();
};
