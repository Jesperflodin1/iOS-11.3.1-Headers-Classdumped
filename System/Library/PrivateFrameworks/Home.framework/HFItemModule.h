/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFItemUpdating;
@class NSSet;

@interface HFItemModule : NSObject {

	id<HFItemUpdating> _itemUpdater;

}

@property (nonatomic,readonly) NSSet * itemProviders; 
@property (nonatomic,readonly) NSSet * allItems; 
@property (nonatomic,__weak,readonly) id<HFItemUpdating> itemUpdater;              //@synthesize itemUpdater=_itemUpdater - In the implementation block
-(id)init;
-(NSSet *)itemProviders;
-(NSSet *)allItems;
-(id<HFItemUpdating>)itemUpdater;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
@end

