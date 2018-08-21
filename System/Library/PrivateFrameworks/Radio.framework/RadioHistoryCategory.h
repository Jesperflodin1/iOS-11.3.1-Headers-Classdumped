/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface RadioHistoryCategory : NSObject <NSCopying, NSMutableCopying> {

	NSString* _categoryDescription;
	NSArray* _items;
	NSString* _name;
	NSString* _stationHash;
	long long _stationID;
	long long _type;

}

@property (nonatomic,copy,readonly) NSString * categoryDescription;              //@synthesize categoryDescription=_categoryDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                             //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationHash;                      //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                              //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
-(long long)stationID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)stationHash;
-(NSString *)categoryDescription;
@end

