/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppContextInternalDelegate <IKAppContextDelegate>
@optional
-(BOOL)appContext:(id)arg1 shouldStartWithScript:(id)arg2 scriptURL:(id)arg3 loadedFromFallback:(BOOL)arg4;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 validatedJSString:(id)arg3;

@required
-(BOOL)shouldForceIgnoreHTTPCacheForAppContext:(id)arg1;

@end
