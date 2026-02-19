static class LogLine
{
    public static string Message(string logLine)
    {
        int colonIndex = logLine.IndexOf(':');
        string message = logLine.Substring(colonIndex+1).Trim();
        return message;
    }

    public static string LogLevel(string logLine)
    {
        int colonIndex = logLine.IndexOf(']');
        string error = logLine.Substring(1, colonIndex - 1).Trim().ToLower();
        return error;
    }

    public static string Reformat(string logLine)
    {
        return $"{Message(logLine)} ({LogLevel(logLine)})";
    }
}
