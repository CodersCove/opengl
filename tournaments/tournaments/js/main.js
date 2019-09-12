const { app, BrowserWindow } = require('electron');
// Keep a global reference of the window object, if you don't, the window will
// be closed automatically when the JavaScript object is garbage collected.
let win

function createWindow () {
  // Create the browser window.
  win = new BrowserWindow({
    frame: false,
    resizable: false,
    width: 1250,
    height: 720,
    webPreferences: {
      nodeIntegration: true
    }
  })

  app.setApplicationMenu(null);

  // and load the index.html of the app.
  win.loadFile('html/Window.html')


  // Open the DevTools.
win.webContents.openDevTools()

  // Emitted when the window is closed.
  win.on('closed', () => {
    // Dereference the window object, usually you would store windows
    // in an array if your app supports multi windows, this is the time
    // when you should delete the corresponding element.
    win = null
  })

  //HTTPS.getRequest("http://google.nl");
}

// This method will be called when Electron has finished
// initialization and is ready to create browser windows.
// Some APIs can only be used after this event occurs.
app.on('ready', createWindow)
