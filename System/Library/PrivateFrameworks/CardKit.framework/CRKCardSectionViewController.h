/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/INUIRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/SearchUIFeedbackDelegate.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>
#import <libobjc.A.dylib/CRKFeedbackDelegate.h>

@protocol CRKCardSectionViewControllerDelegate, CRKCardSectionViewControllerDataSource, CRCardSection;
@class CRKOverlayButton, INUIRemoteViewController, CRKCardSectionViewConfiguration, NSArray, NSString;

@interface CRKCardSectionViewController : UIViewController <INUIRemoteViewControllerDelegate, SearchUIFeedbackDelegate, SFFeedbackListener, CRKFeedbackDelegate> {

	CRKOverlayButton* _overlayButton;
	BOOL _loading;
	BOOL _active;
	BOOL _compressed;
	INUIRemoteViewController* _remoteViewController;
	id<CRKCardSectionViewControllerDelegate> _delegate;
	id<CRKCardSectionViewControllerDataSource> _dataSource;
	id<CRCardSection> _cardSection;
	CRKCardSectionViewConfiguration* _viewConfiguration;
	NSArray* _extraCommands;

}

@property (nonatomic,retain) CRKCardSectionViewConfiguration * viewConfiguration;                                  //@synthesize viewConfiguration=_viewConfiguration - In the implementation block
@property (setter=_setExtraCommands:,getter=_extraCommands,nonatomic,retain) NSArray * extraCommands;              //@synthesize extraCommands=_extraCommands - In the implementation block
@property (nonatomic,readonly) INUIRemoteViewController * _remoteViewController;                                   //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCardSectionViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCardSectionViewControllerDataSource> dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIView*<CRKCardSectionView> view; 
@property (nonatomic,retain) id<CRCardSection> cardSection;                                                        //@synthesize cardSection=_cardSection - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                                        //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                          //@synthesize active=_active - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;                                                  //@synthesize compressed=_compressed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionViewControllerForCardSection:(id)arg1 dataSource:(id)arg2 ;
+(id)cardSectionViewControllerForViewConfiguration:(id)arg1 dataSource:(id)arg2 ;
+(void)registerCardSectionViewController;
+(id)cardSectionClasses;
-(void)didEngageCardSection:(id)arg1 ;
-(id<CRKCardSectionViewControllerDelegate>)delegate;
-(void)setDataSource:(id<CRKCardSectionViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<CRKCardSectionViewControllerDelegate>)arg1 ;
-(id<CRKCardSectionViewControllerDataSource>)dataSource;
-(BOOL)isActive;
-(void)loadView;
-(void)setActive:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isLoading;
-(INUIRemoteViewController *)_remoteViewController;
-(id<CRCardSection>)cardSection;
-(void)presentViewController:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)_commands;
-(void)setCardSection:(id<CRCardSection>)arg1 ;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 ;
-(unsigned long long)crk_intrinsicInteractiveBehavior;
-(void)setViewConfiguration:(CRKCardSectionViewConfiguration *)arg1 ;
-(BOOL)_setupWithDataSource:(id)arg1 ;
-(id)_unhandledParameters;
-(BOOL)_shouldHideButtonOverlay;
-(BOOL)_hasCorrespondingSearchUIView;
-(BOOL)_isLoadedWithIntentsUIView;
-(id)_backingCardSection;
-(void)_createAndSetSearchUIView;
-(id)_extraCommands;
-(id)_preferredPunchoutCommand;
-(id)_destinationPunchout;
-(void)_setupCardSectionButtons;
-(BOOL)_checkIfCardSectionIsNull:(id)arg1 ;
-(void)_buttonOverlayWasTouchedUpInside:(id)arg1 ;
-(void)_buttonOverlayWasTouchedUpOutside:(id)arg1 ;
-(void)_buttonOverlayWasTouchedDown:(id)arg1 ;
-(void)_buttonOverlayTouchWasCanceled:(id)arg1 ;
-(id)_generateCardSectionViewAppearanceFeedback;
-(void)_setExtraCommands:(id)arg1 ;
-(void)_performCommand:(id)arg1 ;
-(BOOL)_expectsSearchUIView;
-(BOOL)_isTitleSectionViewController;
-(BOOL)_isIndicatingActivity;
-(void)_setViewExternally:(id)arg1 ;
-(CRKCardSectionViewConfiguration *)viewConfiguration;
-(void)eventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3 ;
-(void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3 ;
-(void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1 ;
-(BOOL)shouldHandleEngagement:(id)arg1 forCardSection:(id)arg2 ;
-(id)_initWithCardSection:(id)arg1 dataSource:(id)arg2 ;
-(id)_interaction;
-(void)_finishLoadingViewIfNecessary;
-(void)_loadCardSectionView;
-(BOOL)_shouldAttemptToConnectToRemoteViewController;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
-(BOOL)_shouldRenderButtonOverlay;
-(void)remoteViewControllerServiceDidTerminate:(id)arg1 ;
-(void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2 ;
-(id)minimumSizesBySystemVersionForRemoteViewController:(id)arg1 ;
-(id)maximumSizesBySystemVersionForRemoteViewController:(id)arg1 ;
-(id)interfaceSectionsForRemoteViewController:(id)arg1 ;
-(void)_attemptToConnectToRemoteViewControllerWithInteraction:(id)arg1 forParameters:(id)arg2 ;
-(BOOL)isCompressed;
-(void)setCompressed:(BOOL)arg1 ;
-(id)_parameters;
@end
