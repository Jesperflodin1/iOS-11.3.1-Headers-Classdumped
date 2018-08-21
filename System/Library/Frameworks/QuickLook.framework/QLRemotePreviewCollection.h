/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/QLPreviewCollectionProtocol.h>

@protocol QLPreviewControllerStateProtocolHostOnly;
@class QLPreviewCollectionHostContext;

@interface QLRemotePreviewCollection : _UIRemoteViewController <QLPreviewCollectionProtocol> {

	id<QLPreviewControllerStateProtocolHostOnly> _stateManager;
	BOOL _isAvailable;
	BOOL _allowInteractiveTransitions;
	id _request;
	QLRemotePreviewCollection* _accessoryViewController;
	QLPreviewCollectionHostContext* _hostContext;

}

@property (retain) id request;                                                       //@synthesize request=_request - In the implementation block
@property (retain) QLRemotePreviewCollection * accessoryViewController;              //@synthesize accessoryViewController=_accessoryViewController - In the implementation block
@property (retain) QLPreviewCollectionHostContext * hostContext;                     //@synthesize hostContext=_hostContext - In the implementation block
@property (assign) BOOL isAvailable;                                                 //@synthesize isAvailable=_isAvailable - In the implementation block
@property (assign,nonatomic) BOOL allowInteractiveTransitions;                       //@synthesize allowInteractiveTransitions=_allowInteractiveTransitions - In the implementation block
-(void)setRequest:(id)arg1 ;
-(BOOL)isRemote;
-(id)request;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(id)accessoryView;
-(QLRemotePreviewCollection *)accessoryViewController;
-(void)setAccessoryViewController:(QLRemotePreviewCollection *)arg1 ;
-(void)setIsAvailable:(BOOL)arg1 ;
-(void)setAllowInteractiveTransitions:(BOOL)arg1 ;
-(void)invalidatePreviewCollection;
-(void)hostApplicationDidEnterBackground:(BOOL)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1 ;
-(void)setLoadingString:(id)arg1 ;
-(void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4 ;
-(BOOL)allowInteractiveTransitions;
-(void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)keyCommandsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tearDownTransition:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)keyCommandWasPerformed:(id)arg1 ;
-(QLPreviewCollectionHostContext *)hostContext;
-(void)setHostContext:(QLPreviewCollectionHostContext *)arg1 ;
-(void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 useInteractiveTransition:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1 ;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_presentViewControllerForError:(id)arg1 ;
-(BOOL)isAvailable;
@end

