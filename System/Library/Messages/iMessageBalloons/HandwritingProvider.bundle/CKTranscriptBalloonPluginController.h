/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol CKTranscriptBalloonPluginController <CKTranscriptPluginViewReuseDelegate,IMBalloonPluginController>
@property (nonatomic,readonly) UIView*<CKTranscriptPluginView> pluginContentView; 
@property (nonatomic,readonly) UIViewController * pluginContentViewController; 
@property (nonatomic,copy) id updateSnapshot; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) BOOL wantsTranscriptTimestampDrawer; 
@property (nonatomic,readonly) BOOL wantsTranscriptGroupMonograms; 
@property (nonatomic,readonly) BOOL wantsBalloonGradient; 
@property (nonatomic,readonly) BOOL wantsOutline; 
@property (nonatomic,readonly) BOOL hasSizingInfo; 
@property (nonatomic,readonly) UIViewController * contentViewController; 
@optional
-(void)relinquishDataSource;
-(void)configureWithDataSource:(id)arg1 isFromMe:(BOOL)arg2;
-(id)updateSnapshot;
-(BOOL)isInteractive;
-(UIViewController *)contentViewController;
-(void)willAnimateBoundsChange;
-(void)performHostAppResume;
-(void)performHostAppSuspend;
-(BOOL)handlePresentationAction;
-(void)clearShelfPayload;
-(UIViewController *)pluginContentViewController;
-(void)pluginContentViewWillDisappear;
-(void)didFinishAnimatedBoundsChange;
-(BOOL)hasSizingInfo;
-(void)pluginContentViewWillAppear;
-(BOOL)wantsTranscriptGroupMonograms;
-(void)configureWithConversationID:(id)arg1 recipients:(id)arg2;
-(void)setUpdateSnapshot:(/*^block*/id)arg1;
-(BOOL)wantsOutline;
-(BOOL)wantsBalloonGradient;
-(BOOL)wantsTranscriptTimestampDrawer;

@required
-(UIView*<CKTranscriptPluginView>)pluginContentView;

@end
