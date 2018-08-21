/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HUItemTableTextEditingController.h>

@class HFItemModule, NSString;

@interface HUItemTableModuleController : NSObject <HUItemTableTextEditingController> {

	HFItemModule* _module;

}

@property (nonatomic,readonly) HFItemModule * module;               //@synthesize module=_module - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HFItemModule *)module;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)textFieldForVisibleItem:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(BOOL)canSelectDisabledItem:(id)arg1 ;
-(void)accessoryButtonTappedForItem:(id)arg1 ;
-(long long)rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2 suggestedAnimation:(long long)arg3 ;
@end
