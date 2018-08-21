/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <SiriUI/_SiriUICardLoaderDelegate.h>
#import <SiriUI/SiriUICardLoadingObserver.h>
#import <SiriUI/SiriUIModalContainerViewControllerDelegate.h>
#import <SiriUI/SiriUICardSnippetViewDataSource.h>
#import <SiriUI/SiriUICardSnippetViewDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>

@protocol OS_dispatch_group;
@class SACardSnippet, NSMutableDictionary, NSObject, _SiriUICardLoader, SiriUIModalContainerViewController, CRKCardViewController, SiriUICardSnippetView, NSString;

@interface SiriUICardSnippetViewController : SiriUISnippetViewController <_SiriUICardLoaderDelegate, SiriUICardLoadingObserver, SiriUIModalContainerViewControllerDelegate, SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate, CRKCardViewControllerDelegate> {

	SACardSnippet* _snippet;
	CGSize _contentSize;
	NSMutableDictionary* _referenceableCommandsByIdentifierMap;
	NSMutableDictionary* _referenceableSnippetsByIdentifierMap;
	NSObject*<OS_dispatch_group> _cardLoadingGroup;
	SACardSnippet* _newlyLoadedCardSnippet;
	_SiriUICardLoader* _cardLoader;
	SiriUIModalContainerViewController* _presentedModalContainerViewController;
	CRKCardViewController* _cardViewController;

}

@property (setter=_setCardViewController:,nonatomic,retain) CRKCardViewController * _cardViewController;              //@synthesize cardViewController=_cardViewController - In the implementation block
@property (nonatomic,retain) SiriUICardSnippetView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)snippet;
-(void)setSnippet:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)requestContext;
-(void)cardLoadingMonitor:(id)arg1 didReceiveCardSnippet:(id)arg2 ;
-(BOOL)usePlatterStyle;
-(void)wasAddedToTranscript;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg1 ;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(BOOL)arg2 ;
-(CRKCardViewController *)_cardViewController;
-(void)_addCardViewControllerAsChildViewController:(id)arg1 ;
-(void)_updateContentSizeAndNotifyDelegateIfNecessary:(BOOL)arg1 ;
-(BOOL)logContentsIfApplicable;
-(void)_setCardViewController:(id)arg1 ;
-(BOOL)isIndicatingActivity;
-(void)willCancel;
-(void)_removeCardViewControllerFromParentViewController:(id)arg1 ;
-(void)_validateCardSectionForParsecFeedbackDelivery:(id)arg1 validHandler:(/*^block*/id)arg2 ;
-(id)_metricsContextOfEventsForCardSection:(id)arg1 inCard:(id)arg2 ;
-(id)_metricsContextOfEventsForCard:(id)arg1 ;
-(void)_validateCardForParsecFeedbackDelivery:(id)arg1 validHandler:(/*^block*/id)arg2 ;
-(void)_beginMonitoringForNextCardWithBlock:(/*^block*/id)arg1 ;
-(Class)transparentHeaderViewClass;
-(BOOL)cardLoader:(id)arg1 shouldLoadCard:(id)arg2 ;
-(BOOL)cardLoader:(id)arg1 loadCard:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)modalContainerViewControllerViewWillDisappear:(id)arg1 ;
-(void)modalContainerViewControllerViewDidDisappear:(id)arg1 ;
-(id)sashItemForCardSnippetView:(id)arg1 ;
-(id)localeForCardSnippetView:(id)arg1 ;
-(void)cardSnippetViewSashWasTapped:(id)arg1 ;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3 ;
-(void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3 ;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(void)cardViewControllerBoundsDidChange:(id)arg1 ;
-(void)cardViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2 ;
-(CGSize)cardViewController:(id)arg1 boundingSizeForCardSectionViewController:(id)arg2 ;
-(BOOL)performReferentialCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(BOOL)performNextCardCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(BOOL)performPunchoutCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(unsigned long long)navigationIndexOfCardViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 forCardViewController:(id)arg2 ;
-(UIEdgeInsets)defaultViewInsets;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(double)desiredHeightForTransparentHeaderView;
-(double)desiredHeight;
@end

