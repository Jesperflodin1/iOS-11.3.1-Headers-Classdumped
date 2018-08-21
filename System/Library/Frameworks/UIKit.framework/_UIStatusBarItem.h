/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSSet;

@interface _UIStatusBarItem : NSObject {

	BOOL _needsUpdate;
	NSString* _identifier;
	NSMutableDictionary* _displayItems;

}

@property (nonatomic,retain) NSMutableDictionary * displayItems;              //@synthesize displayItems=_displayItems - In the implementation block
@property (copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSSet * dependentEntryKeys; 
@property (readonly) BOOL needsUpdate;                                        //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(id)identifier;
+(id)displayItemIdentifierFromIdentifier:(id)arg1 string:(id)arg2 ;
+(id)itemIdentifierFromString:(id)arg1 ;
+(id)displayItemIdentifierFromString:(id)arg1 ;
+(Class)itemClassForIdentifier:(id)arg1 visualProvider:(id)arg2 ;
+(id)itemIdentifierForDisplayItemIdentifier:(id)arg1 ;
+(id)defaultDisplayIdentifier;
+(id)createItemForIdentifier:(id)arg1 visualProvider:(id)arg2 ;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2 ;
-(NSSet *)dependentEntryKeys;
-(void)setNeedsUpdate;
-(id)_applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(id)displayItemForIdentifier:(id)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(BOOL)needsUpdate;
-(NSMutableDictionary *)displayItems;
-(void)setDisplayItems:(NSMutableDictionary *)arg1 ;
@end

