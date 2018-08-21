/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSSecureCoding, NSSecureCoding;
@interface CalPersistentLRUCacheItem : NSObject <NSSecureCoding> {

	id<NSCopying><NSSecureCoding> _key;
	id<NSSecureCoding> _value;
	CalPersistentLRUCacheItem* _nextItem;
	CalPersistentLRUCacheItem* _previousItem;

}

@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id<NSSecureCoding> value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) CalPersistentLRUCacheItem * nextItem;                         //@synthesize nextItem=_nextItem - In the implementation block
@property (assign,nonatomic,__weak) CalPersistentLRUCacheItem * previousItem;              //@synthesize previousItem=_previousItem - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(id<NSCopying><NSSecureCoding>)key;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id<NSSecureCoding>)value;
-(void)setNextItem:(CalPersistentLRUCacheItem *)arg1 ;
-(void)setPreviousItem:(CalPersistentLRUCacheItem *)arg1 ;
-(CalPersistentLRUCacheItem *)nextItem;
-(CalPersistentLRUCacheItem *)previousItem;
@end
