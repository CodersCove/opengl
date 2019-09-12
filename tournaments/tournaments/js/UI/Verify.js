var Page  = require('./../js/BASE/Page.js').Page;
var RiotAPI  = require('./../js/RiotAPI.js').RiotAPI;

class Verify extends Page
{
  constructor()
  {
    super();
    console.log(window.URLSearchParams);
  }

  BT_Verify_Click(Sender, Event)
  {

  }
}

exports.Verify = Verify;
