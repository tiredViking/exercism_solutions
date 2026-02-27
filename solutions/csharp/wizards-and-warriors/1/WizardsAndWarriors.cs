abstract class Character
{    private string _characterType = "";
    protected Character(string characterType)
    {
        this._characterType = characterType;
    }

    public abstract int DamagePoints(Character target);

    public virtual bool Vulnerable()
    {
        return false;
    }

    public override string ToString()
    {
        return $"Character is a {this._characterType}";
    }
}

class Warrior : Character
{
    public Warrior() : base("Warrior")
    {
    }

    public override int DamagePoints(Character target)
    {
        if (target.Vulnerable()) return 10;
        else return 6;
    }
}

class Wizard : Character
{
    private bool _spellPrepared = false;
    
    public Wizard() : base("Wizard")
    {
    }

    public override int DamagePoints(Character target)
    {
        switch (this._spellPrepared)
        {
            case true: return 12;
                break;
            case false: return 3;
                break;
        }
    }

    public void PrepareSpell()
    {
        this._spellPrepared = true;    
    }

    public override bool Vulnerable(){
        if (!this._spellPrepared) return true;
        else return false;
    }
}
