/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUInterstitialAdManagerDelegate, NUPage, NUAdProvider;
@class FCAppConfigurationManager;

@interface NUInterstitialAdManager : NSObject {

	BOOL _enabled;
	id<NUInterstitialAdManagerDelegate> _delegate;
	id<NUPage> _activePage;
	id<NUAdProvider> _adProvider;
	FCAppConfigurationManager* _appConfigurationManager;

}

@property (nonatomic,readonly) id<NUAdProvider> adProvider;                                      //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,readonly) FCAppConfigurationManager * appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (assign,nonatomic,__weak) id<NUInterstitialAdManagerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NUPage> activePage;                                              //@synthesize activePage=_activePage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
-(id<NUInterstitialAdManagerDelegate>)delegate;
-(void)setDelegate:(id<NUInterstitialAdManagerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(FCAppConfigurationManager *)appConfigurationManager;
-(void)setActivePage:(id<NUPage>)arg1 ;
-(id<NUPage>)activePage;
-(id<NUAdProvider>)adProvider;
-(id)initWithAdProvider:(id)arg1 appConfigurationManager:(id)arg2 ;
-(void)triggerTimerChangesForActivePage:(id)arg1 ;
-(void)loadInterstitial;
-(void)restartTimer;
-(void)cancelTimer;
@end

