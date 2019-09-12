var Page  = require('../BASE/Page.js').Page;
var PageFrame  = require('../WINDOW/PageFrame.js').PageFrame;
var Brackets  = require('./Brackets.js').Brackets;

class App extends Page
{
  pagemenu;
  pagemenu2;
  source = "App.html";
  constructor()
  {
    super();

  }

  onLoaded()
  {
    this.frame = new PageFrame("pageframe");
    this.frame.navigate(new Brackets());
    this.pagemenu = document.getElementsByTagName("pagemenu")[0];
    this.pagemenu2 = document.getElementsByTagName("pagemenu2")[0];
    this.getPageMenuItems();

  }

  getPageMenuItems()
  {
    var items =
    [
      {
        "name": "Team",
        "items":
        [
          {
            "name": "Brackets",
            "function": "test"
          }
        ]
      }
    ];

    for(var i = 0;i < items.length;i++)
    {
      var item = items[i];
      var pagemenuitem = document.createElement("pagemenuitem");
      pagemenuitem.innerHTML = item.name;
      this.pagemenu.appendChild(pagemenuitem);
    }
  }
}

exports.App = App;
