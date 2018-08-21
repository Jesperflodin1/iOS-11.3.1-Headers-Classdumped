/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMSymptom : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _localizedTitle;

}

@property (readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(BOOL)supportsSecureCoding;
+(NSDictionary*)unarchiveSymptomDict:(id)arg1 ;
+(id)symptomWithType:(long long)arg1 ;
+(id)archive:(id)arg1 ;
+(id)archiveSymptomDict:(NSDictionary*)arg1 ;
+(id)unarchive:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(NSString *)localizedTitle;
@end

