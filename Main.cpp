#include "Definition.hpp"

void Main() {

	Init();

	std::shared_ptr<Game> ptr = std::make_shared<SelectStage1>("ff");

	while (System::Update()) {

	}

}

void Init() {
	Scene::SetBackground(Palette::Blueviolet);
	Window::Resize(DEFAULT_WINDOW_WIDTH * SCALE, DEFAULT_WINDOW_HEIGHT * SCALE);
	Console.open();
}

std::shared_ptr<Game> SelectStage1::update(std::shared_ptr<Game> ptr) {
	return nullptr;
}

void SelectStage1::draw() {

}