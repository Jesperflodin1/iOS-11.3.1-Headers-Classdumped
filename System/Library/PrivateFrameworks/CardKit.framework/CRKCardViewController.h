/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CRKCardSectionViewControllerDelegate.h>
#import <libobjc.A.dylib/CRKCardSectionViewControllerDataSource.h>
#import <libobjc.A.dylib/SearchUIFeedbackDelegate.h>
#import <libobjc.A.dylib/CRKCardSectionViewProviderHelping.h>
#import <libobjc.A.dylib/CRKFeedbackDelegate.h>

@protocol CRKCardSectionViewProviderManaging, CRCard, CRKCardViewControllerDelegate;
@class NSMutableArray, NSMapTable, CRKComposedStackView, NSString;

@interface CRKCardViewController : UIViewController <CRKCardSectionViewControllerDelegate, CRKCardSectionViewControllerDataSource, SearchUIFeedbackDelegate, CRKCardSectionViewProviderHelping, CRKFeedbackDelegate> {

	id<CRKCardSectionViewProviderManaging> _cardSectionViewProviderManager;
	NSMutableArray* _cardSectionViewControllers;
	NSMapTable* _cardSectionsToCardSectionViewControllersMapTable;
	NSMapTable* _handledParametersForInteraction;
	NSMutableArray* _pendingDismissalCommands;
	BOOL _loaded;
	NSMutableArray* _loadingCardSections;
	BOOL _indicatingActivity;
	id<CRCard> _card;
	id<CRKCardViewControllerDelegate> _delegate;
	long long _preferredPunchoutIndex;

}

@property (nonatomic,retain) id<CRCard> card;                                                    //@synthesize card=_card - In the implementation block
@property (nonatomic,retain) CRKComposedStackView * view; 
@property (assign) long long preferredPunchoutIndex;                                             //@synthesize preferredPunchoutIndex=_preferredPunchoutIndex - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCardViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (getter=isIndicatingActivity,nonatomic,readonly) BOOL indicatingActivity;              //@synthesize indicatingActivity=_indicatingActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)_registerCardSectionViewControllers;
-(void)didEngageCardSection:(id)arg1 ;
-(id)init;
-(id<CRKCardViewControllerDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CRKCardViewControllerDelegate>)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isLoading;
-(id)_initWithCoder:(id)arg1 ;
-(id)_initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)presentViewController:(id)arg1 ;
-(id<CRCard>)card;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1 ;
-(void)setCard:(id<CRCard>)arg1 ;
-(void)setPreferredPunchoutIndex:(long long)arg1 ;
-(long long)preferredPunchoutIndex;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(id)cardSectionViewController:(id)arg1 handledParametersForInteraction:(id)arg2 ;
-(void)cardSectionViewControllerDidFinishLoading:(id)arg1 ;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1 ;
-(void)cardSectionViewController:(id)arg1 didHandleParameters:(id)arg2 forInteraction:(id)arg3 ;
-(id)cardSectionViewController:(id)arg1 interfaceSectionsForInteraction:(id)arg2 ;
-(void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2 ;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2 ;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2 ;
-(void)_loadCardSectionViewControllersFromCard:(id)arg1 ;
-(void)_removeCardSectionViewControllersFromParentViewController:(id)arg1 ;
-(id)_loadCardSectionViewControllerFromCardSection:(id)arg1 ;
-(void)_configureCardSectionViewController:(id)arg1 forCardSection:(id)arg2 ;
-(long long)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg1 andTrailingCardSection:(id)arg2 ;
-(long long)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg1 ;
-(long long)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg1 andTrailingCardSectionViewController:(id)arg2 ;
-(void)_finishLoading;
-(void)_addCardSectionViewControllersAsChildViewControllers:(id)arg1 ;
-(id)_generateCardViewAppearanceFeedback;
-(BOOL)_isActuallyVisible;
-(BOOL)_askDelegateToPerformReferentialCommand:(id)arg1 ;
-(id)defaultFeedbackDelegate;
-(id)_initWithCard:(id)arg1 ;
-(void)cardSectionViewControllerShouldBeRemoved:(id)arg1 ;
-(id)initWithCard:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isIndicatingActivity;
-(void)eventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(id)cardSectionViewController:(id)arg1 interactionWithIdentifier:(id)arg2 ;
-(void)cardSectionViewControllerBoundsDidChange:(id)arg1 ;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
-(CGSize)boundingSizeForCardSectionViewController:(id)arg1 ;
-(id)_cardSectionViewControllerForCardSection:(id)arg1 ;
@end

