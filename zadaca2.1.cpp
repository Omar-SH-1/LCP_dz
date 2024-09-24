#include <iostream>
#include <vector>

std::vector<std::vector<int>> TM(const std::vector<std::vector<int>> &matrix) {
    int str = matrix.size();
    int stl = matrix[0].size();
    
    std::vector<std::vector<int>> matr(stl, std::vector<int>(str));
    for (int i = 0; i < str; i++) {
        for (int j = 0; j < stl; j++) {
            matr[j][i] = matrix[i][j];
		}
	}
    return matr;

}



int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j]; 
        }
    }

    std::vector<std::vector<int>> matrixt = TM(matrix);
    
  
    for (const auto &row : matrixt) {
        for (const auto &element : row) {
            std::cout << element << " "; 
        }
        std::cout << "\n";
    }

    return 0;
}
