/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/QLPreviewCollectionServiceProtocol.h>

@interface QLPreviewCollectionHostContext : NSExtensionContext <QLPreviewCollectionServiceProtocol>
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)setAllowInteractiveTransitions:(BOOL)arg1 ;
-(void)invalidatePreviewCollection;
-(void)hostApplicationDidEnterBackground:(BOOL)arg1 ;
-(void)hostApplicationDidBecomeActive;
-(void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1 ;
-(void)setLoadingString:(id)arg1 ;
-(void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4 ;
-(void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)keyCommandsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tearDownTransition:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)keyCommandWasPerformed:(id)arg1 ;
-(void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 useInteractiveTransition:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_protocolService;
-(void)getNetworkObserverWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setNotificationCenter:(id)arg1 ;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1 ;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

