import java.util.*;

public class Associate {
    private String associateId;
    public String associateName;
    public String Technology;
    public int experienceInYears;

    public String getassociateId(){
        return this.associateId;
    }
    public void setassociateId(String id){
        this.associateId = id;
    }
    public String getassociateName(){
        return this.associateName;
    }
    public void setassociateName(String name){
        this.associateName = name;
    }
    public String getTechnology(){
        return this.Technology;
    }
    public void setTechhnology(String tech){
        this.Technology = tech;
    }
    public int getExperienceInYears(){
        return this.experienceInYears;
    }
    public void setexperienceInYears(int exp){
        this.experienceInYears = exp;
    }
    public Associate(String name,String id,int exp,String skill){
        this.Technology = skill;
        this.experienceInYears = exp;
        this.associateName = name;
        this.associateId = id;
    }
    public static List<String>associateForgiventechnology(Associate[]as,String tech){
        List<String> ans = new ArrayList<>();
        int n = as.length;
        for (int i = 0;i < n;i++){
            if (as[i].Technology.equals(tech) && as[i].experienceInYears % 5 == 0){
                ans.add(as[i].associateId);
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        Associate[] as = new Associate[5];
        Scanner sc = new Scanner(System.in);
        for (int i = 0;i < 5;i++){
            String name;
            String Id;
            int yrs;
            String skill;
            name = sc.nextLine();
            Id = sc.nextLine();
            skill = sc.nextLine();
            yrs = sc.nextInt();
            sc.nextLine();
            as[i] = new Associate(name, Id, yrs, skill);
        }
        String tech = sc.nextLine();
        List<String> ans = associateForgiventechnology(as, tech);
        ans.sort(null);
        for (int i = 0;i < ans.size();i++){
            System.out.println(ans.get(i));
        }
        sc.close();
    }
}
