#include "lang.h"

char* gl_init_error;
char* gl_power_off;
char* gl_init_ok;
char* gl_Loading;
char* gl_file_overflow;

char* gl_menu_btn;
char* gl_lastest_game;

char* gl_writing;

char* gl_time;
char* gl_Mon;
char* gl_Tues;
char* gl_Wed;
char* gl_Thur;
char* gl_Fri;
char* gl_Sat;
char* gl_Sun;

char* gl_addon;
char* gl_reset;
char* gl_rts;
char* gl_sleep;
char* gl_cheat;

char* gl_hot_key;
char* gl_hot_key2;

char* gl_language;
char* gl_en_lang;
char* gl_kr_lang;
char* gl_set_btn;
char* gl_ok_btn;

char* gl_formatnor_info;

char* gl_check_sav;
char* gl_make_sav;

char* gl_check_RTS;
char* gl_make_RTS;

char* gl_check_pat;
char* gl_make_pat;

char* gl_loading_game;

char* gl_engine;
char* gl_use_engine;

char*  gl_recently_play;

char* gl_START_help;
char* gl_SELECT_help;
char* gl_L_A_help;
char* gl_LSTART_help;
char* gl_online_manual;

char* gl_no_game_played;

char* gl_ingameRTC;
//char* gl_offRTC_powersave;
char* gl_ingameRTC_open;
char* gl_ingameRTC_close;

char* gl_error_0;
char* gl_error_1;
char* gl_error_2;
char* gl_error_3;
char* gl_error_4;
char* gl_error_5;
char* gl_error_6;
//--
char**  gl_rom_menu;
char**  gl_nor_op;



// english
const char en_init_error[]="Micro SD card initial error";
const char en_power_off[]="Power off";
const char en_init_ok[]="Micro SD card initial OK";
const char en_Loading[]="Loading...";
const char en_file_overflow[]="The file overflow";

const char en_menu_btn[]="[B]CANCEL    [A]OK";
const char en_writing[]="WRITING...";
const char en_lastest_game[]="SELECT THE LASTEST";

const char en_time[]="     TIME";
const char en_Mon[]="MON";
const char en_Tues[]="TUE";
const char en_Wed[]="WED";
const char en_Thur[]="THU";
const char en_Fri[]="FRI";
const char en_Sat[]="SAT";
const char en_Sun[]="SUN";

const char en_addon[]="    ADDON";
const char en_reset[]="RESET";
const char en_rts[]="SAVESTATE";
const char en_sleep[]="SLEEP";
const char en_cheat[]="CHEAT";

const char en_hot_key[] ="SLEEP KEY";
const char en_hot_key2[]=" MENU KEY";

const char en_language[]=" LANGUAGE";
const char en_lang[]="ENGLISH";
const char en_set_btn[]="SET";
const char en_ok_btn[]=" OK";

const char en_formatnor_info[]="SURE?about 4 mins";

const char en_check_sav[]="CHECKING SAV FILE";
const char en_make_sav[] ="CREATING SAV FILE";

const char en_check_RTS[]="CHECKING RTS FILE";
const char en_make_RTS[] ="CREATING RTS FILE";

const char en_check_pat[]="CHECKING PAT FILE";
const char en_make_pat[] ="CREATING PAT FILE";

const char en_loading_game[]="LOADING GAME";

const char en_engine[]="   ENGINE";
const char en_use_engine[]="FAST PATCH ENGINE";

const char en_recently_play[]="RECENT PLAYED";

const char en_START_help[]="Open recently played list";
const char en_SELECT_help[]="Thumbnail toggle";
const char en_L_A_help[]="Multiboot";
const char en_LSTART_help[]="Delete file";
const char en_online_manual[]="Online manual";

const char en_no_game_played[]="No game played yet";

const char en_ingameRTC[]=" GAME RTC";
const char en_ingameRTC_open[]="OPEN";
const char en_ingameRTC_close[]="CLOSE";//TURNOFF TO POWER SAVE

const char en_error_0[]="Folder error";
const char en_error_1[]="File error";
const char en_error_2[]="SAVER error";
const char en_error_3[]="Save error";
const char en_error_4[]="Read save error";
const char en_error_5[]="Make save error";
const char en_error_6[]="RTS file error";

const char *en_rom_menu[] = {
	"CLEAN BOOT",
	"BOOT WITH ADDON",
	"WRITE TO NOR CLEAN",
	"WRITE TO NOR ADDON",
	"SAVE TYPE",
	"CHEAT",
};
const char *en_nor_op[3]={
	"DIRECT BOOT",
	"DELETE",
	"FORMAT ALL",
};	


// korean
const char kr_init_error[]="Micro SD card ���� ����";
const char kr_power_off[]="������ �����ϼ���.";
const char kr_init_ok[]="Micro SD card ���� ����";
const char kr_Loading[]="�ε���...";
const char kr_file_overflow[]="���� �����÷ο�";

