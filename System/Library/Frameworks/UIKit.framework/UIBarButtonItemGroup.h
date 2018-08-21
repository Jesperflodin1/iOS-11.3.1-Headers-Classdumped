/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIBarButtonItemGroupOwner;
@class NSMutableArray, UIBarButtonItem, _UIButtonGroupViewController, NSArray;

@interface UIBarButtonItemGroup : NSObject <NSCoding> {

	NSMutableArray* _barButtonItems;
	BOOL _locked;
	BOOL _sendActionsBeforeDismiss;
	BOOL _hidden;
	float _priority;
	UIBarButtonItem* _representativeItem;
	id<_UIBarButtonItemGroupOwner> _owner;
	_UIButtonGroupViewController* _representativeUI;
	double _minimumLeadingSpace;
	double _minimumTrailingSpace;

}

@property (assign,setter=_setPriority:,getter=_priority,nonatomic) float priority;                                                               //@synthesize priority=_priority - In the implementation block
@property (getter=_items,nonatomic,readonly) NSArray * items; 
@property (assign,setter=_setOwner:,getter=_owner,nonatomic,__weak) id<_UIBarButtonItemGroupOwner> owner;                                        //@synthesize owner=_owner - In the implementation block
@property (setter=_setRepresentativeUI:,getter=_representativeUI,nonatomic,retain) _UIButtonGroupViewController * representativeUI;              //@synthesize representativeUI=_representativeUI - In the implementation block
@property (assign,setter=_setLocked:,getter=_isLocked,nonatomic) BOOL locked;                                                                    //@synthesize locked=_locked - In the implementation block
@property (assign,setter=_setSendActionsBeforeDismiss:,getter=_sendActionsBeforeDismiss,nonatomic) BOOL sendActionsBeforeDismiss;                //@synthesize sendActionsBeforeDismiss=_sendActionsBeforeDismiss - In the implementation block
@property (assign,setter=_setHidden:,getter=_isHidden,nonatomic) BOOL hidden;                                                                    //@synthesize hidden=_hidden - In the implementation block
@property (assign,setter=_setMinimumLeadingSpace:,getter=_minimumLeadingSpace,nonatomic) double minimumLeadingSpace;                             //@synthesize minimumLeadingSpace=_minimumLeadingSpace - In the implementation block
@property (assign,setter=_setMinimumTrailingSpace:,getter=_minimumTrailingSpace,nonatomic) double minimumTrailingSpace;                          //@synthesize minimumTrailingSpace=_minimumTrailingSpace - In the implementation block
@property (nonatomic,copy) NSArray * barButtonItems; 
@property (nonatomic,retain) UIBarButtonItem * representativeItem;                                                                               //@synthesize representativeItem=_representativeItem - In the implementation block
@property (getter=isDisplayingRepresentativeItem,nonatomic,readonly) BOOL displayingRepresentativeItem; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_items;
-(void)setBarButtonItems:(NSArray *)arg1 ;
-(void)_setLocked:(BOOL)arg1 ;
-(BOOL)_isLocked;
-(id)_owner;
-(void)_setHidden:(BOOL)arg1 ;
-(BOOL)_isHidden;
-(float)_priority;
-(BOOL)isDisplayingRepresentativeItem;
-(UIBarButtonItem *)representativeItem;
-(void)_setRepresentativeUI:(id)arg1 ;
-(BOOL)_sendActionsBeforeDismiss;
-(void)_validateAllItems;
-(void)_setOwner:(id)arg1 ;
-(id)initWithBarButtonItems:(id)arg1 representativeItem:(id)arg2 ;
-(NSArray *)barButtonItems;
-(void)_removeBarButtonItem:(id)arg1 ;
-(void)_removeRepresentative:(id)arg1 ;
-(void)setRepresentativeItem:(UIBarButtonItem *)arg1 ;
-(void)_setMinimumLeadingSpace:(double)arg1 ;
-(void)_setMinimumTrailingSpace:(double)arg1 ;
-(void)_setPriority:(float)arg1 ;
-(id)_representativeUI;
-(void)_setSendActionsBeforeDismiss:(BOOL)arg1 ;
-(double)_minimumLeadingSpace;
-(double)_minimumTrailingSpace;
@end

