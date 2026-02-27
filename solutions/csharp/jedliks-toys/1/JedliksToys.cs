class RemoteControlCar
{
    private int _distance = 0;
    private int _battery = 100;
    
    public static RemoteControlCar Buy()
    {
        return new RemoteControlCar();
    }

    public string DistanceDisplay()
    {
        return $"Driven {this._distance} meters";
    }

    public string BatteryDisplay()
    {
        if (this._battery == 0) return "Battery empty";
        else return $"Battery at {_battery}%";
    }

    public void Drive()
    {
        if (this._battery == 0) return;
        this._distance += 20;
        this._battery -= 1;
    }
}
