var Page  = require('../BASE/Page.js').Page;
var RiotAPI  = require('../RiotAPI.js').RiotAPI;
var Brackets  = require('./Brackets.js').Brackets;
var App  = require('./App.js').App;
const  Syncer  = require('./../BASE/Syncer.js').Syncer;

class Login extends Page
{
  source = "Login.html";
  constructor()
  {
    super();
    console.log(window);
  }

  BT_Verify_Click(Sender, Event)
  {
      /*RiotAPI.GetSummoner(document.getElementById("TB_Summonername").value).onDone(
        function(data)
        {
          var obj = JSON.parse(data);
          console.log(obj);
          if(obj.status != undefined && obj.status.status_code == 404)
          {
            document.getElementById("TB_Summonername").style.color = "rgb(255, 0, 0)";
          }
          else if (obj.status == undefined)
          {
            document.getElementById("TB_Summonername").style.color = "rgb(0, 0, 0)";
          }
        }
      );*/
        WINDOWCLASS.navigate(new App());
  }

}


  exports.Login = Login;


//UICLASS = new Login();
