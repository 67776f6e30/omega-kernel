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
const char kr_init_error[]="Micro SD card 설정 에러";
const char kr_power_off[]="전원을 종료하세요.";
const char kr_init_ok[]="Micro SD card 설정 성공";
const char kr_Loading[]="로딩중...";
const char kr_file_overflow[]="파일 오버플로우";

const char kr_menu_btn[]="[B]취소    [A]확인";
const char kr_writing[]="저장중...";
const char kr_lastest_game[]="SELECT THE LASTEST";

const char kr_time[]="     시간";
const char kr_Mon[]="월";
const char kr_Tues[]="화";
const char kr_Wed[]="수";
const char kr_Thur[]="목";
const char kr_Fri[]="금";
const char kr_Sat[]="토";
const char kr_Sun[]="일";

const char kr_addon[]="    애드온";
const char kr_reset[]="리셋";
const char kr_rts[]="SAVESTATE";
const char kr_sleep[]="슬립";
const char kr_cheat[]="치트";

const char kr_hot_key[] ="슬립 키";
const char kr_hot_key2[]=" 메뉴 키";

const char kr_language[]=" 언어";
const char kr_lang[]="한국어";
const char kr_set_btn[]="설정";
const char kr_ok_btn[]=" 확인";

const char kr_formatnor_info[]="SURE?about 4 mins";

const char kr_check_sav[]="CHECKING SAV FILE";
const char kr_make_sav[] ="CREATING SAV FILE";

const char kr_check_RTS[]="CHECKING RTS FILE";
const char kr_make_RTS[] ="CREATING RTS FILE";

const char kr_check_pat[]="CHECKING PAT FILE";
const char kr_make_pat[] ="CREATING PAT FILE";

const char kr_loading_game[]="게임 로딩중";

const char kr_engine[]="   엔진";
const char kr_use_engine[]="FAST PATCH ENGINE";

const char kr_recently_play[]="최근 실행목록";

const char kr_START_help[]="최근 실행목록 열기";
const char kr_SELECT_help[]="썸네일 전환";
const char kr_L_A_help[]="Multiboot";
const char kr_LSTART_help[]="파일 삭제";
const char kr_online_manual[]="온라인 매뉴얼";

const char kr_no_game_played[]="최근 실행한 내역이 없습니다";

const char kr_ingameRTC[]=" GAME RTC";
const char kr_ingameRTC_open[]="열기";
const char kr_ingameRTC_close[]="닫기";//TURNOFF TO POWER SAVE

const char kr_error_0[]="Folder error";
const char kr_error_1[]="File error";
const char kr_error_2[]="SAVER error";
const char kr_error_3[]="Save error";
const char kr_error_4[]="Read save error";
const char kr_error_5[]="Make save error";
const char kr_error_6[]="RTS file error";

const char *kr_rom_menu[] = {
	"실행",
	"BOOT WITH ADDON",
	"WRITE TO NOR CLEAN",
	"WRITE TO NOR ADDON",
	"저장 타입",
	"치트",
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
