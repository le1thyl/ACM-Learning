//
// Created by LEGION on 2026/10/24.
//
vector<int> path;
bool used[4] = {};

void dfs(int n) {
    if (path.size() == n) {
        for (int x : path) {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (used[i]) continue;

        path.push_back(i);
        used[i] = true;

        dfs(n);

        path.pop_back();
        used[i] = false;
    }
}

int main() {
    dfs(3);
}