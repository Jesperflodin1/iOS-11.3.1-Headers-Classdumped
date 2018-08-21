/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/Frameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/DOCHostInfoViewControllerProxy.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/DOCAppearanceProtocol.h>

@protocol DOCRemoteAppearanceInterface, DOCServiceInfoViewControllerProxy;
@class _UIResilientRemoteViewContainerViewController, UIViewController, DOCConfiguration, DOCItem, DOCAppearance, NSString;

@interface DOCInfoViewController : UINavigationController <DOCHostInfoViewControllerProxy, UIPopoverPresentationControllerDelegate, DOCAppearanceProtocol> {

	_UIResilientRemoteViewContainerViewController* _remoteViewController;
	UIViewController*<DOCRemoteAppearanceInterface> _localViewController;
	DOCConfiguration* _configuration;
	id<DOCServiceInfoViewControllerProxy> _serviceProxy;
	DOCItem* _item;
	DOCAppearance* _lastAppearance;
	BOOL _showTagsOnly;
	BOOL _inPopoverMode;

}

@property (assign,nonatomic) BOOL inPopoverMode;                    //@synthesize inPopoverMode=_inPopoverMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateAppearance:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 items:(id)arg2 showTagsOnly:(BOOL)arg3 ;
-(void)_updateForPresentation;
-(void)setInPopoverMode:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 items:(id)arg2 ;
-(BOOL)inPopoverMode;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)dismissViewController;
-(id)remoteViewController;
-(void)updatePreferredContentSize:(CGSize)arg1 ;
-(id)remoteInterface;
-(void)_doneButtonPressed:(id)arg1 ;
@end
