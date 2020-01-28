#pragma once
#include <Siv3D.hpp>
#include <memory>
#include <iostream>

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
	SimpleGUIManager gui;
	Game(String gui_file)
		: gui(FileSystem::FullPath(gui_file))
	{
		std::cout << "Succeeded;" << std::endl;
	}
};

class SelectStage1 :public Game {
public:
	std::shared_ptr<Game> update(std::shared_ptr<Game> ptr)override;
	void draw()override;
	SelectStage1(){}
};