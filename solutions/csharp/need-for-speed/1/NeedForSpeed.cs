class RemoteControlCar
{    
    private int _speed;
    private int _batteryDrain;
    
    private int _distanceDriven = 0;
    private int _batteryPercentage = 100;
    
    public RemoteControlCar(int speed, int batteryDrain){
        this._speed = speed;
        this._batteryDrain = batteryDrain;
    }

    public bool BatteryDrained()
    {
        if ((this._batteryPercentage - this._batteryDrain < 0) || this._batteryPercentage == 0) return true;
        else return false;
    }

    public int DistanceDriven()
    {
        return this._distanceDriven;
    }

    public void Drive()
    {
        if (BatteryDrained()) return;
        this._distanceDriven += this._speed;
        this._batteryPercentage -= this._batteryDrain;
    }

    public static RemoteControlCar Nitro()
    {
        return new RemoteControlCar(50, 4);
    }
}

class RaceTrack
{
    private int _distance;

    public RaceTrack (int distance) {
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
