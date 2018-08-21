/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@interface ADBackgroundTaskScheduler : ADSingleton
+(id)sharedInstance;
+(void)registerTaskDelegate:(id)arg1 forRequestID:(id)arg2 ;
+(void)unregisterTaskDelegate:(id)arg1 ;
-(id)init;
-(void)handleXPCActivity:(id)arg1 withID:(id)arg2 ;
-(void)addBackgroundTask:(id)arg1 ;
-(void)cancelBackgroundTask:(id)arg1 ;
-(void)checkOnTask:(id)arg1 ;
@end

