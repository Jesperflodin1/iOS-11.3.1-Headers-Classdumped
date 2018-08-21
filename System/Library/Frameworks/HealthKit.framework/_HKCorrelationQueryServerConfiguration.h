/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDictionary;

@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration {

	NSDictionary* _filterDictionary;

}

@property (nonatomic,retain) NSDictionary * filterDictionary;              //@synthesize filterDictionary=_filterDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFilterDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)filterDictionary;
@end

