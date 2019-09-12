var Login  = require('./../js/UI/Login.js').Login;
const fs = require('fs');

class Window {
  UICLASS = "";
  navelement;
  window;


  constructor()
  {
    this.navelement = document.getElementById("mainframe");
    this.navigate(new Login());
    this.window = window;


  }

  navigate(myclass)
  {
    //this.navelement.src = path;
  //  var script = document.createElement("script");
    //script.innerText = "UICLASS = " + myclass;
    //this.navelement.appendChild(script);
    //this.navelement.contentWindow.lol = "hi";
    fs.readFile(__dirname + "\\" + myclass.source, "utf8", (err, data) => {
      if (err) throw err;

      this.navelement.innerHTML = data;
      this.window.UICLASS = myclass;
      this.window.UICLASS.onLoaded();
      console.log("LOADED!");


    });
  }



}

window.onload = function()
{
  WINDOWCLASS = new Window();
};
