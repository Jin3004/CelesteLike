#include "Definition.hpp"

void Main() {

	std::shared_ptr<Game> game_ptr = std::make_shared<SelectStage>();
	std::shared_ptr<Data> data_ptr = std::make_shared<Data>();
	std::thread logic([&]() {

		while (data_ptr->state = System::Update() && data_ptr->state) {
			auto ischanged = game_ptr->update();
			if (ischanged != nullptr)game_ptr = ischanged;
		}

		});
}

struct Data {
	bool state = true;
};

class Game {
public:
	virtual std::shared_ptr<Game> update() {}
	virtual void draw() {}
};

class SelectStage :Game {
public:
	int32_t cnt = 0;
	std::shared_ptr<Game> update()override {
		cnt++;
		if (cnt != 500)return nullptr;
		//else return std::make_shared<>
	}
	void draw()override {
		Print << cnt;
	}
	SelectStage(String directory) {

	}
};