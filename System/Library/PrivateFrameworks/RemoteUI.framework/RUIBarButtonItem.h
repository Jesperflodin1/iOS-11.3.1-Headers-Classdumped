/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class UIBarButtonItem;

@interface RUIBarButtonItem : RUIElement {

	UIBarButtonItem* _barButtonItem;
	/*^block*/id _action;

}

@property (nonatomic,copy) id action;                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
-(id)action;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setAction:(id)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)_buttonPressed:(id)arg1 ;
@end

