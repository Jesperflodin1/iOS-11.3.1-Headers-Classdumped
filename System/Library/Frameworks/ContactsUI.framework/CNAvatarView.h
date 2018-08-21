/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CNContactChangesObserver.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/CNCardTransitioning.h>

@protocol CNAvatarViewDelegate, CNUILikenessRendering, CNCancelable, CNSchedulerProvider;
@class UIView, UIImage, CNContactStore, PRPersonaStore, NSArray, NSString, UIImageView, UINavigationController, CNAvatarCardController, CNContact;

@interface CNAvatarView : UIView <CNContactChangesObserver, CNAvatarCardControllerDelegate, CNCardTransitioning> {

	BOOL _showsActionsOnTap;
	BOOL _showsActionsOnForcePress;
	BOOL _threeDTouchEnabled;
	BOOL _showsContactOnTap;
	BOOL _registeredInNotifier;
	BOOL _registeredContactAction;
	BOOL _disableCornerRadiusForAvatar;
	BOOL _autoUpdateContact;
	BOOL _asynchronousRendering;
	BOOL _allowsAnimation;
	BOOL _prohibitsPersonaFetch;
	unsigned long long _style;
	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;
	NSArray* _contacts;
	NSString* _name;
	NSString* _message;
	id<CNAvatarViewDelegate> _delegate;
	UIView* _forcePressView;
	id<CNUILikenessRendering> _imageRenderer;
	id<CNCancelable> _rendererToken;
	UIImageView* _imageView;
	long long _displayedImageState;
	UINavigationController* _contactViewNavigationController;
	CNAvatarCardController* _cardController;
	id<CNSchedulerProvider> _schedulerProvider;
	UIImage* _overrideImage;
	long long _monogrammerStyle;

}

