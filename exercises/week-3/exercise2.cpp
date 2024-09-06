# include <iostream>
# include <vector>

using VI = std::vector<int>;

int findMagicPlate(const VI& pratos) {
    int total_sum = 0;
    int left_sum = 0;

    for (int prato : pratos) {
        total_sum += prato;
    }

    for (size_t i = 0; i < pratos.size(); ++i) {
        int right_sum = total_sum - left_sum - pratos[i];

        if (left_sum == right_sum) {
            return i;
        }

        left_sum += pratos[i];
    }

    return -1;
}

int main() {
    VI pratos1 = {3, 1, 5, 2, 2};
    std::cout << findMagicPlate(pratos1) << std::endl;

    return 0;
}