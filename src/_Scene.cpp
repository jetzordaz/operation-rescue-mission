#include "_Scene.h"
#include <GL/gl.h>
#include <GL/glu.h>

_Scene::_Scene(){}
_Scene::~_Scene(){}

void _Scene::reSizeScene(int w, int h){
    width = (h==0)?w:w; height = (h==0)?1:h;
    float aspect = (float)width/(float)height;
    glViewport(0,0,width,height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, aspect, 0.1f, 1000.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void _Scene::initGL(){
    glShadeModel(GL_SMOOTH);
    glClearColor(0.05f,0.06f,0.08f,1.0f);
    glEnable(GL_DEPTH_TEST);
}

void _Scene::drawMenu(){
    // Simple placeholder menu background
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0,0,-3.5f);
    glBegin(GL_QUADS);
        glColor3f(0.09f,0.11f,0.15f);
        glVertex3f(-2.0f,-1.2f,0.0f);
        glVertex3f( 2.0f,-1.2f,0.0f);
        glVertex3f( 2.0f, 1.2f,0.0f);
        glVertex3f(-2.0f, 1.2f,0.0f);
    glEnd();
    // TODO: render bitmap text: "Operation Rescue Bravo — Press ENTER"
}

void _Scene::drawScene(){
    switch(state){
        case ST_MENU:
            drawMenu();
            break;
        default:
            // For now, reuse menu as placeholder
            drawMenu();
            break;
    }
}

int _Scene::winMsg(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam){
    switch(uMsg){
        case WM_KEYDOWN:
            if(wParam == VK_RETURN){
                state = ST_JET_SELECT; // next screen later
            } else if(wParam == VK_ESCAPE){
                PostQuitMessage(0);
            }
            break;
        default: break;
    }
    return 0;
}
