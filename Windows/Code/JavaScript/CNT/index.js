import ('./class.js');

class getwindows{
    constructor(){
        this.class = {
            "CNT_Code-Class-ID":"CNT-getwindows(Function Class)"
        }
    }
}


class cnt{
    constructor(){
        this.class = {
            "CNT_Code-Class-ID":"NULL"
        }
        this.console = console;

        var cnt_getwindows = new getwindows();
        this.getwindows = cnt_getwindows;

        var cnt_studio = new studio();
        this.getwindows = cnt_getwindows;
    }
    
}

cnt = new cnt();