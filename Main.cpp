#include "Definition.hpp"

void Main() {

	Init();

	while (System::Update()) {

	}

}

void Init() {
	Scene::SetBackground(Palette::Blueviolet);
	Window::Resize(DEFAULT_WINDOW_WIDTH * SCALE, DEFAULT_WINDOW_HEIGHT * SCALE);
}

SelectStage1::SelectStage1(String gui_file) :gui(FileSystem::FullPath(gui_file))
{

}

std::shared_ptr<Game> SelectStage1::update(std::shared_ptr<Game> ptr) {
	return nullptr;
}

void SelectStage1::draw() {

}