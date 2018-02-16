#include "Cube.h"
#include <iostream>
 Cube::Cube() {
	 // initialize all vectors
	 for (int z = 1; z <= 6; z++) {
		 
		 if (z == 1) {
			 
			 for (int x = 0; x < 3; x++) {
				 std::vector<int> temp(0);
				 for (int y = 0; y < 3; y++) {
					 temp.push_back(z);
				 }
				 face1.push_back(temp);
			 }
			 
		 }
		 else if (z == 2) {
			 for (int x = 0; x < 3; x++) {
				 std::vector<int> temp(0);
				 for (int y = 0; y < 3; y++) {
					 temp.push_back(z);
				 }
				 face2.push_back(temp);
			 }
		 }
		 else if (z == 3) {
			 for (int x = 0; x < 3; x++) {
				 std::vector<int> temp(0);
				 for (int y = 0; y < 3; y++) {
					 temp.push_back(z);
				 }
				 face3.push_back(temp);
			 }
		 }
		 else if (z == 4) {
			 for (int x = 0; x < 3; x++) {
				 std::vector<int> temp(0);
				 for (int y = 0; y < 3; y++) {
					 temp.push_back(z);
				 }
				 face4.push_back(temp);
			 }
		 }
		 else if (z == 5) {
			 for (int x = 0; x < 3; x++) {
				 std::vector<int> temp(0);
				 for (int y = 0; y < 3; y++) {
					 temp.push_back(z);
				 }
				 face5.push_back(temp);
			 }
		 }
		 else if (z == 6) {
			 for (int x = 0; x < 3; x++) {
				 std::vector<int> temp(0);
				 for (int y = 0; y < 3; y++) {
					 temp.push_back(z);
				 }
				 face6.push_back(temp);
			 }
		 }
	 }
	 /*
	 for (int i = 0; i < 6; i++) {
		 for (int j = 0; j < 3; j++) {
			 std::cout << " " << face1[i][j];
		 }
		 std::cout << std::endl;
	 }
	 std::cout << std::endl;

	 for (int i = 0; i < 6; i++) {
		 for (int j = 0; j < 3; j++) {
			 std::cout << " " << face2[i][j];
		 }
		 std::cout << std::endl;
	 }
	 std::cout << std::endl;

	 for (int i = 0; i < 6; i++) {
		 for (int j = 0; j < 3; j++) {
			 std::cout << " " << face3[i][j];
		 }
		 std::cout << std::endl;
	 }
	 std::cout << std::endl;

	 for (int i = 0; i < 6; i++) {
		 for (int j = 0; j < 3; j++) {
			 std::cout << " " << face4[i][j];
		 }
		 std::cout << std::endl;
	 }
	 std::cout << std::endl;

	 for (int i = 0; i < 6; i++) {
		 for (int j = 0; j < 3; j++) {
			 std::cout << " " << face5[i][j];
		 }
		 std::cout << std::endl;
	 }
	 std::cout << std::endl;

	 for (int i = 0; i < 6; i++) {
		 for (int j = 0; j < 3; j++) {
			 std::cout << " " << face6[i][j];
		 }
		 std::cout << std::endl;
	 }
	 std::cout << std::endl;
	 */
 }	