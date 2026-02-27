using System.Text;
public static class Identifier
{
    public static string Clean(string identifier)
    {
        if (string.IsNullOrEmpty(identifier)) return "";
        var final = new StringBuilder();
        bool toCapitalizeNext = false;
        
        foreach (char ch in identifier) {
            switch (ch) {
                case char c when char.IsControl(c):
                    final.Append("CTRL"); break;
                case '-':
                    toCapitalizeNext = true; break;
                case ' ':
                    final.Append('_'); break;
                case char c when toCapitalizeNext == true:
                    final.Append(char.ToUpper(c));
                    toCapitalizeNext = false;
                    break;
                case char c when c >= '\u03B1' && c <= '\u03C9':
                    break;
                case char c when char.IsLetter(c):
                    final.Append(c);
                    break;
            }
        }
        
        return final.ToString();        
    }
}
