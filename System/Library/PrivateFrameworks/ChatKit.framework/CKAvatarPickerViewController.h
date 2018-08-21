/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CKAvatarPickerLayoutDelegate.h>

@protocol CKAvatarPickerViewControllerDelegate;
@class UIViewController, CKAvatarTitleCollectionReusableView, UICollectionView, CKAvatarPickerLayout, CKConversation, CNContactStore, UITapGestureRecognizer, NSMapTable, NSString;

@interface CKAvatarPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, CKAvatarPickerLayoutDelegate> {

	id<CKAvatarPickerViewControllerDelegate> _delegate;
	UIViewController* _avatarOrbPresentingViewController;
	CKAvatarTitleCollectionReusableView* _titleView;
	UICollectionView* _collectionView;
	CKAvatarPickerLayout* _layout;
	CKConversation* _conversation;
	CNContactStore* _suggestionsEnabledContactStore;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSMapTable* _visibleTitleViews;
	long long _style;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CKAvatarPickerLayout * layout;                                            //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                            //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CNContactStore * suggestionsEnabledContactStore;                          //@synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                            //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) CKAvatarTitleCollectionReusableView * titleView;                          //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleTitleViews;                                           //@synthesize visibleTitleViews=_visibleTitleViews - In the implementation block
@property (assign,nonatomic) long long style;                                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CGRect titleViewFrame; 
@property (assign,nonatomic,__weak) id<CKAvatarPickerViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * avatarOrbPresentingViewController;              //@synthesize avatarOrbPresentingViewController=_avatarOrbPresentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKAvatarPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKAvatarPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)loadView;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setTitleView:(CKAvatarTitleCollectionReusableView *)arg1 ;
-(CKAvatarTitleCollectionReusableView *)titleView;
-(void)viewWillLayoutSubviews;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CKAvatarPickerLayout *)layout;
-(void)setLayout:(CKAvatarPickerLayout *)arg1 ;
-(BOOL)hasTitle;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)_animateOutTitleView;
-(void)_animateInTitleView;
-(CGRect)titleViewFrame;
-(void)_chatPropertiesChanged:(id)arg1 ;
-(void)setAvatarOrbPresentingViewController:(UIViewController *)arg1 ;
-(void)collapseToPancakeView;
-(id)_contactNameSupplementaryViewAtIndexPath:(id)arg1 ;
-(CNContactStore *)suggestionsEnabledContactStore;
-(void)setSuggestionsEnabledContactStore:(CNContactStore *)arg1 ;
-(void)setVisibleTitleViews:(NSMapTable *)arg1 ;
-(void)_handleConversationRecipientsDidChange:(id)arg1 ;
-(void)_handleGroupNameChange:(id)arg1 ;
-(void)_handleAddressBookChange:(id)arg1 ;
-(void)_handleConversationIsFilteredChange:(id)arg1 ;
-(void)_handleTranscriptScroll:(id)arg1 ;
-(BOOL)_shouldUseBanner;
-(void)_handleTapOnCollectionView:(id)arg1 ;
-(NSMapTable *)visibleTitleViews;
-(BOOL)_canCollapseToPancakeView;
-(void)expandToExpandedView;
-(void)_animateToLayout:(unsigned long long)arg1 ;
-(BOOL)chatIsReportedAsSpam;
-(int)chatWasDetectedAsSMSSpam;
-(UIViewController *)avatarOrbPresentingViewController;
-(id)_titleSupplementaryViewAtIndexPath:(id)arg1 ;
-(id)_cutoutSupplementaryViewAtIndexPath:(id)arg1 ;
-(id)avatarDisplayName;
-(BOOL)avatarPickerLayoutShouldShowTitle:(id)arg1 ;
@end

