#pragma once
#include <Siv3D.hpp>
#include <memory>
#include <iostream>
#include <thread>

//Constants. Declaration.
extern constexpr int32_t DEFAULT_WINDOW_WIDTH = 1280;
extern constexpr int32_t DEFAULT_WINDOW_HEIGHT = 720;
extern constexpr double_t SCALE = 1.f;

struct Data;
class Game;
class SelectStage;