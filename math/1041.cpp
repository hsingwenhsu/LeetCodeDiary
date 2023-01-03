class Solution {
public:
    bool isRobotBounded(string instructions) {
        // If the robot doesn't face north after the first cycle,
        // then the robot will be back to the initial coordinate after 4 cycles
        int dirIdx = 0;
        int deltaX = 0;
        int deltaY = 0;
        for (auto i : instructions) {
            if (i == 'L') {
                dirIdx = (dirIdx - 1 + 4) % 4;
            } else if (i == 'R') {
                dirIdx = (dirIdx + 1 + 4) % 4;
            } else if (i == 'G') {
                if (dirIdx == 0) { // north
                    deltaY++;
                } else if (dirIdx == 1) {
                    deltaX++;
                } else if (dirIdx == 2) {
                    deltaY--;
                } else {
                    deltaX--;
                }
            }
        }
        if (dirIdx != 0) return true;
        if (deltaX == 0 && deltaY == 0) return true;
        return false;
    }
};
