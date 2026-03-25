public class CarsAssemble {

    public double productionRatePerHour(int speed) {
        double rawRate = speed * 221.0;
        
        if (speed >= 1 && speed <= 4) {
            return rawRate;
        } else if (speed >= 5 && speed <= 8) {
            return rawRate * 0.90; // 90%
        } else if (speed == 9) {
            return rawRate * 0.80; // 80%
        } else if (speed == 10) {
            return rawRate * 0.77; // 77%
        } else {
            return 0.0;
        }
    }

    public int workingItemsPerMinute(int speed) {
        return (int) (productionRatePerHour(speed) / 60);
    }
}
