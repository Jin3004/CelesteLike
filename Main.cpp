#include "Definition.hpp"

void Main() {

	//Scene::SetBackground(ColorF(0.8, 0.9, 1.0));
	////背景を水色に変更
	//
	//std::unique_ptr<Game> ptr = std::make_unique<SelectStage>();
	//
	//
	//while (System::Update()) { //メインループ
	//
	//	ptr->update(ptr);
	//
	//	ptr->draw();
	//
	//}

	const FilePath path = FileSystem::FullPath(U"gui/selectstage1.toml");
	const Texture chip(U"img/block.png");
	SimpleGUIManager gui(path);
	while (System::Update()) {
		chip.draw(40, 40);
		gui.draw();
	}


}

void SelectStage::update(std::unique_ptr<Game>& ptr) {
}

void SelectStage::draw() {
}