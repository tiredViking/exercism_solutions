class RemoteControlCar
{
    private int _speed;
    private int _batteryDrain;
    private int _distanceDriven = 0;
    private int _battery = 100;
    
    // TODO: define the constructor for the 'RemoteControlCar' class
    public RemoteControlCar(int speed, int batteryDrain){
        this._speed = speed;
        this._batteryDrain = batteryDrain;
    }
    
    public bool BatteryDrained()
    {
        return this._battery - this._batteryDrain < 0;
    }

    public int DistanceDriven()
    {
        return this._distanceDriven;
    }

    public void Drive()
    {
        if (this._battery - this._batteryDrain < 0) return;
        this._battery -= this._batteryDrain; //0 
        this._distanceDriven += this._speed;    // 18
    }

    public static RemoteControlCar Nitro()
    {
        return new RemoteControlCar(50, 4);
    }
}

class RaceTrack
{
    // TODO: define the constructor for the 'RaceTrack' class
    private int _distance;
    
    public RaceTrack(int distance) {
        this._distance = distance;
    }
    public bool TryFinishTrack(RemoteControlCar car)
    {
        while (!car.BatteryDrained()) {
            car.Drive();
        }
        return car.DistanceDriven() >= this._distance;
    }
}
