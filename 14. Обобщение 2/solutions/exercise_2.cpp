#include <iostream>

template <typename T>
int minGasStations(T *stations, size_t n, T dist, T maxFull,
		size_t start = 0, int res = 0) {
	// Докъде можем да стигнем без да заредим
	const T maxReach = (start != 0) ? stations[start] + maxFull: maxFull;

	if (maxReach >= dist) {
		// Можем да стигнем до края без да спираме
		return res;
	}

	if (start >= n - 1) {
		// Няма повече бензиностанции по пътя
		return -1;
	}

	// Идея: след всяко спиране, караме колкото се може по-дълго и спираме
	// отново чак на най-далечната бензиностанция до която можем да стигнем.
	for(size_t i = start+1; i < n; i ++) {
		if (stations[i] > maxReach) {
			if (i == start+1) {
				// Не можем да се придвижим дори с една бензиностанция напред
				return -1;
			} else {
				return minGasStations(stations, n, dist, maxFull, i-1, res+1);
			}
		}
	}

	// Спираме на последната бензиностанция:
	return minGasStations(stations, n, dist, maxFull, n-1, res+1);
}

int main() {
	int stations[] = {100, 200, 300, 500, 700, 800};
	int dist = 1000, maxFull = 450;

	std::cout << minGasStations(stations, 6, dist, maxFull) << std::endl;
	return 0;
}
