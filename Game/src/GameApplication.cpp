#include <ColdBrew.h>

class Game : public ColdBrew::Application {
public:
	Game() {

	}

	~Game() {

	}

};

ColdBrew::Application* ColdBrew::CreateApplication() {
	return new Game();
}