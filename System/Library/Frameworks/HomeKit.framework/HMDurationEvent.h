/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMTimeEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface HMDurationEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(double)arg1 ;
-(id)initWithDuration:(double)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(id)initWithDict:(id)arg1 duration:(double)arg2 ;
-(void)_updateDuration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateDuration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_serializeForAdd;
@end

