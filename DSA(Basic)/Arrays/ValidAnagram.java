class Solution {
   public boolean isAnagram(String s, String t) {
        char sarr[] = s.toCharArray();
        char tarr[] = t.toCharArray();

        Arrays.sort(sarr);
         Arrays.sort(tarr);
         
        //  if(sarr!= tarr){
        //      System.out.println("true");
        //  }
        
      return Arrays.equals(sarr,tarr)?true:false;

    }
}
