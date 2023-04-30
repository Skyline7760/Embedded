/*
----------------------------------------------------------------------------------------------------------------
---
Function: fr_status
Function Usage: Prints status of f_open function on FATFs
Function Input : FRESULT - FATFs Return enum - More Information - http://elmchan.org/fsw/ff/doc/rc.html
Function Returns: Void
Author: APS
----------------------------------------------------------------------------------------------------------------
---
*/
void fr_status ( FRESULT status ) {
// Prints Corresponding status in Console - Check the above website in Function Description for
// more information about the enums.
switch (status) {
 case FR_OK:
 printf("open success \n");
 break;
 case FR_NO_FILE:
 printf("NO file \n");
 break;
 case FR_DISK_ERR:
 printf("diskerror \n");
 break;
 case FR_INT_ERR:
 printf("INT ERROR \n");
 break;
 case FR_NOT_READY:
 printf("FR NOT READY \n");
 break;
 case FR_NO_PATH:
 printf("No path \n");
 break;
 case FR_DENIED:
 printf("fr denied \n");
 break;
 case FR_EXIST:
 printf(" FR Exist \n");
 break;
 case FR_INVALID_OBJECT:
 printf("FR invalid Object \n");
 break;
 case FR_WRITE_PROTECTED:
 printf("write protect \n");
 break;
 case FR_INVALID_DRIVE:
 printf("invalid drive \n");
 break;
 case FR_TOO_MANY_OPEN_FILES:
 printf("too many open \n");
 break;
 case FR_INVALID_NAME:
 printf("invalid name \n");
 break;
 case FR_NOT_ENABLED:
 printf("fr not enabled \n");
 break;
 case FR_NO_FILESYSTEM:
 printf("no file system \n");
 break;
 case FR_TIMEOUT:
 printf("fr time out \n");
 break;
 case FR_NOT_ENOUGH_CORE:
 printf("core error \n");
 break;
 default:
 printf("read failure \n");
}
}