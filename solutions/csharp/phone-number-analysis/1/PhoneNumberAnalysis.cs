public static class PhoneNumber
{
    public static (bool IsNewYork, bool IsFake, string LocalNumber) Analyze(string phoneNumber)
    {
        bool NY = phoneNumber.Substring(0, 3) == "212";
        bool isFake = phoneNumber.Substring(4, 3) == "555";
        string local = phoneNumber.Substring(phoneNumber.Length - 4);
        (bool NY, bool isFake, string local) results = (NY, isFake, local);
        return results;
    }

    public static bool IsFake((bool IsNewYork, bool IsFake, string LocalNumber) phoneNumberInfo)
    {
        return phoneNumberInfo.IsFake;
    }
}