@property (assign,nonatomic) BOOL showsActionsOnTap; 
@property (assign,nonatomic) BOOL showsActionsOnForcePress; 
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) id<CNUILikenessRendering> imageRenderer;                               //@synthesize imageRenderer=_imageRenderer - In the implementation block
@property (nonatomic,retain) id<CNCancelable> rendererToken;                                        //@synthesize rendererToken=_rendererToken - In the implementation block
@property (nonatomic,copy) UIImageView * imageView;                                                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long displayedImageState;                                         //@synthesize displayedImageState=_displayedImageState - In the implementation block
@property (nonatomic,retain) UINavigationController * contactViewNavigationController;              //@synthesize contactViewNavigationController=_contactViewNavigationController - In the implementation block
@property (nonatomic,retain) CNAvatarCardController * cardController;                               //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;                             //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (assign) BOOL registeredInNotifier;                                                       //@synthesize registeredInNotifier=_registeredInNotifier - In the implementation block
@property (assign) BOOL registeredContactAction;                                                    //@synthesize registeredContactAction=_registeredContactAction - In the implementation block
@property (nonatomic,retain) UIImage * overrideImage;                                               //@synthesize overrideImage=_overrideImage - In the implementation block
@property (assign,nonatomic) BOOL disableCornerRadiusForAvatar;                                     //@synthesize disableCornerRadiusForAvatar=_disableCornerRadiusForAvatar - In the implementation block
@property (assign,nonatomic) long long monogrammerStyle;                                            //@synthesize monogrammerStyle=_monogrammerStyle - In the implementation block
@property (nonatomic,readonly) UIImage * contentImage; 
@property (nonatomic,readonly) CGRect contentImageFrame; 
@property (assign,nonatomic) BOOL autoUpdateContact;                                                //@synthesize autoUpdateContact=_autoUpdateContact - In the implementation block
@property (assign,nonatomic) BOOL asynchronousRendering;                                            //@synthesize asynchronousRendering=_asynchronousRendering - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation; 
@property (assign,nonatomic) BOOL allowsAnimation;                                                  //@synthesize allowsAnimation=_allowsAnimation - In the implementation block
@property (assign,nonatomic) BOOL prohibitsPersonaFetch;                                            //@synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                       //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) PRPersonaStore * personaStore;                                       //@synthesize personaStore=_personaStore - In the implementation block
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled;                   //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                    //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * message;                                                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsContactOnTap;                                                //@synthesize showsContactOnTap=_showsContactOnTap - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories; 
@property (assign,nonatomic,__weak) UIView * forcePressView;                                        //@synthesize forcePressView=_forcePressView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * transitioningView; 
@property (nonatomic,readonly) CGRect transitioningFrame; 
@property (nonatomic,readonly) CGRect transitioningContentFrame; 
@property (nonatomic,readonly) UIImage * transitioningImage; 
@property (nonatomic,readonly) CGRect transitioningImageFrame; 
@property (assign) BOOL transitioningImageVisible; 
@property (nonatomic,readonly) UIView * transitioningContentView; 
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 shouldUseCachingRenderer:(BOOL)arg2 description:(id)arg3 ;
+(id)makeDescriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 shouldUseCachingRenderer:(BOOL)arg2 ;
+(BOOL)defaultThreeDTouchSupport;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)enabled;
-(id<CNAvatarViewDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CNAvatarViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)style;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIImageView *)imageView;
-(UIView *)transitioningView;
-(CGRect)transitioningFrame;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(UIImage *)contentImage;
-(NSString *)message;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)bypassActionValidation;
-(BOOL)isThreeDTouchEnabled;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(BOOL)arg2 style:(unsigned long long)arg3 schedulerProvider:(id)arg4 ;
-(void)setupAvatarCardControllerIfNeeded;
-(void)setAutoUpdateContact:(BOOL)arg1 ;
-(id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
-(id<CNCancelable>)rendererToken;
-(long long)displayedImageState;
-(void)setImage:(id)arg1 state:(long long)arg2 ;
-(void)_renderContactsImage;
-(void)clearImage;
-(void)_updateRegistration;
-(void)setRendererToken:(id<CNCancelable>)arg1 ;
-(id)currentLikenessScope;
-(id<CNUILikenessRendering>)imageRenderer;
-(void)setDisplayedImageState:(long long)arg1 ;
-(void)_updateCardActions;
-(CNAvatarCardController *)cardController;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(BOOL)autoUpdateContact;
-(UINavigationController *)contactViewNavigationController;
-(void)setContactViewNavigationController:(UINavigationController *)arg1 ;
-(NSArray *)actionCategories;
-(UIView *)forcePressView;
-(void)contactDidChange;
-(CGRect)contentImageFrame;
-(void)contactDidChange:(id)arg1 ;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(BOOL)avatarCardController:(id)arg1 shouldShowContact:(id)arg2 ;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1 ;
-(void)avatarCardControllerWillDismiss:(id)arg1 ;
-(void)avatarCardControllerDidDismiss:(id)arg1 ;
-(CGRect)transitioningContentFrame;
-(UIImage *)transitioningImage;
-(CGRect)transitioningImageFrame;
-(BOOL)transitioningImageVisible;
-(void)setTransitioningImageVisible:(BOOL)arg1 ;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
-(void)setDisableCornerRadiusForAvatar:(BOOL)arg1 ;
-(double)_diameter;
-(void)showContact:(id)arg1 ;
-(void)dismissContactViewController:(id)arg1 ;
-(id)imageForTransitioningToFullScreen;
-(PRPersonaStore *)personaStore;
-(BOOL)showsContactOnTap;
-(void)setImageRenderer:(id<CNUILikenessRendering>)arg1 ;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(BOOL)registeredInNotifier;
-(void)setRegisteredInNotifier:(BOOL)arg1 ;
-(BOOL)registeredContactAction;
-(void)setRegisteredContactAction:(BOOL)arg1 ;
-(BOOL)disableCornerRadiusForAvatar;
-(long long)monogrammerStyle;
-(void)setMonogrammerStyle:(long long)arg1 ;
-(BOOL)asynchronousRendering;
-(BOOL)allowsAnimation;
-(void)setAllowsAnimation:(BOOL)arg1 ;
-(BOOL)prohibitsPersonaFetch;
-(void)setShowsActionsOnTap:(BOOL)arg1 ;
-(BOOL)showsActionsOnTap;
-(BOOL)showsActionsOnForcePress;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(UIImage *)overrideImage;
-(id)descriptorForRequiredKeys;
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)setShowsActionsOnForcePress:(BOOL)arg1 ;
-(void)setForcePressView:(UIView *)arg1 ;
-(void)setShowsContactOnTap:(BOOL)arg1 ;
-(void)setAsynchronousRendering:(BOOL)arg1 ;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)setProhibitsPersonaFetch:(BOOL)arg1 ;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
@end

