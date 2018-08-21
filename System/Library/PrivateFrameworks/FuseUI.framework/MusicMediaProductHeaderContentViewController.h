/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicEntityProductHeaderLockupViewDelegate.h>
#import <libobjc.A.dylib/MusicMediaDetailHeaderContentViewController.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@protocol MusicEntityProviding, MusicMediaProductHeaderContentViewControllerDelegate;
@class NSArray, MusicHairlineView, MPAVController, MusicEntityProductHeaderLockupView, MusicEntityViewProductHeaderLockupContentDescriptor, MusicEntityValueContext, MusicClientContext, UIImage, NSString, MusicMediaDetailTintInformation, UIButton, SKUIClientContext;

@interface MusicMediaProductHeaderContentViewController : UIViewController <MusicEntityProductHeaderLockupViewDelegate, MusicMediaDetailHeaderContentViewController, MusicClientContextConsuming> {

	NSArray* _addRemoveNotificationObservers;
	MusicHairlineView* _hairlineView;
	BOOL _needToMakeTitleFirstResponder;
	MPAVController* _player;
	MusicEntityProductHeaderLockupView* _productHeaderLockupView;
	MusicEntityViewProductHeaderLockupContentDescriptor* _productHeaderLockupContentDecriptor;
	double _transitionProgress;
	BOOL _wantsRefreshActivityIndicator;
	BOOL _allowsEditing;
	BOOL _hairlineVisible;
	BOOL _shouldDelayTransitionProgress;
	BOOL _trailingSeparatorInsetFollowsLayoutInsets;
	MusicEntityValueContext* _containerEntityValueContext;
	MusicClientContext* _clientContext;
	id<MusicEntityProviding> _containerEntityProvider;
	id<MusicMediaProductHeaderContentViewControllerDelegate> _delegate;
	UIImage* _editedContentArtworkImage;
	NSString* _lockupArtworkProperty;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	long long _presentationSource;

}

@property (nonatomic,readonly) MusicEntityValueContext * _containerEntityValueContext;                              //@synthesize containerEntityValueContext=_containerEntityValueContext - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                                    //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> containerEntityProvider;                                    //@synthesize containerEntityProvider=_containerEntityProvider - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaProductHeaderContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * editedContentArtworkImage;                                                   //@synthesize editedContentArtworkImage=_editedContentArtworkImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * editableText; 
@property (assign,getter=isHairlineVisible,nonatomic) BOOL hairlineVisible;                                         //@synthesize hairlineVisible=_hairlineVisible - In the implementation block
@property (nonatomic,copy) NSString * lockupArtworkProperty;                                                        //@synthesize lockupArtworkProperty=_lockupArtworkProperty - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                            //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (nonatomic,readonly) long long presentationSource;                                                        //@synthesize presentationSource=_presentationSource - In the implementation block
@property (nonatomic,readonly) UIButton * shareButton; 
@property (assign,nonatomic) BOOL shouldDelayTransitionProgress;                                                    //@synthesize shouldDelayTransitionProgress=_shouldDelayTransitionProgress - In the implementation block
@property (assign,nonatomic) BOOL trailingSeparatorInsetFollowsLayoutInsets;                                        //@synthesize trailingSeparatorInsetFollowsLayoutInsets=_trailingSeparatorInsetFollowsLayoutInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(id<MusicMediaProductHeaderContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MusicMediaProductHeaderContentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_contentTasteControllerDidChangeNotification:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(long long)presentationSource;
-(UIButton *)shareButton;
-(void)_reloadContainerEntityValueContextProperties;
-(void)_containerEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)music_viewInheritedLayoutInsetsDidChange;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(void)setEditedContentArtworkImage:(UIImage *)arg1 ;
-(void)setLockupArtworkProperty:(NSString *)arg1 ;
-(UIImage *)editedContentArtworkImage;
-(NSString *)lockupArtworkProperty;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(MusicEntityValueContext *)_containerEntityValueContext;
-(void)setTrailingSeparatorInsetFollowsLayoutInsets:(BOOL)arg1 ;
-(void)_applyTransitionProgress;
-(void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 transitionProgress:(double)arg3 ;
-(void)setShouldDelayTransitionProgress:(BOOL)arg1 ;
-(id<MusicEntityProviding>)containerEntityProvider;
-(BOOL)shouldDelayTransitionProgress;
-(void)makeEditableTitleBecomeFirstResponder;
-(NSString *)editableText;
-(void)setHairlineVisible:(BOOL)arg1 ;
-(id)_loadProductHeaderLockupContentDescriptor;
-(BOOL)_calculateWantsRefreshButton;
-(void)_applyLockupArtworkProperty;
-(void)_configureProductHeaderLockupContentDescriptor:(id)arg1 withTintInformation:(id)arg2 ;
-(void)_updateProductHeaderLockupProperties;
-(void)_updateHairline;
-(id)_productHeaderLockupContentDescriptor;
-(void)_updateContentTaste;
-(void)_applyProductHeaderLayoutInsets;
-(void)_updateNavigationTitle;
-(void)_configureWithTintInformation;
-(void)_reloadAddRemoveLibraryAndKeepLocalActions;
-(void)_updateHairlineLayoutInsets;
-(CGRect)_hairlineViewFrame;
-(void)productHeaderLockupView:(id)arg1 didSelectCameraButton:(id)arg2 ;
-(void)productHeaderLockupViewDidSelectDownloadProgressButton:(id)arg1 ;
-(void)productHeaderLockupViewDidSelectEditButton:(id)arg1 ;
-(void)productHeaderLockupViewDidSelectRefreshButton:(id)arg1 ;
-(void)productHeaderLockupViewDidSelectLikeDislikeButton:(id)arg1 ;
-(void)productHeaderLockupViewDidSelectShareButton:(id)arg1 ;
-(void)productHeaderLockupViewDidUpdateEditableText:(id)arg1 ;
-(void)productHeaderLockupViewTintColorDidChange:(id)arg1 ;
-(id)initWithContainerEntityProvider:(id)arg1 presentationSource:(long long)arg2 ;
-(BOOL)isHairlineVisible;
-(BOOL)trailingSeparatorInsetFollowsLayoutInsets;
@end