const char kr_menu_btn[]="[B]���    [A]Ȯ��";
const char kr_writing[]="������...";
const char kr_lastest_game[]="SELECT THE LASTEST";

const char kr_time[]="     �ð�";
const char kr_Mon[]="��";
const char kr_Tues[]="ȭ";
const char kr_Wed[]="��";
const char kr_Thur[]="��";
const char kr_Fri[]="��";
const char kr_Sat[]="��";
const char kr_Sun[]="��";

const char kr_addon[]="    �ֵ��";
const char kr_reset[]="����";
const char kr_rts[]="SAVESTATE";
const char kr_sleep[]="����";
const char kr_cheat[]="ġƮ";

const char kr_hot_key[] ="���� Ű";
const char kr_hot_key2[]=" �޴� Ű";

const char kr_language[]=" ���";
const char kr_lang[]="�ѱ���";
const char kr_set_btn[]="����";
const char kr_ok_btn[]=" Ȯ��";

const char kr_formatnor_info[]="SURE?about 4 mins";

const char kr_check_sav[]="CHECKING SAV FILE";
const char kr_make_sav[] ="CREATING SAV FILE";

const char kr_check_RTS[]="CHECKING RTS FILE";
const char kr_make_RTS[] ="CREATING RTS FILE";

const char kr_check_pat[]="CHECKING PAT FILE";
const char kr_make_pat[] ="CREATING PAT FILE";

const char kr_loading_game[]="���� �ε���";

const char kr_engine[]="   ����";
const char kr_use_engine[]="FAST PATCH ENGINE";

const char kr_recently_play[]="�ֱ� ������";

const char kr_START_help[]="�ֱ� ������ ����";
const char kr_SELECT_help[]="����� ��ȯ";
const char kr_L_A_help[]="Multiboot";
const char kr_LSTART_help[]="���� ����";
const char kr_online_manual[]="�¶��� �Ŵ���";

const char kr_no_game_played[]="�ֱ� ������ ������ �����ϴ�";

const char kr_ingameRTC[]=" GAME RTC";
const char kr_ingameRTC_open[]="����";
const char kr_ingameRTC_close[]="�ݱ�";//TURNOFF TO POWER SAVE

const char kr_error_0[]="Folder error";
const char kr_error_1[]="File error";
const char kr_error_2[]="SAVER error";
const char kr_error_3[]="Save error";
const char kr_error_4[]="Read save error";
const char kr_error_5[]="Make save error";
const char kr_error_6[]="RTS file error";

const char *kr_rom_menu[] = {
	"����",
	"BOOT WITH ADDON",
	"WRITE TO NOR CLEAN",
	"WRITE TO NOR ADDON",
	"���� Ÿ��",
	"ġƮ",
};
const char *kr_nor_op[3]={
	"DIRECT BOOT",
	"DELETE",
	"FORMAT ALL",
};	

