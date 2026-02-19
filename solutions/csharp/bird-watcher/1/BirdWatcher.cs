class BirdCount
{
    private int[] birdsPerDay;

    public BirdCount(int[] birdsPerDay)
    {
        this.birdsPerDay = birdsPerDay;
    }

    public static int[] LastWeek()
    {
        return new int[] {0, 2,5,3,7,8,4};
    }

    public int Today()
    {
        return birdsPerDay[birdsPerDay.Length - 1];
    }

    public void IncrementTodaysCount()
    {
        birdsPerDay[birdsPerDay.Length - 1] += 1;
    }

    public bool HasDayWithoutBirds()
    {
        foreach(int birds in birdsPerDay) {
            if (birds == 0) return true;
        }
        return false;
    }

    public int CountForFirstDays(int numberOfDays)
    {
        int sum = 0;
        for (int i = 0; i < numberOfDays; i++) sum += birdsPerDay[i];
        return sum;
    }

    public int BusyDays()
    {    
        int busy = 0;
        foreach(int bird in birdsPerDay){
            if (bird >= 5) busy += 1;
        }    
        return busy;
    }
}
