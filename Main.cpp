#include "Definition.hpp"

void Main() {

	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));
	//背景を水色に変更

	std::unique_ptr<Game> ptr = std::make_unique<SelectStage>();


	while (System::Update()) { //メインループ

		ptr->update(ptr);

		ptr->draw();

	}

}

void SelectStage::update(std::unique_ptr<Game>& ptr) {
	++i;
}

void SelectStage::draw() {
	Rect(i, 20, 100, 200).draw(Palette::Red);
}