//---------------------------------------------------------------------------------
void LoadKorean(void)
{
	gl_init_error = (char*)kr_init_error;
	gl_power_off = (char*)kr_power_off;
	gl_init_ok = (char*)kr_init_ok;
	gl_Loading = (char*)kr_Loading;
	gl_file_overflow = (char*)kr_file_overflow;

	gl_menu_btn = (char*)kr_menu_btn;
	gl_writing = (char*)kr_writing;
	gl_lastest_game = (char*)kr_lastest_game;
	
	gl_time = (char*)kr_time;	
	gl_Mon = (char*)kr_Mon;
	gl_Tues = (char*)kr_Tues;
	gl_Wed = (char*)kr_Wed;
	gl_Thur = (char*)kr_Thur;
	gl_Fri = (char*)kr_Fri;
	gl_Sat = (char*)kr_Sat;
	gl_Sun = (char*)kr_Sun;
	gl_addon = (char*)kr_addon;
	gl_reset = (char*)kr_reset;
	gl_rts = (char*)kr_rts;
	gl_sleep = (char*)kr_sleep;
	gl_cheat = (char*)kr_cheat;	
	
	gl_hot_key = (char*)kr_hot_key;
	gl_hot_key2 = (char*)kr_hot_key2;
	
	gl_language =  (char*)kr_language;
	gl_en_lang = (char*)en_lang;
	gl_kr_lang = (char*)kr_lang;;
	gl_set_btn = (char*)kr_set_btn;
	gl_ok_btn = (char*)kr_ok_btn;
	gl_formatnor_info = (char*)kr_formatnor_info;

	gl_check_sav = (char*)kr_check_sav;
	gl_make_sav = (char*)kr_make_sav;
		
	gl_check_RTS = (char*)kr_check_RTS;
	gl_make_RTS = (char*)kr_make_RTS;
	
	gl_check_pat = (char*)kr_check_pat;
	gl_make_pat = (char*)kr_make_pat;
	
	gl_loading_game = (char*)kr_loading_game;
	
	gl_engine = (char*)kr_engine;
	gl_use_engine = (char*)kr_use_engine;
	
	gl_recently_play = (char*)kr_recently_play;
	
	gl_START_help = (char*)kr_START_help;
	gl_SELECT_help = (char*)kr_SELECT_help;
	gl_L_A_help = (char*)kr_L_A_help;
	gl_LSTART_help = (char*)kr_LSTART_help;
	gl_online_manual = (char*)kr_online_manual;
	
	gl_no_game_played = (char*)kr_no_game_played;
	
	gl_ingameRTC = (char*)kr_ingameRTC;
	//gl_offRTC_powersave = (char*)kr_offRTC_powersave;
	gl_ingameRTC_open = (char*)kr_ingameRTC_open;
	gl_ingameRTC_close = (char*)kr_ingameRTC_close;
	
	gl_error_0 = (char*)kr_error_0;
	gl_error_1 = (char*)kr_error_1;
	gl_error_2 = (char*)kr_error_2;
	gl_error_3 = (char*)kr_error_3;
	gl_error_4 = (char*)kr_error_4;
	gl_error_5 = (char*)kr_error_5;
	gl_error_6 = (char*)kr_error_6;
	//
	gl_rom_menu = (char**)kr_rom_menu;
	gl_nor_op = (char**)kr_nor_op;
}
//---------------------------------------------------------------------------------
void LoadEnglish(void)
{
	gl_init_error = (char*)en_init_error;
	gl_power_off = (char*)en_power_off;
	gl_init_ok = (char*)en_init_ok;
	gl_Loading = (char*)en_Loading;
	gl_file_overflow = (char*)en_file_overflow;

	gl_menu_btn = (char*)en_menu_btn;
	gl_writing = (char*)en_writing;
	gl_lastest_game = (char*)en_lastest_game;
	
	gl_time = (char*)en_time;	
	gl_Mon = (char*)en_Mon;
	gl_Tues = (char*)en_Tues;
	gl_Wed = (char*)en_Wed;
	gl_Thur = (char*)en_Thur;
	gl_Fri = (char*)en_Fri;
	gl_Sat = (char*)en_Sat;
	gl_Sun = (char*)en_Sun;
	gl_addon = (char*)en_addon;
	gl_reset = (char*)en_reset;
	gl_rts = (char*)en_rts;
	gl_sleep = (char*)en_sleep;
	gl_cheat = (char*)en_cheat;	
	
	gl_hot_key = (char*)en_hot_key;
	gl_hot_key2 = (char*)en_hot_key2;
	
	gl_language =  (char*)en_language;
	gl_en_lang = (char*)en_lang;
	gl_kr_lang = (char*)kr_lang;;
	gl_set_btn = (char*)en_set_btn;
	gl_ok_btn = (char*)en_ok_btn;
	gl_formatnor_info = (char*)en_formatnor_info;

	gl_check_sav = (char*)en_check_sav;
	gl_make_sav = (char*)en_make_sav;
		
	gl_check_RTS = (char*)en_check_RTS;
	gl_make_RTS = (char*)en_make_RTS;
	
	gl_check_pat = (char*)en_check_pat;
	gl_make_pat = (char*)en_make_pat;
	
	gl_loading_game = (char*)en_loading_game;
	
	gl_engine = (char*)en_engine;
	gl_use_engine = (char*)en_use_engine;
	
	gl_recently_play = (char*)en_recently_play;
	
	gl_START_help = (char*)en_START_help;
	gl_SELECT_help = (char*)en_SELECT_help;
	gl_L_A_help = (char*)en_L_A_help;
	gl_LSTART_help = (char*)en_LSTART_help;
	gl_online_manual = (char*)en_online_manual;
	
	gl_no_game_played = (char*)en_no_game_played;
	
	gl_ingameRTC = (char*)en_ingameRTC;
	//gl_offRTC_powersave = (char*)en_offRTC_powersave;
	gl_ingameRTC_open = (char*)en_ingameRTC_open;
	gl_ingameRTC_close = (char*)en_ingameRTC_close;
	
	gl_error_0 = (char*)en_error_0;
	gl_error_1 = (char*)en_error_1;
	gl_error_2 = (char*)en_error_2;
	gl_error_3 = (char*)en_error_3;
	gl_error_4 = (char*)en_error_4;
	gl_error_5 = (char*)en_error_5;
	gl_error_6 = (char*)en_error_6;
	//
	gl_rom_menu = (char**)en_rom_menu;
	gl_nor_op = (char**)en_nor_op;
}
