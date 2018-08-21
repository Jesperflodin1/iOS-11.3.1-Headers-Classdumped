/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, SKUIToolbarViewElement;

@interface SKUIToolbarButtonsController : NSObject {

	NSMapTable* _buttonItemElements;
	SKUIToolbarViewElement* _toolbarElement;

}
-(void)_buttonAction:(id)arg1 ;
-(void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2 ;
-(id)initWithToolbarViewElement:(id)arg1 ;
-(id)addButtonItemWithButtonViewElement:(id)arg1 ;
-(void)disconnectAllButtons;
@end

