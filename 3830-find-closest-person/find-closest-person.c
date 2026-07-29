int findClosest(int x, int y, int z) {
    int first=z-x;
    if(first<0)
        first=-1*first;
    int second=z-y;
    if(second<0)
        second=-1*second;
    
    if(first<second)
        return 1;
    else if(second<first)
        return 2;
    else
        return 0;    
}