/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATXIntent : NSObject <NSSecureCoding> {

	id _intent;
	NSString* _bundleId;
	unsigned long long _intentType;

}

@property (nonatomic,readonly) id intent;                                  //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                        //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) unsigned long long intentType;              //@synthesize intentType=_intentType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)intentType;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)intent;
-(NSString *)bundleId;
-(id)initWithIntent:(id)arg1 bundleId:(id)arg2 type:(unsigned long long)arg3 ;
@end
