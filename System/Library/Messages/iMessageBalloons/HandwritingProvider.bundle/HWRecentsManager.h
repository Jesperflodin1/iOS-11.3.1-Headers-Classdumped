/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSUserDefaults, NSArray;

@interface HWRecentsManager : NSObject {

	BOOL _defaultsLoaded;
	BOOL _defaultsLoadedChecked;
	BOOL _storedItemsLoaded;
	NSMutableDictionary* _itemsData;
	NSMutableArray* _cachedSortedItems;
	NSUserDefaults* _handwritingDefaults;

}

@property (nonatomic,readonly) NSArray * items; 
+(id)sharedManager;
+(id)recentsDomain;
-(void)reloadStoredItems;
-(void)_loadStoredItems;
-(void)_loadItemsFromIMRecentItemsList;
-(void)_addItem:(id)arg1 dataRepresentation:(id)arg2 persist:(BOOL)arg3 ;
-(void)_deleteItem:(id)arg1 notify:(BOOL)arg2 ;
-(void)_sortItems;
-(void)_storeItemAsData:(id)arg1 optionalData:(id)arg2 persist:(BOOL)arg3 ;
-(void)_notifyChanges;
-(void)_storeItemDataToDefaults:(id)arg1 withUUID:(id)arg2 persist:(BOOL)arg3 ;
-(BOOL)_defaultsLoaded;
-(void)_loadDefaultItems;
-(void)_synchronizeHandwritingToDefaults;
-(void)_loadItemsFromNSUserDefaults;
-(id)init;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(void)deleteItem:(id)arg1 ;
@end

