#pragma once
#include <vector>
class Cube {
public:
	Cube();
	/*~Cube();

	void rotateFace1Right();
	void rotateFace1Left();
	void rotateFace2Right();
	void rotateFace2Left();
	void rotateFace3Right();
	void rotateFace3Left();
	void rotateFace4Right();
	void rotateFace4Left();
	void rotateFace5Right();
	void rotateFace5Left();
	void rotateFace6Right();
	void rotateFace6Left();*/


private:
	std::vector<std::vector<int>> face1;
	std::vector<std::vector<int>> face2;
	std::vector<std::vector<int>> face3;
	std::vector<std::vector<int>> face4;
	std::vector<std::vector<int>> face5;
	std::vector<std::vector<int>> face6;
};