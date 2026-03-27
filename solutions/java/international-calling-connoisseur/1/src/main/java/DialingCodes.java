import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class DialingCodes {
    private Map<Integer, String> codes = new HashMap<>();
    
    public Map<Integer, String> getCodes() {
        return this.codes;
    }

    public void setDialingCode(Integer code, String country) {
        codes.put(code, country);   
    }

    public String getCountry(Integer code) {
        return this.codes.get(code);
    }

    public void addNewDialingCode(Integer code, String country) {
        if (this.codes.containsKey(code) || this.codes.containsValue(country)) return;
        this.codes.put(code, country);
        }

    public Integer findDialingCode(String country) {
        Set<Map.Entry<Integer, String>> keys = this.codes.entrySet();
        for (Map.Entry<Integer, String> key : keys){
            if (key.getValue().equals(country)) return key.getKey();
        }
        return null;
    }

    public void updateCountryDialingCode(Integer code, String country) {
        if (findDialingCode(country) == null) return;
        this.codes.remove(findDialingCode(country));
        this.codes.put(code, country);
    }
}
