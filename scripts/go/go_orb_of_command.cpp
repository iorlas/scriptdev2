/* Copyright (C) 2006,2007 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/* ScriptData
SDName: GO_orb_of_command
SD%Complete: 100
SDComment: Teleports players to BWL
EndScriptData */

#include "../sc_defines.h"
#include "../../../../game/Player.h"

bool GOHello_go_orb_of_command(Player *player, GameObject* _GO)
{
    if (player->GetQuestRewardStatus(7761))    player->TeleportTo(469,-7672,-1107,399, 0); 
    return true;
}

void AddSC_go_orb_of_command()
{
    Script *newscript;
    newscript = new Script;
    newscript->Name="go_orb_of_command";
    newscript->pGOHello          = &GOHello_go_orb_of_command;
    m_scripts[nrscripts++] = newscript;
}