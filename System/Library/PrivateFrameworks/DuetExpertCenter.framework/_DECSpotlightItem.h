/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <DuetExpertCenter/_DECItem.h>

@class NSString;

@interface _DECSpotlightItem : _DECItem {

	long long _domain;
	NSString* _itemIdentifier;

}

@property (nonatomic,readonly) long long domain;                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)spotlightItemWithDomain:(long long)arg1 itemIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDomain:(long long)arg1 itemIdentifier:(id)arg2 ;
-(BOOL)_isEqualToDECSpotlightItem:(id)arg1 ;
-(NSString *)itemIdentifier;
-(BOOL)isEquivalent:(id)arg1 ;
@end

