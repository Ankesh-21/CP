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
}
