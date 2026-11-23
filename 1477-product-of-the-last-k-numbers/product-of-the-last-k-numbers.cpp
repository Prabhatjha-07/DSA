class ProductOfNumbers {
public:
    vector<int> prefix;

    ProductOfNumbers() {
        prefix.push_back(1);
    }

    void add(int num) {
        if(num == 0) {
            prefix.clear();
            prefix.push_back(1);
        }
        else {
            int p = prefix.back() * num;
            prefix.push_back(p);
        }
    }

    int getProduct(int k) {
        int n = prefix.size();

        if(k >= n) {
            return 0;
        }

        return prefix[n - 1] / prefix[n - 1 - k];
    }
};