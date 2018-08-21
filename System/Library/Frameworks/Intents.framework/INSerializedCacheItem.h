/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface INSerializedCacheItem : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _identifier;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)deserializeCacheItem:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)serializeCacheableObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)deserializeCacheItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSDictionary *)payload;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 payload:(id)arg3 ;
@end

