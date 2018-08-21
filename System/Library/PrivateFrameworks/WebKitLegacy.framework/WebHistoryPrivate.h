/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface WebHistoryPrivate : NSObject {

	NSMutableDictionary* _entriesByURL;
	unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > >* _entriesByDate;
	NSMutableArray* _orderedLastVisitedDays;
	BOOL itemLimitSet;
	int itemLimit;
	BOOL ageInDaysLimitSet;
	int ageInDaysLimit;

}
+(void)initialize;
-(BOOL)findKey:(long long*)arg1 forDay:(double)arg2 ;
-(BOOL)removeItemFromDateCaches:(id)arg1 ;
-(void)insertItem:(id)arg1 forDateKey:(long long)arg2 ;
-(void)addItemToDateCaches:(id)arg1 ;
-(BOOL)removeItemForURLString:(id)arg1 ;
-(BOOL)addItem:(id)arg1 discardDuplicate:(BOOL)arg2 ;
-(int)historyAgeInDaysLimit;
-(int)historyItemLimit;
-(id)ageLimitDate;
-(BOOL)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int*)arg2 collectDiscardedItemsInto:(id)arg3 error:(id*)arg4 ;
-(id)visitedURL:(id)arg1 withTitle:(id)arg2 ;
-(void)rebuildHistoryByDayIfNeeded:(id)arg1 ;
-(id)orderedLastVisitedDays;
-(id)orderedItemsLastVisitedOnDay:(id)arg1 ;
-(void)setHistoryAgeInDaysLimit:(int)arg1 ;
-(void)setHistoryItemLimit:(int)arg1 ;
-(BOOL)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id*)arg3 ;
-(BOOL)saveToURL:(id)arg1 error:(id*)arg2 ;
-(void)addVisitedLinksToVisitedLinkStore:(WebVisitedLinkStore*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)data;
-(void)addItems:(id)arg1 ;
-(BOOL)removeItem:(id)arg1 ;
-(id)itemForURLString:(id)arg1 ;
-(id)itemForURL:(id)arg1 ;
-(BOOL)removeItems:(id)arg1 ;
-(id)allItems;
-(BOOL)containsURL:(id)arg1 ;
-(BOOL)removeAllItems;
@end

