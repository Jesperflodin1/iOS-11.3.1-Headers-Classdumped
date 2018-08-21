/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption {

	NSSet* _disabledBundleIdentifiers;

}

@property (nonatomic,readonly) NSSet * disabledBundleIdentifiers;              //@synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionWithDisabledDataSourceIdentifiers:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)localizedName;
-(NSSet *)disabledBundleIdentifiers;
-(id)dailySnapshotKey;
-(id)JSONObjectRepresentation;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(id)initWithDisabledDataSourceIdentifiers:(id)arg1 ;
-(id)_alphabeticallySortedIdentifiers;
@end

