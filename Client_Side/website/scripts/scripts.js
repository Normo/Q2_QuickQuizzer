function login()
{
    var x;
    var name=prompt("Herzlich Willkommen bei QuickQuizzer\n\rBitte geben Sie einen Nick ein:","Chuck Norris");
    
    if (name!=null)
      {
          x="Hallo " + name + "! Herzlich Willkommen!";
          document.getElementById("login").innerHTML=x;
          y=name;
          document.getElementById("player1").innerHTML=y;
      }
}

Function.prototype.Timer = function (interval, calls, onend) {
  var count = 0;
  var payloadFunction = this;
  var startTime = new Date();
  var callbackFunction = function () {
    return payloadFunction(startTime, count);
  };
  var endFunction = function () {
    if (onend) {
      onend(startTime, count, calls);
    }
  };
  var timerFunction =  function () {
    count++;
    if (count < calls && callbackFunction() != false) {
      window.setTimeout(timerFunction, interval);
    } else {
      endFunction();
    }
  };
  timerFunction();
};




    function leadingzero (number) 
    {
        return (number < 10) ? '0' + number : number;
    }
    function countdown (seconds, target) 
    {
      var element = document.getElementById(target);
    
      var calculateAndShow = function () {
        if (seconds >= 0) {
          var s = seconds % 60;
          element.innerHTML=
            leadingzero(s);
          seconds--;
        } else {
          return false;
        }
      };
    
      var completed = function () {
      var text = "<span style='color:red; Font-size:20pt'>TimeOut</span>";
	    document.getElementById('timer').innerHTML = text;
      };
    
      calculateAndShow.Timer(1000, Infinity, completed);
    }
    /*window.onload =function timer() {
      new countdown(10, "timer");
    };*/
    function timer() {
      new countdown(10, "timer");
    };