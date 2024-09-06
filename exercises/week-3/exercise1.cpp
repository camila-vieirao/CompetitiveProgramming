# include <iostream>
# include <vector>

using VI = std::vector<int>;
using VVI = std::vector<std::vector<int>>;

int calculateEvenSum(const VI& humidity) {
    int even_sum = 0;
    for (int h : humidity) {
        if (h % 2 == 0) {
            even_sum += h;
        }
    }
    return even_sum;
}

VI applyAdjustments(const VI& humidity, const VVI& adjustments) {
    VI current_humidity = humidity;
    VI results;

    // 3. O número de ajustes durante o dia pode variar entre  1  e  10.000 .
    if (adjustments.size() < 1 || adjustments.size() > 10000) {
        throw std::runtime_error("restricao 3: ");
    }

    for (size_t i = 0; i < adjustments.size(); i++) {
        int adjustment = adjustments[i][0];
        int sensor_index = adjustments[i][1];

        // 4. Validação do Índice do Sensor: O índice deve estar dentro dos limites
        if (sensor_index < 0 || sensor_index >= current_humidity.size()) {
            std::cerr << "restricao 4: indice de sensor fora dos limites: " << sensor_index << std::endl;
            continue;
        }

        // 4. Validação dos Ajustes: Cada ajuste deve estar entre -10000 e 10000
        if (std::abs(adjustment) > 10000) {
            std::cerr << "restricao 4: ajuste deve estar entre -10000 e 10000." << std::endl;
            continue;
        }

        current_humidity[sensor_index] += adjustment;

        int even_sum = calculateEvenSum(current_humidity);
        results.push_back(even_sum);
    }

    return results;
}

int main() {

    VI humidity = { 45, 52, 33, 64 };

    // 1. O número de sensores na estufa é no mínimo  1  e no máximo  10000 .
    if (humidity.size() < 1 || humidity.size() > 10000) {
        std::cerr << "restricao 1" << std::endl;
        return 1;
    }

    // 2. Cada leitura de umidade está entre  -10000  e  10000 .
    for (int h : humidity) {
        if (h < -10000 || h > 10000) {
            std::cerr << "restricao 2: " << h << std::endl;
            return 1;
        }
    }

    VVI adjustments = { {5, 0}, {-20, 1}, {-14, 0}, {18, 3} };

    VI results = applyAdjustments(humidity, adjustments);


    std::cout << "resultados: ";
    for (int sum : results) {
        std::cout << sum << " "; // 166, 146, 132, 150
    }
    std::cout << std::endl;

    return 0;

}