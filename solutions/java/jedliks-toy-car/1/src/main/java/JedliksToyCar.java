public class JedliksToyCar {
    private int meters = 0;
    private int battery = 100;
    
    public static JedliksToyCar buy() {
        return new JedliksToyCar();
    }

    public String distanceDisplay() {
        return "Driven %d meters".formatted(this.meters);
    }

    public String batteryDisplay() {
        if (this.battery == 0) return "Battery empty";
        return "Battery at %d%%".formatted(this.battery);
    }

    public void drive() {
        if (this.battery == 0) return;
        this.meters += 20;
        this.battery -= 1;
    }
}
