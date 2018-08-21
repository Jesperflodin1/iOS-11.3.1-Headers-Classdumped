/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface VNObservation : NSObject <NSCopying, NSSecureCoding> {

	float _confidence;
	NSUUID* _uuid;

}

@property (setter=setUUID:,nonatomic,retain) NSUUID * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) float confidence;                           //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uuid;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(void)setUUID:(id)arg1 ;
@end

