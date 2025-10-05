public class CountOccurence {

	public static void main(String[] args) {
		int[] array = { 10, 99, 34, 78, 99, 21, 34, 56, 34, 78 };

	
		boolean[] visited = new boolean[array.length];

		for (int i = 0; i < array.length; i++) {
		
			if (visited[i]==true) {
				continue;
			}

			int count = 1;
			
			for (int j = i + 1; j < array.length; j++) {
				if (array[i] == array[j]) {
					count++;
					
					visited[j] = true;
				}
			}
			System.out.println(array[i] + " appears " + count);
		}
	}
}
