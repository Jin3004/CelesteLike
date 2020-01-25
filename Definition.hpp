#pragma once
#include <Siv3D.hpp>
#include <memory>

//Constants. Declaration.
extern constexpr int32_t DEFAULT_WINDOW_WIDTH = 1280;
extern constexpr int32_t DEFAULT_WINDOW_HEIGHT = 720;
extern constexpr double_t SCALE = 1.f;

void Init();

struct InternalData {
	bool& state;
};

class Game {
public:
	virtual std::shared_ptr<Game> update(std::shared_ptr<Game> ptr) { return nullptr; }
	virtual void draw() {}
};

class SelectStage1 :public Game {
public:
	std::shared_ptr<Game> update(std::shared_ptr<Game> ptr)override;
	void draw()override;
	SelectStage1(String);
	SimpleGUIManager gui;
};