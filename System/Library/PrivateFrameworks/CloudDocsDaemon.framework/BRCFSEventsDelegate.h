/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRCFSEventsDelegate <NSObject>
@required
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(id)arg4;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 unresolvedLastPathComponent:(id)arg3;
-(void)fseventRecursiveAtRoot:(id)arg1 withReason:(id)arg2;

@end
