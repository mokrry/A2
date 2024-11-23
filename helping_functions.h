

#ifndef A2_HELPING_FUNCTIONS_H
#define A2_HELPING_FUNCTIONS_H

#include <vector>
#include <iostream>
#include <fstream>
#include <string>

inline void writeCSV(const std::vector<std::vector<float>>& data, const std::string& filename) {
    std::ofstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Ошибка при открытии файла: " << filename << std::endl;
        return;
    }

    for (const auto& row : data) {
        for (size_t i = 0; i < row.size(); ++i) {
            file << static_cast<int>(row[i]); // Записываем значение без ограничения точности
            if (i < row.size() - 1) {
                file << ","; // Добавляем запятую между элементами
            }
        }
        file << "\n"; // Переход на новую строку после каждой строки данных
    }

    file.close();
    std::cout << "CSV файл успешно сохранен: " << filename << std::endl;
}

template <typename T>
void printVector(const std::vector<T>& vec) {
    std::cout << "[ ";
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

#endif //A2_HELPING_FUNCTIONS_H
