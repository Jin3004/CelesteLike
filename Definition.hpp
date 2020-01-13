#pragma once
#include <Siv3D.hpp>
#include <memory>

class Game {
public:
	const Font debug{ 20 }; //デバッグ用のフォントを用意
	virtual void update(std::unique_ptr<Game>&){}
	virtual void draw(){}
};

class SelectStage: public Game {
public:
	SelectStage(){}
	void update(std::unique_ptr<Game>&) override;
	void draw() override;
};