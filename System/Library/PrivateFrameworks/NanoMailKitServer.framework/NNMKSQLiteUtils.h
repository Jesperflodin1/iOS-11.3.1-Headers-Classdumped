/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@interface NNMKSQLiteUtils : NSObject
+(void)bindUnsignedInteger:(unsigned long long)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindBool:(BOOL)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindDouble:(double)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindDate:(id)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindString:(id)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(BOOL)isResponseOkFromPreparedStatementExecution:(int)arg1 ;
+(void)closeExecutedPreparedStatement:(sqlite3_stmtRef)arg1 ;
+(id)dateFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(unsigned long long)unsignedIntegerFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(id)stringFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(void)bindInteger:(long long)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(unsigned long long)integerFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(BOOL)boolFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(double)doubleFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(void)bindData:(id)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(id)dataFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
@end
