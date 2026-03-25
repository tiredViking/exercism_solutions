class ExperimentalRemoteControlCar implements RemoteControlCar {
    private int distance;

    public void drive() {
        this.distance += 20; // Experimental cars drive 20 units
    }

    public int getDistanceTravelled() {
        return this.distance;
    }
}