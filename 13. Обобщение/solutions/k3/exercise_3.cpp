#include <iostream>

unsigned unguarded_cells(size_t m, size_t n,
		size_t guards[][2], size_t n_guards,
		size_t walls[][2], size_t n_walls) {

	// Алокираме си матрица за клетките
	bool **cells = new bool*[m];
	for (size_t i = 0; i < m; i++) {
		cells[i] = new bool[n]{false};
	}

	// Отбелязваме си стените
	for (size_t i = 0; i < n_walls; i++) {
		size_t row = walls[i][0], col = walls[i][1];
		cells[row][col] = true;
	}

	// Отбелязваме клектите, които всеки страж вижда:
	// Вървим във всяка посока докато не стигнем до края
	// на матрицата или до вече покрита клетка
	for (size_t i = 0; i < n_guards; i++) {
		size_t row = guards[i][0], col = guards[i][1];
		cells[row][col] = true;

		// Наляво
		for(size_t j = 1; j <= col; j++) {
			if (cell[row][col-j]) {
				break;
			}
			cells[row][j] = true;
		}

		// Надясно
		for(size_t j = col + 1; j < n; j++) {
			if (cell[row][j]) {
				break;
			}
			cells[row][j] = true;
		}

		// Нагоре
		for(size_t j = 1; j <= row; j++) {
			if (cell[row-j][col]) {
				break;
			}
			cells[j][col] = true;
		}

		// Надолу
		for(size_t j = row + 1; j < m ; j++) {
			if (cell[j][col]) {
				break;
			}
			cells[j][col] = true;
		}
	}

	// Броим незащитените клетки
	unsigned res = 0;
	for (size_t i = 0; i < m; i++) {
		for (size_t j = 0; j < n; j++) {
			res += (cells[i][j] == false);
		}
	}

	// Освобождаваме паметта
	for (size_t i = 0; i < m; i++) {
		delete[] cells[i];
	}
	delete[] cells;

	return res;
}


// Пример от условието
int main() {
	size_t M = 4, N = 6;
	size_t guards[][2] = {{0, 0}, {1, 1}, {2, 3}};
	size_t walls[][2] = {{0, 1}, {1, 4}, {2, 2}};

	std::cout << unguarded_cells(M, N, guards, walls) << std::endl;
	return 0;
}
