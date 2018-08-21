/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UINavigationItemChangeObserver;
@class NSArray, NSMutableArray, _UINavigationBarTransitionAssistant, UINavigationItem;

@interface _UINavigationBarItemStack : NSObject {

	NSArray* _previousItems;
	NSMutableArray* _items;
	int _state;
	id<_UINavigationItemChangeObserver> _changeObserver;
	_UINavigationBarTransitionAssistant* _transitionAssistant;

}

@property (assign,nonatomic,__weak) id<_UINavigationItemChangeObserver> changeObserver;                //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) int state;                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) _UINavigationBarTransitionAssistant * transitionAssistant;              //@synthesize transitionAssistant=_transitionAssistant - In the implementation block
@property (nonatomic,readonly) UINavigationItem * topItem; 
@property (nonatomic,readonly) UINavigationItem * backItem; 
@property (nonatomic,readonly) UINavigationItem * previousTopItem; 
@property (nonatomic,readonly) UINavigationItem * previousBackItem; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long itemCount; 
@property (getter=isPushingOrPopping,nonatomic,readonly) BOOL pushingOrPopping; 
-(id)init;
-(id)description;
-(int)state;
-(_UINavigationBarTransitionAssistant *)transitionAssistant;
-(NSArray *)items;
-(UINavigationItem *)topItem;
-(UINavigationItem *)backItem;
-(long long)itemCount;
-(id)initWithItems:(id)arg1 ;
-(BOOL)stackItemsAreEqualTo:(id)arg1 ;
-(void)iterateItems:(/*^block*/id)arg1 ;
-(void)setItems:(id)arg1 withTransitionAssistant:(id)arg2 ;
-(void)completeOperation;
-(UINavigationItem *)previousTopItem;
-(void)pushItem:(id)arg1 withTransitionAssistant:(id)arg2 ;
-(id)_shim_popNestedNavigationItem;
-(void)_shim_pushNestedNavigationItem:(id)arg1 ;
-(void)popItemWithTransitionAssistant:(id)arg1 ;
-(UINavigationItem *)previousBackItem;
-(void)cancelOperation;
-(BOOL)isPushingOrPopping;
-(void)_updateChangeObserversFor:(id)arg1 ;
-(void)_prepareTransitionWithAssistant:(id)arg1 ;
-(void)_completeTransition;
-(long long)_effectiveDisplayModeForItem:(id)arg1 inStack:(id)arg2 ;
-(void)setChangeObserver:(id<_UINavigationItemChangeObserver>)arg1 ;
-(long long)effectiveDisplayModeForItemInCurrentStack:(id)arg1 ;
-(long long)effectiveDisplayModeForItemInPreviousStack:(id)arg1 ;
-(id<_UINavigationItemChangeObserver>)changeObserver;
@end

