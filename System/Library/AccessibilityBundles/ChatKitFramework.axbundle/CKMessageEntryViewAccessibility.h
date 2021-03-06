/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:32:04 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKitFramework/ChatKitFramework-Structs.h>
#import <ChatKitFramework/__CKMessageEntryViewAccessibility_super.h>

@interface CKMessageEntryViewAccessibility : __CKMessageEntryViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)_accessibilityIsMediaJoystickVisible;
-(void)_accessibilityApplyArrowLabel;
-(void)_accessibilityApplyPhotoLabel;
-(void)_accessibilityApplyBrowserLabel;
-(void)_accessibilityApplyPlaceholderLabel;
-(void)_accessibilityApplySelectedTraitToMediaButton;
-(void)layoutSubviews;
-(BOOL)accessibilityViewIsModal;
-(BOOL)accessibilityElementsHidden;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(void)loadRecordedAudioViewsIfNeeded;
-(id)initWithFrame:(CGRect)arg1 marginInsets:(UIEdgeInsets)arg2 shouldAllowImpact:(BOOL)arg3 shouldShowSendButton:(BOOL)arg4 shouldShowSubject:(BOOL)arg5 shouldShowPluginButtons:(BOOL)arg6 shouldShowCharacterCount:(BOOL)arg7 ;
-(void)browserButtonTapped:(id)arg1 ;
-(void)arrowButtonTapped:(id)arg1 ;
-(void)collapsedPlaceholderLabelTapped:(id)arg1 ;
-(void)updateEntryView;
-(void)presentAudioActionMenu;
-(void)configureAudioActionMenuControllerForPlayback:(BOOL)arg1 ;
-(void)audioMenuItemAction:(id)arg1 ;
-(void)touchUpInsideDeleteAudioRecordingButton:(id)arg1 ;
-(void)audioReplyButtonStart:(id)arg1 ;
-(void)audioReplyButtonStop:(id)arg1 ;
-(void)audioReplyButtonCancel:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
@end

