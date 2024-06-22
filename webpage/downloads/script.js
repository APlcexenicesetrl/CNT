class ui{
    constructor(){
        this.link = {
            jump(link){
                var a = document.createElement('a');
                a.href = link;
                a.click();
            }
        }
        this.debug = {
            log: ``,
            error(errText){
                console.error(`ERROR:${errText}`);
            }
        }
    }
}
ui = new ui();