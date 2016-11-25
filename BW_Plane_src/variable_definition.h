#pragma once

#pragma comment(lib, "Msimg32.lib")
#include "CPlane.h"
#include "CBullet.h"
#include "CBack.h"
#include "CUpgrade.h"
#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
using std::vector;
using std::fstream;
using std::ios;

const string APPNAME = "B&W Plane";
string title = "YOU WIN!"; //��ͣ�� ��Ϸ����ʱ�������
const int screen_width = 500; //������Χ
const int screen_height = 520;
int score = 0; //����
int timer = 0; //��ʱ��
int deadtime = 0; //��¼����ʱ��
int p_num = 0;
int s_num = 0;
HINSTANCE all_hIns = NULL;
vector<CObject*> vector_plane; //�洢�ɻ�����
vector<CObject*> vector_bullet; //�洢�����ӵ�����
vector<CObject*> vector_enemy_bullet; //�洢�з��ӵ�����
vector<CObject*> vector_upgrade; //�洢������߶��� 
vector<CObject*>::iterator voi; //������
CBack* p_back = NULL; //����ͼƬ����ָ��
bool appOver = false; //�жϳ����Ƿ����
bool isLive = true; //�жϼ����ɻ��Ƿ���
bool gameStart = false; //�ж���Ϸ�Ƿ�ʼ
bool isCaption = true; //�ж���Ϸ�Ƿ��ڿ�ʼ����
bool gamePause = false; //�ж���Ϸ�Ƿ���ͣ

bool noHurt = false;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void game_init();
void game_run(HWND &hWnd);
void clear();
void game_pause(HDC &hdc);
void game_over(HDC &hdc);
void draw(HDC &hdc);
void startView(HDC &hdc);
void planeAction();
void isHurt();
void bulletAction();
void enemyCome();
void enemyLeave();
void getUpgrade();
void upgradeMove();
void save();
void load();