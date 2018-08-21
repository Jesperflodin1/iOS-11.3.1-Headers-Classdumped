/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebBackForwardListPrivate, WebHistoryItem;

@interface WebBackForwardList : NSObject {

	WebBackForwardListPrivate* _private;

}

@property (nonatomic,readonly) WebHistoryItem * backItem; 
@property (nonatomic,readonly) WebHistoryItem * currentItem; 
@property (nonatomic,readonly) WebHistoryItem * forwardItem; 
@property (assign,nonatomic) int capacity; 
@property (nonatomic,readonly) int backListCount; 
@property (nonatomic,readonly) int forwardListCount; 
+(void)initialize;
-(id)itemAtIndex:(int)arg1 ;
-(void)_close;
-(id)initWithBackForwardList:(Ref<BackForwardList, WTF::DumbPtrTraits<BackForwardList> >*)arg1 ;
-(void)goToItem:(id)arg1 ;
-(id)backListWithLimit:(int)arg1 ;
-(id)forwardListWithLimit:(int)arg1 ;
-(void)setPageCacheSize:(unsigned long long)arg1 ;
-(unsigned long long)pageCacheSize;
-(int)backListCount;
-(int)forwardListCount;
-(id)init;
-(void)dealloc;
-(id)description;
-(int)capacity;
-(void)setCapacity:(int)arg1 ;
-(void)removeItem:(id)arg1 ;
-(WebHistoryItem *)backItem;
-(void)addItem:(id)arg1 ;
-(WebHistoryItem *)currentItem;
-(id)dictionaryRepresentation;
-(void)goBack;
-(void)goForward;
-(void)setToMatchDictionaryRepresentation:(id)arg1 ;
-(WebHistoryItem *)forwardItem;
-(BOOL)containsItem:(id)arg1 ;
@end

