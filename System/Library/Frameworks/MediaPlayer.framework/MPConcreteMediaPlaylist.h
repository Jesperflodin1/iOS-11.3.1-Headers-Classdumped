/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaPlaylist.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, MPMediaQuery;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _properties;
	MPMediaQuery* _itemsQuery;
	void* _clusterPlaylist;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(unsigned long long)mediaTypes;
-(id)representativeItem;
-(id)valueForProperty:(id)arg1 ;
-(id)mediaLibrary;
-(id)itemsQuery;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)addItemWithProductID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addMediaItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)existsInLibrary;
-(void)removeFirstItem;
-(id)multiverseIdentifier;
-(id)initWithProperties:(id)arg1 itemsQuery:(id)arg2 ;
-(void)_updateLibraryForPlaylistEdit:(id)arg1 ;
-(BOOL)_allowsEditing;
-(void)appendItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)replaceItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)replaceItemsWithPersistentIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appendItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)populateWithSeedItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2 ;
-(id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)endGeneratingGeniusClusterItems;
-(void)removeAllItems;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valuesForProperties:(id)arg1 ;
@end
