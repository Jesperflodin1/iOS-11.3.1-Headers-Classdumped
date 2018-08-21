/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/SFCollectionViewDelegateLayout.h>
#import <libobjc.A.dylib/SFAirDropBrowserDelegate.h>
#import <libobjc.A.dylib/SFPersonCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/SFWirelessSettingsControllerDelegate.h>

@protocol SFAirDropActivityViewControllerDelegate;
@class NSString, UILabel, UIButton, NSLayoutConstraint, SFAirDropIconView, UITextView, SFAirDropActiveIconView, NSArray, UICollectionView, SFCollectionViewLayout, SFPersonCollectionViewCell, NSCache, SFAirDropBrowser, NSMutableDictionary, SFWirelessSettingsController, NSMutableOrderedSet, NSOperationQueue, NSMutableArray, UIVisualEffectView, UIFocusContainerGuide, NSMapTable, NSObject;

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, SFCollectionViewDelegateLayout, SFAirDropBrowserDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate> {

	NSString* _sendingAppBundleID;
	long long _attachmentCount;
	NSString* _sessionID;
	long long _sharedItemsRequestID;
	UILabel* _titleLabel;
	UIButton* _reportBugButton;
	NSLayoutConstraint* _titleLabelTopConstraint;
	double _titleLabelTopConstraintDefaultConstant;
	SFAirDropIconView* _airDropIconView;
	NSLayoutConstraint* _airDropIconLeftConstraint;
	UITextView* _noWifiTextView;
	NSLayoutConstraint* _noWifiRightConstraint;
	SFAirDropActiveIconView* _airDropActiveIconView;
	NSLayoutConstraint* _airDropActiveIconLeftConstraint;
	UITextView* _instructionsTextView;
	NSLayoutConstraint* _instructionsRightConstraint;
	SFAirDropActiveIconView* _airDropInactiveIconView;
	NSLayoutConstraint* _airDropInactiveIconLeftConstraint;
	UITextView* _noAWDLTextView;
	NSLayoutConstraint* _noAWDLRightConstraint;
	NSLayoutConstraint* _largeTextAirdropViewYConstraint;
	NSArray* _textViewConstraints;
	NSArray* _largeTextTextViewConstraints;
	NSArray* _airdropViewYConstraints;
	NSArray* _largeTextAirdropViewYConstraints;
	UICollectionView* _collectionView;
	UICollectionView* _detailCollectionView;
	UIButton* _showMoreButton;
	BOOL _shouldExpandTextIfNeeded;
	SFCollectionViewLayout* _collectionViewLayout;
	SFCollectionViewLayout* _detailCollectionViewLayout;
	SFPersonCollectionViewCell* _prototypeActivityCell;
	NSCache* _cachedPreferredItemSizesByString;
	CGSize _cachedPreferredItemSize;
	SFAirDropBrowser* _browser;
	id _progressToken;
	NSMutableDictionary* _personToProgress;
	NSMutableDictionary* _personToStoredTransferFinalState;
	NSMutableDictionary* _personToSharedItemsRequestID;
	NSMutableDictionary* _sharedItemsRequestIDToPreviewPhoto;
	SFWirelessSettingsController* _wirelessSettings;
	NSMutableOrderedSet* _cachedSharedItems;
	BOOL _itemsRequested;
	BOOL _itemsReady;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _objectChanges;
	long long _generatedPreviews;
	UIVisualEffectView* _titleVibrancyView;
	UIVisualEffectView* _instructionsVibrancyView;
	UIVisualEffectView* _iconsVibrancyView;
	UIButton* _doneButton;
	UIFocusContainerGuide* _fcg;
	SFOperationRef _logger;
	CGSize _minimumPreferredContentSize;
	NSMapTable* _realNameToFirstSeenTimestamp;
	unsigned long long _peopleStartTimestamp;
	BOOL _sharedItemsAvailable;
	BOOL _otherActivityViewPresented;
	BOOL _darkStyleOnLegacyApp;
	NSObject*<SFAirDropActivityViewControllerDelegate> _delegate;
	NSString* _overriddenTitleText;
	NSString* _overriddenNoWiFIBTText;
	NSString* _overriddenNoAWDLText;
	NSString* _overriddenInstructionsText;
	SCD_Struct_SF8 _sendingApplicationAuditToken;

}

