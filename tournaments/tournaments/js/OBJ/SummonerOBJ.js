class SummonerOBJ
{
  Name;
  Icon_id;

  construct(Name, Icon_id)
  {
    this.Name = Name;
    this.Icon_id = Icon_id;
  }

  static fromJSON(json)
  {
    SummonerJSONOBJ = JSON.parse(json);
    return new Summoner(SummonerJSONOBJ.name, SummonerJSONOBJ.profileIconId);
  }
}

exports.SummonerOBJ = SummonerOBJ;
