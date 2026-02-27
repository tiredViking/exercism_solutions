class RemoteControlCar
{
    private int _battery = 100;
    private int _driven = 0;
    
    public static RemoteControlCar Buy()
    {
        return new RemoteControlCar();
    }

    public string DistanceDisplay()
    {
        return $"Driven {this._driven} meters";
    }

    public string BatteryDisplay()
    {
        if (this._battery == 0) return "Battery empty";
        return $"Battery at {this._battery}%";
    }

    public void Drive()
    {
        if (this._battery <= 0) return;
        this._driven += 20;
        this._battery -= 1;
    }
}
