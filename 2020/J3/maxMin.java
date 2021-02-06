package problem.j3.art;

class maxMin {

    public static int maximumValue(int [] array){        
        int currentMax = array[0];    
        for(int i = 0; i < array.length; i++){
            if(currentMax < array[i]){
                currentMax = array[i];
            }
        }
        
        return currentMax;
    }
    
    public static int minimumValue(int [] array){
        int currentMin = array[0];
        for(int i = 0; i < array.length; i++){
            if(currentMin > array[i]){
                currentMin = array[i];
            }
        }
        
        return currentMin;
    }
    
}
