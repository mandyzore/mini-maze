#include "Maze_lib.h"


int main(int argc,char ** argv) {
    run_game = true;
    glutInit(&argc,argv);
    glutInitWindowSize(SCREEN_WIDTH,SCREEN_HEIGHT);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
    glutCreateWindow("haha");
    glutDisplayFunc(&display);
    glutReshapeFunc(&changSize);
    // glutIdleFunc(&idle);
    // glutMouseFunc(&mouse);
    glutMotionFunc(&activeMotion);
    glutPassiveMotionFunc(&passiveMotion);
    glutKeyboardFunc(&keyPress);
    initAll();
    TimerProc();
    //glutFullScreen();
    // ������GLUT�¼�����ѭ��
    glutMainLoop();
    return 0;

}
