#include <log.h>
#include <unistd.h>

int main(int argc, char** argv) {
    //Config: -----(optional)----
    //---------------------------
    LOG logger(DEBUG);
    logger.init("mylogs.txt");
    logger.set_db();
    logger.log_msg(DEBUG, "--- Start ---");
    logger.log_msg(INFO, "ZACZYNAM");
    logger.log_msg(ERROR, "Blad bledu bledu");
    logger.log_msg(WARN, "Uwaga Uwaga");
    logger.log_msg(DEBUG, "pracuje sobie");
    logger.log_msg(DEBUG, "dalej sobie pracuje");
    logger.log_msg(INFO, "2 SEKUNDY PRZERWY");
    sleep(2);
    logger.log_msg(DEBUG, "pracuje po przerwie");
    logger.log_msg(INFO, "KONCZE");
    logger.log_msg(DEBUG, "--- Koniec ---");
    //LOG(DEBUG,"123");
    //LOG(INFO, "Main executed with %d arguments");
    //LOG().init("myLogs.txt");
    //LOG(WARN, "123123123");
    //LOG(ERROR, "123123123");
}