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
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface RadioTrackPlaybackDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _current;
	NSDate* _expirationDate;
	double _pauseTime;
	NSDate* _skipDate;
	long long _storeID;
	NSDictionary* _trackInfo;

}

@property (getter=isCurrent,nonatomic,readonly) BOOL current;              //@synthesize current=_current - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) double pauseTime;                           //@synthesize pauseTime=_pauseTime - In the implementation block
@property (nonatomic,readonly) NSDate * skipDate;                          //@synthesize skipDate=_skipDate - In the implementation block
@property (nonatomic,readonly) long long storeID;                          //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * trackInfo;              //@synthesize trackInfo=_trackInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTrack:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(NSDictionary *)trackInfo;
-(double)pauseTime;
-(NSDate *)skipDate;
-(BOOL)isCurrent;
-(id)queueTrackDictionary;
-(long long)storeID;
@end

