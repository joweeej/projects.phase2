public public class Television {
    private boolean isSwitchedOn;
    private int volume;
    private double frequency;

    // Setter method for volume
    public boolean setVolume(int volume) {
        if (volume > 0 && volume <= 10) {
            this.volume = volume;
            return true;
        } else {
            return false;
        }
    }

    // Setter method for frequency
    public boolean setFrequency(double frequency) {
        if (frequency >= 535.0 && frequency <= 1605.0) {
            this.frequency = frequency;
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        // Creating an object of Television class
        Television tv = new Television();
        
        // Using the setter methods
        boolean volumeSet = tv.setVolume(7);
        boolean frequencySet = tv.setFrequency(1000.5);

        System.out.println("Volume set: " + volumeSet);
        System.out.println("Frequency set: " + frequencySet);
    }
}
 {
    
}
