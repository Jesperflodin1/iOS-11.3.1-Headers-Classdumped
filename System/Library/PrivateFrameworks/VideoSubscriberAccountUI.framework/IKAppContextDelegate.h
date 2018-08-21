/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppContextDelegate <NSObject>
@optional
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
-(id)navigationControllerForContext:(id)arg1;
-(id)tabBarForContext:(id)arg1;
-(id)modalControllerForContext:(id)arg1;
-(id)objectForPlayer:(id)arg1;
-(id)objectForPlaylist:(id)arg1;
-(id)objectForMediaItem:(id)arg1;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
-(BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2;
-(id)xhrSessionConfigurationForContext:(id)arg1;
-(id)sourceApplicationBundleIdentifierForContext:(id)arg1;
-(id)sourceApplicationAuditTokenDataForContext:(id)arg1;

@required
-(id)deviceConfigForContext:(id)arg1;

@end

