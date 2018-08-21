/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LogDumpUtility : NSObject
+(id)getCachesDirectoryPath;
+(BOOL)createDirectory:(id)arg1 ;
+(id)logFilename:(int)arg1 dumpID:(unsigned)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5 ;
+(id)getDefaultLogDumpPath;
+(void)removeOldFilesInDefaultLogDumpPath;
+(id)filesSortedByTimestamp:(id)arg1 ;
+(void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2 ;
@end

