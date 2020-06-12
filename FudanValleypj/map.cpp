﻿#include "map.h"
#include <QDebug>

void Map::initialtool(struct Tools& tool)
{
    tool.name = "None";
    tool.level = 0;
}
void Map::initialrole()
{
    role.name = "LaLuAcLr";
    role.money = 2000;
    role.stamina = 100;
    role.seed = "";
    initialtool(role.tool);
    initialitem(role.item);
}
void Map::initialseed(const QStringList& seed)
{
    int n = seed.size();
    for (int i=0; i<n; ++i)
        role.item.seed.insert(seed[i], 0);
}
void Map::initialitem(struct Items& item)
{
    item.sp = 0;
    item.tool.insert("Rod", 0);
    item.tool.insert("Pickhead", 0);
    item.tool.insert("None", 0);
    item.tool.insert("Hoe", 0);
    item.tool.insert("Seed", 0);
    item.tool.insert("Knife", 0);
}
void Map::initialnpc()
{
    npc[0].name = "npc.no1";//npc1
    npc[0].num = 0;
    npc[0].status = 0;

    npc[0].name = "npc.no2";//npc2
    npc[0].num = 1;
    npc[0].status = 0;

    npc[0].name = "npc.no3";//npc3
    npc[0].num = 2;
    npc[0].status = 0;

    npc[0].name = "npc.no4";//npc4
    npc[0].num = 3;
    npc[0].status = 0;

    npc[0].name = "npc.no5";//npc5
    npc[0].num = 4;
    npc[0].status = 0;
}
void Map::initialportal()
{
    p[0].num = 0;//传送门组编号
    p[0].if_jump = 1;
    p[0].floor0 = 0;
    p[0].x0 = 0;
    p[0].y0 = 4;
    p[0].floor1 = 5;
    p[0].x1 = 16;
    p[0].y1 = 6;

    p[1].num = 1;//传送门组编号
    p[1].if_jump = 1;
    p[1].floor0 = 0;
    p[1].x0 = 16;
    p[1].y0 = 3;
    p[1].floor1 = 1;
    p[1].x1 = 0;
    p[1].y1 = 5;

    p[2].num = 2;//传送门组编号
    p[2].if_jump = 1;
    p[2].floor0 = 1;
    p[2].x0 = 16;
    p[2].y0 = 5;
    p[2].floor1 = 2;
    p[2].x1 = 0;
    p[2].y1 = 5;

    p[3].num = 3;//传送门组编号
    p[3].if_jump = 1;
    p[3].floor0 = 1;
    p[3].x0 = 10;
    p[3].y0 = 14;
    p[3].floor1 = 3;
    p[3].x1 = 10;
    p[3].y1 = 0;

    p[4].num = 4;//传送门组编号
    p[4].if_jump = 1;
    p[4].floor0 = 1;
    p[4].x0 = 5;
    p[4].y0 = 0;
    p[4].floor1 = 4;
    p[4].x1 = 5;
    p[4].y1 = 14;

    p[5].num = 5;//传送门组编号
    p[5].if_jump = 1;
    p[5].floor0 = 4;
    p[5].x0 = 14;
    p[5].y0 = 6;
    p[5].floor1 = 6;
    p[5].x1 = 16;
    p[5].y1 = 7;

    p[6].num = 6;//传送门组编号
    p[6].if_jump = 1;
    p[6].floor0 = 6;
    p[6].x0 = 2;
    p[6].y0 = 13;
    p[6].floor1 = 7;
    p[6].x1 = 2;
    p[6].y1 = 13;
}

