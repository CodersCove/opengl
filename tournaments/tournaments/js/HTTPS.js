const https = require('https');
const { Syncer, Synchandler } = require('./BASE/Syncer.js');
class HTTPS
{

  static async getRequest(url, func)
  {


      await https.get(url, (resp) =>
      {
        let data = '';

        // A chunk of data has been recieved.
        resp.on('data', (chunk) =>
        {
          data += chunk;
        });

        // The whole response has been received. Print out the result.
        resp.on('end', () =>
        {
          func(data);
        });

      });



  }

}

exports.HTTPS = HTTPS;
