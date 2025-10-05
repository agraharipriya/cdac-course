public class GetCharacterIndex {

    public static void main(String[] args) {
        String str = "The quick brown fox jumps over the lazy dog.".toLowerCase();

        for (char ch = 'a'; ch <= 'z'; ch++) {
            int index = str.indexOf(ch);
            System.out.println(ch + " - " + index);
        }
    }
}