void Map::initialTerrainString()//动态贴图（地图物件）
{
    TerrainString[0]="border-image:url(:);";
    TerrainString[1]="border-image:url(:/now/orangemushroom.png);";
    TerrainString[2]="border-image:url(:/now/badmushroom.png);";
    TerrainString[3]="border-image:url(:/now/box.png);";
    TerrainString[4]="border-image:url(:/now/redmushroom.png);";
}
void Map::initialMapFloor()
{
    MapFloor[0]=":/now/farm.png";
    MapFloor[1]=":/now/floor2.png";
    MapFloor[2]=":/now/floor3.png";
    MapFloor[3]=":/now/floor4.png";
    MapFloor[4]=":/now/floor5.png";
    MapFloor[5]=":/now/floor6.png";
    MapFloor[6]=":/now/floor7.png";
    MapFloor[7]=":/now/floor8.png";
}

void Map::initialNPCpic()//动态贴图（npc）
{
    NPC_pic[0][0]=":/npc/npc0.0.png";
    NPC_pic[0][1]=":/npc/npc0.1.png";
    NPC_pic[0][2]=":/npc/npc0.2.png";
    NPC_pic[0][3]=":/npc/npc0.3.png";

    NPC_pic[1][0]=":/npc/npc1.0.png";
    NPC_pic[1][1]=":/npc/npc1.1.png";
    NPC_pic[1][2]=":/npc/npc1.2.png";
    NPC_pic[1][3]=":/npc/npc1.3.png";

    NPC_pic[2][0]=":/npc/npc2.0.png";
    NPC_pic[2][1]=":/npc/npc2.1.png";
    NPC_pic[2][2]=":/npc/npc2.2.png";
    NPC_pic[2][3]=":/npc/npc2.3.png";

    NPC_pic[3][0]=":/npc/npc3.0.png";
    NPC_pic[3][1]=":/npc/npc3.1.png";
    NPC_pic[3][2]=":/npc/npc3.2.png";
    NPC_pic[3][3]=":/npc/npc3.3.png";

    NPC_pic[4][0]=":/npc/npc4.0.png";
    NPC_pic[4][1]=":/npc/npc4.1.png";
    NPC_pic[4][2]=":/npc/npc4.2.png";
    NPC_pic[4][3]=":/npc/npc4.3.png";

    NPC_pic[5][0]=":/npc/npc4.0.png";
    NPC_pic[5][1]=":/npc/npc4.1.png";
    NPC_pic[5][2]=":/npc/npc4.2.png";
    NPC_pic[5][3]=":/npc/npc4.3.png";

    NPC_pic[6][0]=":/npc/npc4.0.png";
    NPC_pic[6][1]=":/npc/npc4.1.png";
    NPC_pic[6][2]=":/npc/npc4.2.png";
    NPC_pic[6][3]=":/npc/npc4.3.png";

    NPC_pic[7][0]=":/npc/npc4.0.png";
    NPC_pic[7][1]=":/npc/npc4.1.png";
    NPC_pic[7][2]=":/npc/npc4.2.png";
    NPC_pic[7][3]=":/npc/npc4.3.png";

}

string Map::dialogue(struct NPC& c)
{
    string s[5][4] = {
        "hello","how are you","good luck","bye",
        "welcome","see you","","",
        "what's up","that's good","","",
        "amazing!","......","","",
        "are you crazy?","go ahead!","good luck",""
    };
    return s[c.num][c.status];
}

Map::Map()
{
    Total_Floor = 8;
    //开辟堆上三维数组
    map = new int** [Total_Floor];
    for (int i = 0; i < Total_Floor; i++)
    {
        map[i] = new int* [17];
        for (int j = 0; j < 17; j++)
        {
            map[i][j] = new int[15];
            for (int k = 0; k < 15; k++)
            {
                map[i][j][k] = 0;
            }
        }
    }
    initialMap();
    initialportal();
    initialTerrainString();
    initialMapFloor();
    initialNPCpic();
    //initialMapString();
    initialrole();
    initialnpc();
}

