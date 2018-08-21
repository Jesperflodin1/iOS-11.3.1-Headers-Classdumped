/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIBarButtonItem;

@interface _UIButtonBarTargetAction : NSObject {

	UIBarButtonItem* _barButtonItem;
	/*^block*/id _actionFilter;

}

@property (nonatomic,readonly) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,copy) id actionFilter;                                  //@synthesize actionFilter=_actionFilter - In the implementation block
@property (nonatomic,readonly) SEL proxyAction; 
-(id)init;
-(UIBarButtonItem *)barButtonItem;
-(id)initWithBarButtonItem:(id)arg1 ;
-(void)setActionFilter:(id)arg1 ;
-(SEL)proxyAction;
-(void)_invoke:(id)arg1 forEvent:(id)arg2 ;
-(id)actionFilter;
@end
