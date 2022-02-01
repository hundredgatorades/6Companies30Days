int numberOfBoomerangs(vector<vector<int>>& points) {
        int pt_size = points.size();
        int count = 0;
        for(int i = 0; i < pt_size; ++i){
            int dis = 0;
            map<int, int> my_map;
            for(int j = 0; j < pt_size; ++j){
                if(points[i] != points[j]){
                    dis = pow(points[i][0] - points[j][0], 2) + pow(points[i][1] - points[j][1], 2);
                    if(my_map.find(dis) == my_map.end()){
                        my_map.insert(pair<int, int>(dis, 1));
                    }else{
                        (my_map.find(dis)->second)++;
                    }
                }
            }
            for(auto it:my_map){
                int num = it.second;
                if(num >= 2){
                    count += num * (num - 1);
                }
            }
        }
        return count;
    }