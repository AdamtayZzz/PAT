#include <cstdio>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, m, temp, k;
    scanf("%d%d", &n, &m);
    vector<set<char>> right(m);
    vector<int> score(m);
    for(int i = 0; i < m; i++) {
        scanf("%d%d%d", &score[i], &temp, &k);
        for(int j = 0; j < k; j++) {
            char c;
            scanf(" %c", &c);
            right[i].insert(c);
        }
    }
    vector<int> wrong(m);
    for(int i = 0; i < n; i++) {
        int s = 0;
        scanf("\n");
        for(int j = 0; j < m; j++) {
            if(j != 0) scanf(" ");
            scanf("(%d", &k);
            set<char> st;
            char c;
            for(int l = 0; l < k; l++) {
                scanf(" %c", &c);
                st.insert(c);
            }
            scanf(")");
            if(st == right[j]) {
                s += score[j];
            } else {
                wrong[j]++;
            }
        }
        printf("%d\n", s);
    }
    int maxw = 0;
    for(int i = 0; i < m; i++) {
        if(wrong[i] > maxw) {
            maxw = wrong[i];
        }
    }
    if(maxw == 0)
        printf("Too simple");
    else {
        printf("%d", maxw);
        for(int i = 0; i < m; i++) {
            if(wrong[i] == maxw) {
                printf(" %d", i + 1);
            }
        }
    }
    return 0;
}
