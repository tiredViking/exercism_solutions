public class LogLevels {
    
    public static String message(String logLine) {
        String message[] = logLine.split(": ");
        return message[1].trim();
    }

    public static String logLevel(String logLine) {
        String message[] = logLine.split(": ");
        String level = message[0].substring(1, message[0].indexOf(']'));
        return level.toLowerCase().trim();
    }

    public static String reformat(String logLine) {
        String last = logLevel(logLine);
        String first = message(logLine);
        return "%s (%s)".formatted(first, last);    
    }
}
