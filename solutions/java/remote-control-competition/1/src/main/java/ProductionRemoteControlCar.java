class ProductionRemoteControlCar implements RemoteControlCar, Comparable<ProductionRemoteControlCar> {
    private int distance;
    private int victories;

    public void drive() {
        this.distance += 10; // Production cars drive 10 units
    }

    public int getDistanceTravelled() {
        return this.distance;
    }

    public int getNumberOfVictories() {
        return this.victories;
    }

    public void setNumberOfVictories(int numberOfVictories) {
        this.victories = numberOfVictories;
    }

    @Override
    public int compareTo(ProductionRemoteControlCar other) {
        // For DESCENDING order:
        // Return negative if this has MORE victories than other
        // Return positive if this has FEWER victories than other
        return Integer.compare(other.getNumberOfVictories(), this.getNumberOfVictories());
    }
}