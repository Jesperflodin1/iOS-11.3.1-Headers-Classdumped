/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PreferencesRemoteUIDelegateProtocol <NSObject>
@property (assign,nonatomic,__weak) id<DelayedPushDelegate> delegate; 
@required
-(void)reloadTopControllerWithAdditionalHeaders:(id)arg1;
-(void)popAndReloadFromRemoteUI:(BOOL)arg1 additionalHeaders:(id)arg2;
-(void)cleanupLoader;
-(void)loadURL:(id)arg1 postBody:(id)arg2 additionalHeaders:(id)arg3;
-(id)initWithNavigationController:(id)arg1 initialAction:(id)arg2;
-(id)initWithNavigationController:(id)arg1 buyStorageFlow:(BOOL)arg2;
-(id<DelayedPushDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancelRemoteUI;
-(id)initWithNavigationController:(id)arg1;
-(void)loadURL:(id)arg1 postBody:(id)arg2;

@end

