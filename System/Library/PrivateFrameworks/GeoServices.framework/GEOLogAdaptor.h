/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOLogAdaptor <NSObject>
@optional
-(void)registerLogMsgState:(id)arg1;
-(void)unregisterLogMsgStateOfType:(int)arg1;
-(void)enableLogMsgInstrumentation;
-(void)disableLogMsgInstrumentation;
-(void)forceFlushLogs;
-(void)updateAdaptorPolicyConfiguration:(id)arg1;
-(void)adaptorWillGetAdded:(id)arg1;
-(void)adaptorDidGetAdded:(id)arg1;
-(void)adaptorWillGetRemoved:(id)arg1;
-(void)adaptorDidGetRemoved:(id)arg1;

@required
-(void)queueLogMessage:(id)arg1;
-(void)flushLogs;
-(BOOL)isLogFrameworkAdaptor;
-(BOOL)acceptsLogMessageOfType:(int)arg1;
-(id)adaptorQueue;

@end