@property (assign,nonatomic) SCD_Struct_SF8 sendingApplicationAuditToken;                                     //@synthesize sendingApplicationAuditToken=_sendingApplicationAuditToken - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SFAirDropActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize suggestedThumbnailSize; 
@property (assign,nonatomic) BOOL sharedItemsAvailable;                                                       //@synthesize sharedItemsAvailable=_sharedItemsAvailable - In the implementation block
@property (assign,nonatomic) BOOL otherActivityViewPresented;                                                 //@synthesize otherActivityViewPresented=_otherActivityViewPresented - In the implementation block
@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                                                       //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (nonatomic,copy) NSString * overriddenTitleText;                                                    //@synthesize overriddenTitleText=_overriddenTitleText - In the implementation block
@property (nonatomic,copy) NSString * overriddenNoWiFIBTText;                                                 //@synthesize overriddenNoWiFIBTText=_overriddenNoWiFIBTText - In the implementation block
@property (nonatomic,copy) NSString * overriddenNoAWDLText;                                                   //@synthesize overriddenNoAWDLText=_overriddenNoAWDLText - In the implementation block
@property (nonatomic,copy) NSString * overriddenInstructionsText;                                             //@synthesize overriddenInstructionsText=_overriddenInstructionsText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAirDropAvailable;
+(BOOL)airDropActivityCanPerformActivityWithItemClasses:(id)arg1 ;
-(id)titleText;
-(void)invalidate;
-(NSObject*<SFAirDropActivityViewControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<SFAirDropActivityViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)darkStyleOnLegacyApp;
-(CGSize)_cachedPreferredItemSizeForString:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3 ;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(void)cleanupWithSelectedActivityType:(id)arg1 ;
-(void)setOtherActivityViewPresented:(BOOL)arg1 ;
-(BOOL)isWifiEnabled;
-(CGSize)calculatePreferredContentSize;
-(void)browserWillChangePeople:(id)arg1 ;
-(void)browser:(id)arg1 didDeletePersonAtIndex:(unsigned long long)arg2 ;
-(void)browser:(id)arg1 didInsertPersonAtIndex:(unsigned long long)arg2 ;
-(void)browserDidChangePeople:(id)arg1 ;
-(BOOL)isBluetoothEnabled;
-(void)wirelessSettingsDidChange:(id)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)updateContentAreaAnimated:(BOOL)arg1 ;
-(id)wifiBtHelpTextLocalizedStringKey;
-(void)enableAirDropRequiredFeatures;
-(id)noWiFiBTText;
-(id)attributedStringWithTitle:(id)arg1 content:(id)arg2 ;
-(id)noAWDLText;
-(id)instructionsText;
-(void)_createtvOSLayoutConstraints;
-(BOOL)isTetheredModeEnabled;
-(NSString *)overriddenTitleText;
-(void)setOverriddenTitleText:(NSString *)arg1 ;
-(NSString *)overriddenNoWiFIBTText;
-(void)setOverriddenNoWiFIBTText:(NSString *)arg1 ;
-(NSString *)overriddenNoAWDLText;
-(void)setOverriddenNoAWDLText:(NSString *)arg1 ;
-(NSString *)overriddenInstructionsText;
-(void)setOverriddenInstructionsText:(NSString *)arg1 ;
-(BOOL)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(void)personCollectionViewCellDidStartTransfer:(id)arg1 ;
-(void)personCollectionViewCellDidTerminateTransfer:(id)arg1 ;
-(void)personCollectionViewCellDidFinishTransfer:(id)arg1 ;
-(void)_startTelemetry;
-(void)subscribeToProgresses;
-(void)unsubscribeToProgresses;
-(void)_stopTelemetry;
-(void)startBrowsing;
-(void)showMore:(id)arg1 ;
-(void)_createiOSLayoutConstraints;
-(void)_updateFontSizes;
-(void)_updateExclusionPathsForTextViews;
-(id)_fontWithStyle:(id)arg1 maxSizeCategory:(id)arg2 traits:(unsigned)arg3 ;
-(void)updateShowMoreButtonForShowPeople:(BOOL)arg1 inactive:(BOOL)arg2 active:(BOOL)arg3 static:(BOOL)arg4 ;
-(CGSize)_cachedPreferredItemSize;
-(void)startTransferForPeople:(id)arg1 ;
-(void)generateSpecialPreviewPhotoForRequestID:(long long)arg1 ;
-(void)setNeedsRequestingSharedItems;
-(void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2 ;
-(void)unpublishedProgressForPersonWithRealName:(id)arg1 ;
-(void)_collectTelemetryForPeople:(id)arg1 ;
-(void)_emitTelemetryForPerson:(id)arg1 ;
-(BOOL)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id*)arg3 ;
-(id)cellForPerson:(id)arg1 ;
-(BOOL)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(BOOL)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(BOOL)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(BOOL)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 ;
-(void)handleLivePhotoItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(void)handleImageItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(void)handleOtherItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 ;
-(BOOL)addItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 ;
-(void)setSendingApplicationAuditToken:(SCD_Struct_SF8)arg1 ;
-(CGSize)suggestedThumbnailSize;
-(void)setSharedItemsAvailable:(BOOL)arg1 ;
-(BOOL)addItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(void)doneButtonAction:(id)arg1 ;
-(SCD_Struct_SF8)sendingApplicationAuditToken;
-(BOOL)sharedItemsAvailable;
-(BOOL)otherActivityViewPresented;
-(void)updatePreferredContentSize;
-(void)stopBrowsing;
@end

