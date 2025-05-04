import java.util.*;

public class ZigzagConversion {
    public String convert(String s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        List<StringBuilder> rows = new ArrayList<>();
        for (int i = 0; i < numRows; i++) {
            rows.add(new StringBuilder());
        }

        int crow = 0;
        boolean down = false;

        for (char c : s.toCharArray()) {
            rows.get(crow).append(c);
            if (crow == 0) {
                down = true;
            } else if (crow == numRows - 1) {
                down = false;
            }

            crow += down ? 1 : -1;
        }

        StringBuilder result = new StringBuilder();
        for (StringBuilder row : rows) {
            result.append(row);
        }

        return result.toString();
    }

    public static void main(String[] args) {
        ZigzagConversion zigzag = new ZigzagConversion();
        String result = zigzag.convert("PAYPALISHIRING", 3);
        System.out.println(result); 
    }
}
