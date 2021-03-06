/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCDerivedPersonalizationData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBPersonalizationProfile, NSDictionary, NSString;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying> {

	NTPBPersonalizationProfile* _profile;
	NSDictionary* _aggregatesByFeatureKey;

}

@property (nonatomic,copy) NTPBPersonalizationProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSDictionary * aggregatesByFeatureKey;              //@synthesize aggregatesByFeatureKey=_aggregatesByFeatureKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)aggregatesByFeatureKey;
-(id)aggregatesForFeatureKeys:(id)arg1 ;
-(id)initWithPersonalizationProfile:(id)arg1 ;
-(id)aggregateForFeatureKey:(id)arg1 ;
-(void)setAggregatesByFeatureKey:(NSDictionary *)arg1 ;
-(NTPBPersonalizationProfile *)profile;
-(void)setProfile:(NTPBPersonalizationProfile *)arg1 ;
@end

