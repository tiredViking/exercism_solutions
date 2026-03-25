class NeedForSpeed {

    private int speed;
    private int batteryDrain;
    private int battery = 100;
    private int distance = 0;
    
    NeedForSpeed(int speed, int batteryDrain) {
        this.speed = speed;
        this.batteryDrain = batteryDrain;
    }

    public boolean batteryDrained() {
        return (this.battery - batteryDrain < 0) || this.battery == 0;
    }

    public int distanceDriven() {
       return this.distance;
    }

    public void drive() {
        if (batteryDrained()) return;
        this.distance += this.speed;
        this.battery -= batteryDrain;
    }

    public static NeedForSpeed nitro() {
        return new NeedForSpeed(50, 4);
    }
}

class RaceTrack {
    private int distance; 
    RaceTrack(int distance) {
        this.distance = distance;
    }

    public boolean canFinishRace(NeedForSpeed car) {
        while (car.distanceDriven() < this.distance && !car.batteryDrained())
        {
            car.drive();
        }
        return car.distanceDriven() >= this.distance;
    }
}
