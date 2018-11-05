
using namespace std;

class RecentCounter {
public:
    RecentCounter() {

    }

    int ping(int t) {
        rec.push(t);
        while(rec.front()<t-3000)
            rec.pop();
        return rec.size();

    }
private:
    queue<int> rec;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
