class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int moves = 0;
        for(int i =0 ;i < students.size();i++)
        {
            int diff = students[i]-seats[i];
            if(diff < 0)
                diff = diff *-1;
            
            moves = moves + diff;
        }
        return moves;
    }
};