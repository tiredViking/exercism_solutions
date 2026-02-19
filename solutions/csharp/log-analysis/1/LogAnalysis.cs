public static class LogAnalysis 
{
    public static string SubstringAfter(this string str, string delimiter) {
        int index = str.IndexOf(delimiter);
        if (index == -1) return string.Empty;
        return str.Substring(index + delimiter.Length);
    }

    public static string SubstringBetween(this string str, string start, string end) {
        int startIndex = str.IndexOf(start) + start.Length;
        int endIndex = str.IndexOf(end);
        return str.Substring(startIndex, endIndex - startIndex);
    }
    
    public static string Message(this string str) {
        int index = str.IndexOf(':');
        return str.Substring(index + 1).Trim();
    }

    public static string LogLevel(this string str) {
        int start = str.IndexOf('[');
        int end = str.IndexOf(']');
        return str.Substring(start + 1, end - start - 1);
    }
}