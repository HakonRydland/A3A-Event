# AET Standardized Files Guide
## description.ext
Each line has a comment next to it explaining what every line does and how and if it should be changed.

The main parameters to change as a mission maker are:
* author
* OnLoadName
* loadScreen
* overviewPicture
* briefingName
* overviewText

If you are making a mission with respawns you should look into those parameters:
* respawnDelay

If you are not using ACE in your mission, make sure to change the parameter `respawnTemplates` to `respawnTemplates[] = {"Spectator"}`

## cba_settings.sqf
This file controls the mission side add-on options, also known as CBA settings. Settings in this file require permission from an Event Team Lead.

## AET_scripts folder
This folder contains the scripts and function calls that are required in every mission.

### AET_diary.sqf
This file handles the in-game briefing entries, you are expected to:
1. Credit any scripts, music, artwork, material or content that requires crediting.
2. Ensure that the Situation, Mission, Execution, Addtional, and Signals sections match exactly what is in the warno.

### AET_settings.sqf
This file contains the CBA settings that mission makers are allowed to change and modify without needing permission from an Event Team Lead.

## Init files
### init.sqf
This file is executed locally on every machine including at the start of the mission or when a player joins in progress.

You can set a friendly fire logger for an AI through this file as shown in the comment.

In most cases you do not need to change anything in this file, unless you know what you are doing.

### initPlayerLocal.sqf
This file is executed locally on every player's machine at the start of the mission or when the player joins in progress, this also includes headless clients.

In most cases you do not need to change anything in this file, unless you know what you are doing.

### initServer.sqf
This file is executed locally on the server at the mission start. This is the file where you should execute global commands like disabling damage, disabling or enabling AI, creating vehicles etc.

The file includes a guide in the comment on how to execute things on layer contents and how to disable and enable AI abilities by layer.

### onPlayerRespawn.sqf
This file is executed locally for players when the mission starts, when they spawn in, or when they respawn.

In most cases you do not need to change anything in this file, unless you know what you are doing.