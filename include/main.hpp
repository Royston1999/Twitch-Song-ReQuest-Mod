#pragma once

// Include the modloader header, which allows us to tell the modloader which mod this is, and the version etc.
#include "modloader/shared/modloader.hpp"

// beatsaber-hook is a modding framework that lets us call functions and fetch field values from in the game
// It also allows creating objects, configuration, and importantly, hooking methods to modify their values
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/config/config-utils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "questui/shared/CustomTypes/Components/Backgroundable.hpp"

#include "HMUI/CurvedTextMeshPro.hpp"
#include "HMUI/ViewController.hpp"
#include "config-utils/shared/config-utils.hpp"
#include "UnityEngine/UI/Button.hpp"
#include "UnityEngine/Vector2.hpp"
#include "UnityEngine/Component.hpp"
#include "UnityEngine/GameObject.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "questui/shared/QuestUI.hpp"
#include "TMPro/TextMeshProUGUI.hpp"
#include "VRUIControls/VRGraphicRaycaster.hpp"
#include "UnityEngine/UI/RectMask2D.hpp"

#include "config.hpp"
#include "easywsclient.hpp"
#include "ModSettingVC.hpp"
#include "MapObject.hpp"
#include "CT/Handler.hpp"

#include <map>
#include <thread>
#include <iomanip>
#include <sstream>
#include <chrono>

// Define these functions here so that we can easily read configuration and log information from other files
Configuration& getConfig();
Logger& getLogger();