void Map::restart()
{
    initialMap();
    role.item.seed.clear();
    role.item.sp = 0;
    foreach(auto key, role.item.tool)
        key = 0;
    role.money = 2000;
    role.stamina = 100;
    role.tool.name = "None";
    role.tool.level = 0;
    role.seed = "";
}
void Map::initialMap()
{
    floor = 0;
    x = 3;
    y = 1;
    int num = 0;
    while (1)
    {

        if (num == 1)
        {
            int tempmap[17][15] = {
                10,10,10,10,50,10,10,10,10,10,10,10,10,10,10,
                10,10,10,10,1,1,1,1,1,10,10,10,1,1,10,
                10,10,10,10,1,1,1,1,1,10,10,10,1,1,10,
                10,1,1,1,1,1,1,1,1,1,1,1,1,1,10,
                10,1,1,1,2,2,2,2,2,2,2,2,2,2,10,
                10,1,20,1,2,2,2,2,2,2,2,2,2,2,10,
                10,1,1,1,2,2,2,2,2,2,2,2,2,2,10,
                10,10,1,10,2,2,2,2,2,2,2,2,2,2,10,
                10,10,1,10,2,2,2,2,2,2,2,2,2,2,10,
                10,10,10,10,2,2,2,2,2,2,2,2,2,2,10,
                10,10,10,10,2,2,2,2,2,2,2,2,2,2,10,
                10,40,40,40,2,2,2,2,2,2,2,2,2,2,10,
                10,1,1,1,2,2,2,2,2,2,2,2,2,2,10,
                10,1,1,1,2,2,2,2,2,2,2,2,2,2,10,
                10,1,1,1,1,1,1,1,1,1,1,1,1,1,10,
                10,10,10,1,10,10,10,10,10,10,10,10,10,10,10,
                10,10,10,51,10,10,10,10,10,10,10,10,10,10,10

            };
            for (int i = 0; i < 17; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    map[num - 1][i][j] = tempmap[i][j];
                }
            }
        }
        if (num == 2)
        {
            int tempmap[17][15] = {
                1,1,1,1,10,51,1,10,1,1,1,1,1,1,1,
                1,1,1,1,10,1,1,10,1,1,1,1,1,1,1,
                1,1,1,1,10,1,1,10,1,1,1,1,1,1,1,
                1,1,1,1,10,1,1,10,1,1,1,1,1,1,1,
                10,40,40,10,1,1,1,10,1,1,1,1,1,1,1,
                54,1,1,1,1,1,1,10,1,1,1,1,1,1,1,
                1,1,1,1,1,21,1,10,1,1,1,1,1,1,1,
                10,10,10,10,10,1,1,10,1,1,1,1,1,1,1,
                1,1,1,1,10,1,1,10,1,1,1,1,1,1,1,
                1,1,1,1,10,1,1,10,10,10,10,10,10,10,10,
                1,1,1,1,10,1,1,1,1,1,1,1,1,1,53,
                1,1,1,1,10,1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,10,1,1,10,10,10,10,10,10,10,10,
                1,1,1,1,10,1,1,10,1,1,1,1,1,1,1,
                1,1,1,1,10,1,1,10,1,1,1,1,1,1,1,
                1,1,1,1,10,1,1,10,1,1,1,1,1,1,1,
                1,1,1,1,10,52,1,10,1,1,1,1,1,1,1
            };
            for (int i = 0; i < 17; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    map[num - 1][i][j] = tempmap[i][j];
                }
            }
        }
        if (num == 3)
        {
            int tempmap[17][15] = {
                10,10,10,10,10,52,1,1,1,1,1,1,1,1,1,
                10,10,10,10,1,1,1,1,30,30,1,1,1,1,10,
                10,1,1,1,1,1,1,10,10,30,30,30,1,1,10,
                10,10,10,1,22,1,1,1,10,10,30,30,1,1,10,
                10,10,1,1,1,1,1,1,1,1,1,1,1,1,10,
                10,1,30,30,1,1,1,1,1,1,1,1,1,1,10,
                10,1,30,30,1,1,1,1,1,1,10,1,1,1,10,
                10,1,1,1,1,1,1,1,1,1,10,1,1,1,10,
                10,1,1,1,1,1,1,1,1,10,10,1,1,1,10,
                10,1,30,30,10,1,1,1,1,10,10,1,1,1,10,
                10,1,30,30,10,1,1,1,1,1,1,1,1,10,10,
                10,1,10,10,10,1,1,1,1,1,1,1,10,10,10,
                10,1,10,1,1,1,1,1,10,10,1,10,10,1,10,
                10,1,10,1,1,1,1,1,10,10,10,30,30,1,10,
                10,10,10,1,1,30,30,1,1,1,1,30,30,1,10,
                10,1,1,1,1,30,30,1,1,1,1,1,1,1,10,
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10

            };

            for (int i = 0; i < 17; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    map[num - 1][i][j] = tempmap[i][j];
                }
            }
        }
        if (num == 4)
        {
            int tempmap[17][15] = {
                10,10,10,10,10,10,1,1,1,1,1,1,1,1,1,
                10,10,10,10,1,1,10,10,10,10,10,10,10,10,1,
                10,10,10,10,10,1,1,31,10,10,10,10,10,10,1,
                10,10,10,10,10,10,1,1,1,1,10,10,10,10,1,
                10,10,10,10,10,10,1,1,1,1,1,10,10,10,1,
                10,10,10,10,10,10,10,1,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,1,10,10,10,10,10,10,10,
                10,10,10,10,1,1,1,1,1,1,1,1,1,1,1,
                10,10,10,10,1,40,40,1,1,1,1,1,1,1,1,
                10,10,10,10,1,40,40,1,1,1,1,1,10,1,1,
                53,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                1,23,10,10,1,1,1,1,1,1,1,1,1,1,1,
                10,10,10,10,1,1,1,1,1,1,1,10,10,1,1,
                10,10,10,10,1,1,1,1,1,1,1,10,10,1,1,
                10,10,10,10,1,1,10,10,10,10,10,10,10,10,1,
                10,10,10,10,1,1,10,10,10,10,10,10,10,10,1,
                10,10,10,10,1,1,1,1,1,1,1,1,1,1,1

            };

            for (int i = 0; i < 17; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    map[num - 1][i][j] = tempmap[i][j];
                }
            }
        }
        if (num == 5)
        {
            int tempmap[17][15] = {
                1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
                1,1,1,1,1,1,1,1,1,1,1,1,1,1,54,
                1,10,10,10,10,10,10,10,10,10,10,1,1,1,1,
                1,10,1,1,1,1,1,1,1,1,10,1,10,10,10,
                1,10,1,1,1,1,1,1,1,1,10,1,10,10,10,
                1,10,1,1,1,1,1,1,1,1,10,1,10,10,10,
                1,10,1,1,1,1,1,1,1,1,10,1,10,10,10,
                1,10,1,1,1,1,1,1,1,1,10,1,10,10,10,
                1,10,1,1,1,1,1,1,1,1,10,1,10,10,10,
                1,10,10,10,10,10,1,10,10,10,10,1,10,10,10,
                1,1,1,1,1,1,55,1,1,1,1,1,10,10,10,
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10

            };

            for (int i = 0; i < 17; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    map[num - 1][i][j] = tempmap[i][j];
                }
            }
        }
        if (num == 6)
        {
            int tempmap[17][15] = {
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,1,10,10,10,1,10,10,10,
                10,0,10,0,10,1,1,1,1,10,1,1,1,1,10,
                10,0,0,0,10,1,1,1,1,1,1,1,1,1,10,
                10,10,0,0,10,1,1,1,1,1,1,1,1,1,10,
                10,10,0,0,1,1,1,1,1,1,1,1,1,1,10,
                10,10,10,10,10,1,1,1,1,1,1,1,1,1,10,
                10,10,10,10,10,1,1,1,10,10,10,10,10,1,10,
                10,1,1,1,1,1,1,1,10,10,10,10,10,1,10,
                10,1,10,1,1,1,1,1,10,10,10,10,10,1,10,
                10,10,10,10,1,1,1,1,10,10,1,1,1,1,10,
                10,1,10,1,1,1,1,1,10,10,1,1,1,1,10,
                10,1,1,1,1,1,1,1,10,10,1,1,1,1,10,
                10,1,1,1,1,1,1,1,10,10,1,1,10,1,10,
                10,10,10,10,10,1,1,1,10,10,10,10,10,10,10,
                10,10,10,10,10,1,50,1,10,10,10,10,10,10,10

            };

            for (int i = 0; i < 17; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    map[num - 1][i][j] = tempmap[i][j];
                }
            }
        }
        if (num == 7)
        {
            int tempmap[17][15] = {
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,1,1,1,1,1,1,1,1,56,10,
                10,1,1,10,1,1,1,1,1,1,1,1,1,1,10,
                10,1,1,1,1,1,1,1,1,1,1,1,1,1,10,
                10,1,1,1,1,1,1,1,1,1,1,1,1,1,10,
                10,1,1,1,1,1,1,1,1,1,1,1,10,1,10,
                10,10,10,10,10,1,1,1,1,1,1,10,10,10,10,
                10,10,10,10,1,1,1,1,1,1,1,1,10,1,10,
                10,10,10,10,1,1,1,1,1,1,1,10,10,10,10,
                10,10,10,10,10,10,1,1,1,10,10,10,10,10,10,
                10,1,1,10,10,10,1,1,1,10,10,10,1,1,10,
                10,1,1,1,1,1,1,1,1,1,1,1,1,1,10,
                10,10,10,1,1,1,1,1,1,1,1,1,10,10,10,
                10,10,10,1,1,1,1,1,1,1,1,1,10,10,10,
                10,10,10,10,10,10,1,1,1,10,10,10,10,10,10,
                10,10,10,10,10,10,1,55,1,10,10,10,10,10,10

            };

            for (int i = 0; i < 17; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    map[num - 1][i][j] = tempmap[i][j];
                }
            }
        }
        if (num == 8)
        {
            int tempmap[17][15] = {
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
                10,1,1,1,1,1,1,1,1,1,1,1,1,56,10,
                10,10,10,10,10,10,1,1,10,10,10,10,10,10,10,
                10,1,1,1,1,10,1,1,10,10,10,10,10,10,10,
                10,1,1,1,1,10,1,1,1,1,1,10,10,10,10,
                10,1,1,1,1,10,1,1,10,1,1,1,10,1,10,
                10,1,1,1,1,1,1,1,10,1,1,1,1,1,10,
                10,1,1,1,1,10,1,1,10,10,10,10,10,10,10,
                10,1,1,1,1,10,1,1,10,10,10,10,10,10,10,
                10,1,1,1,1,10,1,1,10,10,10,10,10,10,10,
                10,1,1,1,1,10,1,1,10,10,1,1,1,10,10,
                10,1,1,1,1,10,1,1,10,10,1,1,24,1,10,
                10,10,1,1,10,10,1,1,10,10,1,1,1,1,10,
                10,10,1,1,10,10,1,1,1,1,1,1,1,1,10,
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
                10,10,10,10,10,10,10,10,10,10,10,10,10,10,10

            };

            for (int i = 0; i < 17; i++)
            {
                for (int j = 0; j < 15; j++)
                {
                    map[num - 1][i][j] = tempmap[i][j];
                }
            }
        }
        num++;
        if (num > Total_Floor)
        {
            break;
        }
    }
}
void Map::initialCharacterPos(struct portal& p)//经过传送门后地址重置
{
    if (p.if_jump)
    {
        if (floor == p.floor0)
        {
            floor = p.floor1;
            x = p.x1;
            y = p.y1;
        }
        else if (floor == p.floor1)
        {
            floor = p.floor0;
            x = p.x0;
            y = p.y0;
        }
        p.if_jump = true;
    }
}