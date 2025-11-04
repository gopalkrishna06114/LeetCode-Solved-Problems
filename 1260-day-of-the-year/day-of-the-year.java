class Solution {

    private boolean leapYear(int year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        }
        return false;
    }

    public int dayOfYear(String date) {
        int dayCount = 0;
        int monthCount = 0;
        int year = 0;
        int totalCount = 0;

        int[] arr = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Extract year
        for (int i = 0; i < 4; i++) {
            year = (year * 10) + (date.charAt(i) - '0');
        }

        if (leapYear(year)) {
            arr[1] = 29;
        }

        // Extract month
        monthCount = (monthCount * 10) + (date.charAt(5) - '0');
        monthCount = (monthCount * 10) + (date.charAt(6) - '0');

        // Extract day
        dayCount = (dayCount * 10) + (date.charAt(8) - '0');
        dayCount = (dayCount * 10) + (date.charAt(9) - '0');

        // Calculate total days
        if (monthCount >= 2) {
            for (int i = 0; i < monthCount - 1; i++) {
                totalCount += arr[i];
            }
        }

        totalCount += dayCount;
        return totalCount;
    }
}
