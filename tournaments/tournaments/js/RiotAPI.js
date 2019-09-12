var HTTPS  = require('./HTTPS.js').HTTPS;
var SummonerOBJ  = require('./OBJ/SummonerOBJ.js').SummonerOBJ;
var Syncer  = require('./BASE/Syncer.js').Syncer;

class RiotAPI {
  static api_key = "RGAPI-13529e83-2070-4730-a04c-59306d3418e0";

  static GetSummoner(name)
  {
      var syn = new Syncer();
      syn.func = function () {
        HTTPS.getRequest("https://euw1.api.riotgames.com/lol/summoner/v4/summoners/by-name/"+name+"?api_key=RGAPI-13529e83-2070-4730-a04c-59306d3418e0", function(data) {
          syn.done(data);
        });
      }
      return syn;

  }

}

exports.RiotAPI = RiotAPI;
